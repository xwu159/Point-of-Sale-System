#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "POS.h"
#include "PosApp.h"
#include "PosUI.h"
#include "utils.h"
#include <string.h>

struct Item items[MAX_NO_ITEMS];
int noOfItems=0;

void start(const char* action) {
	printf(">>>> %s...\n", action);
}

void saveItems(const char filename[]) {
	start("Saving Items");
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
	start("Adding Item");
}
void removeItem(void) {
	start("Remove Item");
}
void stockItem(void) {
	start("Stock Items");
}
void POS(void) {
	start("Point Of Sale");
}

double cost(const struct Item* item) {
	double the_cost;
	the_cost = item->price * (1 + item->taxed * TAX);
	return the_cost;
}

int LoadItems(const char filename[]) {
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
