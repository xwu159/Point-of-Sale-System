// -----------------------------------------------------------
// Name            Date            Email                   ID
//Xinyang Wu    Aprith,2023    xwu159@myseneca.ca   153821228
//I have done all the coding by myself and only copied the code
//that my professor provided to complete my project milestones.
/////////////////////////////////////////////////////////////////
* **********************************************************************/ #include <stdio.h>
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
	LoadItems(filename);
	menu();
	saveItems(filename);
	printf("Goodbye!\n");
}


