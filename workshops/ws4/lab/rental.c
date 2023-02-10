
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "rental.h"
#include "utils.h"
void menu(void) {
	printf("Equipment     Price      SKU\n");
	printf("----------------------------\n");
	printf("Skis          12.30      101\n");
	printf("Boots         10.45      102\n");
	printf("Poles         2.99       203\n");
	printf("Helmet        3.99       204\n");
	printf("Winter Pants  14.30      305\n");
	printf("Winter Jacket 20.55      306\n");
	printf("----------------------------\n");
}

void rental(void) {
	int sku;
	double price = 0.0;
	menu();
	do {
		sku = getInt();
	if (sku != 0) { 
		price += rent(sku);
	}
	} while (sku!=0);
	printf("----------------------------\n");
	printf("Total price:%12.2lf\n",price);
	printf("Tax:%20.2lf\n", price*0.13);
	printf("Total + Tax:%12.2lf$\n",price*1.13);
	printf("****************************\n");
		
}

double rent(int sku) {
	double price = 0.0;
	switch (sku) {
	case 101:
		price = 12.30;
		printf("Skis ............. %.2lf$\n",price);
		break;
	case 102:
		price = 10.45;
		printf("Boots ............ %.2lf$\n", price);
		break;
	case 203:
		price = 2.99;
		printf("Poles ............. %.2lf$\n", price);
		break;
	case 204:
		price = 3.99;
		printf("Helmet ...........  %.2lf$\n", price);
		break;
	case 305:
		price = 14.30;
		printf("Winter Pants ..... %.2lf$\n", price);
		break;
	case 306:
		price = 20.55;
		printf("Winter Jacket .... %.2lf$\n", price);
		break;
	default:
		printf("Invalid Selection!\n");
	}
	return price;
}
