#include <stdio.h>
#include "POS.h"
#include "PosApp.h"
#include "PosUI.h"
#include "utils.h"

int menu(void) {
	int input;
	int done = 0;
	while (!done) {
		printf("The Sene-Store\n");
		printf("1- Inventory\n");
		printf("2- Add item\n");
		printf("3- Remove item\n");
		printf("4- Stock item\n");
		printf("5- POS\n");
		printf("0- exit program\n");
		printf("> ");
		input = getIntMM(0, 5, "Selection");
		switch (input) {
		case 1:
			inventory();
			break;
		case 2:
			addItem();
			break;
		case 3:
			removeItem();
			break;
		case 4:
			stockItem();
			break;
		case 5:
			POS();
			break;
		default:
			done = 1;
			break;
		}
	}
	return input;
}
void runPos(const char filename[]) {
	loadItems(filename);
	menu();
	saveItems(filename);
	printf("Goodbye!\n");
}


