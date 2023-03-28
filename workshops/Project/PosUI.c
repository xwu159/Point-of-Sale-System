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
			printf(">>>> Inventory...\n");
			break;
		case 2:
			printf(">>>> Adding Item...\n");
			break;
		case 3:
			printf(">>>> Remove Item...\n");
			break;
		case 4:
			printf(">>>> Stock Items...\n");
			break;
		case 5:
			printf(">>>> Point Of Sale...\n");
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