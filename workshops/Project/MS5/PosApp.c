#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "POS.h"
#include "PosApp.h"
#include "PosUI.h"
#include "utils.h"
#include <string.h>

struct Item items[MAX_NO_ITEMS];
int noOfItems;

void start(const char* action) {
	printf(">>>> %s...\n", action);
}

void saveItems(const char filename[]) {
	start("Saving Items");
	printf(">>>> Done!...\n");
	FILE* fp = NULL;
	fp = fopen(filename, "w");
	if (fp != NULL) {
		int i = 0;
		for (i = 0; i < noOfItems; i++) {
			fprintf(fp, "%s,%s,%.2f,%d,%d\n", items[i].SKU, items[i].name, items[i].price, items[i].taxed, items[i].quantity);
		}
		fclose(fp);
	}
	else {
		printf("Could not open >>%s<<\n", filename);
	}
}


void inventory(void) {
	double tav = 0;
	printf(">>>> List Items...\n");
	listItems();
	int i;
	for (i = 0; i < noOfItems; i++) {
		tav += cost(&items[i]) * items[i].quantity;
	}
	printf("                               Total Asset: $  | %13.2lf |\n", tav);
	printf("-----------------------------------------------^---------------^\n");
}

void addItem(void) {
	char sku[MAX_SKU_LEN] = { 0 };
	char name[19] = {0};
	char taxed;
	double price;
	int quantity;
	start("Adding Item");
	if (noOfItems == MAX_NO_ITEMS) 
	{
		printf("This system cannot store more that %d different Items in the inventory!\n", MAX_NO_ITEMS);
	}
	else{
	printf("SKU: ");
	scanf("%4s", sku);
	flushKey();
	printf("Name: ");
	scanf("%[^\n]s", name);
	flushKey();
	printf("Price: ");
	price = getDbl();
	printf("Is the item Taxed? (Y)es/(N)o: ");
	scanf("%c", &taxed);
	flushKey();
	printf("Quantity: ");
	quantity = getIntMM(1, 999, "Quantity");
	printf(">>>> Done!...\n");
	strcpy(items[noOfItems].SKU, sku);
	strncpy(items[noOfItems].name, name, 18);
	items[noOfItems].name[18] = '\0';
	items[noOfItems].taxed = (taxed == 'y' || taxed == 'Y') ? 1 : 0;
	items[noOfItems].price = price;
	items[noOfItems].quantity = quantity;
	noOfItems++;
	}
}


void removeItem(void) {
	int row;
	int i;
	start("Remove Item");
	row = selectItems();
	for (i=row-1; i < noOfItems-1; i++)
	{
		items[i] = items[i+1];
	}
	noOfItems--;
	printf(" >>>> Done!...\n");
}
void stockItem(void) {
	int index;
	int add;
	start("Stock Items");
	index=selectItems();
	printf("Quantity to add: ");
	add=getIntMM(1,MAX_STOCK_NUMBER-items[index-1].quantity, "Quantity to Add");
	items[index - 1].quantity += add;
	printf(">>>> Done!...\n");
}
void POS(void) {
	int billCount = 0, done = 0;
	int i;
	struct Item* bill_items[MAX_BILL_ITEMS] = {NULL};
	start("Point Of Sale");
	
	while(!done && billCount < MAX_BILL_ITEMS) 
	{
		int index = search();
		if (index == -1)
		{ 
			printf("SKU not found!\n");
		}
		else if (index != -2&&items[index].quantity == 0)
		{
			printf("Item sold out!\n");
		}
		else if (index == -2)
		{
			done = 1;
		}
		else
		{
			if (items[index].quantity > 0)
			{
				items[index].quantity--;
				display(&items[index]);
				bill_items[billCount] = &items[index];
				billCount++;
			}
		}
		
	} 
	
	if (billCount > 0)
	{
		printf("+---------------v-----------v-----+\n");
		printf("| Item          |     Price | Tax |\n");
		printf("+---------------+-----------+-----+\n");
		double totalCost = 0.0;
		for (i = 0; i < billCount; i++) {
			totalCost += billDisplay(bill_items[i]);
		}
		printf("+---------------^-----------^-----+\n");
		printf("| total:%19.2lf |\n", totalCost);
		printf("^---------------------------^\n");
	}
}



double cost(const struct Item* item){
	double the_cost;
	the_cost = item->price * (1 + item->taxed * TAX);
	return the_cost;
}

int loadItems(const char filename[]) {
	start("Loading Items");
	FILE* file = fopen(filename, "r");
	if (!file) {
		printf("Failed to open file %s\n", filename);
		return 0;
	}
	noOfItems = 0;
	while (noOfItems < MAX_NO_ITEMS && fscanf(file, "%6[^,],%20[^,],%lf,%d,%d\n", items[noOfItems].SKU, items[noOfItems].name, &items[noOfItems].price, &items[noOfItems].taxed, &items[noOfItems].quantity) == 5) {
		noOfItems++;
	};
	fclose(file);
	printf(">>>> Done!...\n");
	return noOfItems;
}

void listItems(void) {
	printf(" Row | SKU    | Item Name          | Price |TX | Qty |   Total |\n");
	printf("-----|--------|--------------------|-------|---|-----|---------|\n");
	int i;
	for (i = 0; i < noOfItems; i++) {
		char iName[19];
		strncpy(iName, items[i].name, 18);
		iName[18] = '\0';
		printf("%4d | %6s | %-18s |%6.2lf | ", i + 1, items[i].SKU, iName, items[i].price);
		printf("%s | %3d |%8.2lf |\n", items[i].taxed ? "T" : " ", items[i].quantity, cost(&items[i]) * items[i].quantity);
	}
	printf("-----^--------^--------------------^-------^---^-----^---------^\n");
}

double billDisplay(const struct Item* item) {
	char cString[15] = {0};
	strncpy(cString, item->name, 14);
	printf("| %-14s|%10.2f | %3s |\n",cString,cost(item), item->taxed == 1 ? "Yes" : "   ");
	return cost(item);
}

void display(const struct Item* item) {
	printf("=============v\n");
	printf("%-13s%s\n","Name:",item->name);
	printf("%-13s%s\n", "Sku:", item->SKU);
	printf("%-13s%.2lf\n", "Price:", item->price);
	double itemCost = item->taxed == 1 ? cost(item) : 0.00;
	if (itemCost > 0) {
		printf("%-13s%.2lf\n", "Price + tax:", itemCost);
	}
	else {
		printf("%-13s%s\n", "Price + tax:", "N/A");
	}
	printf("%-13s%d\n", "Stock Qty:", item->quantity);
	printf("=============^\n");
}


int search(void) {
	int i;
	char sku[MAX_SKU_LEN] = { 0 };
	int result = -1;
	printf("Sku: ");
	scanf("%19[^\n]", sku);
	flushKey();
	if (sku[0]=='\0') {
		result = -2;
	}
	else {
		for (i = 0; result == -1 && i < noOfItems; i++) {
			if (strcmp(items[i].SKU, sku) == 0) {
				result = i;
			}
		}
	}
	return result;
}

int selectItems(void) {
	printf("Select an item:\n");
	printf("-----v--------v--------------------v-------v---v-----v---------v\n");
	listItems();
	int value;
	printf("Select row: ");
	value=getIntMM(1,noOfItems,"Row Number");
	return value;
}
