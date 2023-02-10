
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"
int getInt(void) {
	int sku;
	printf("Enter Sku or 0 to exit: ");
	scanf("%d",&sku);
	flushKey();
	return sku;
}

void flushKey(void) {
	char ch = 'x';
	while (ch != '\n') {
		ch = getchar();
	}
}

int yes(void) {
	int res;
	char resp;
	printf("(Y)es or (N)o: ");
	resp = getSingleChar();
	if (resp == 'Y' || resp == 'y') {
		res = 1;
	}
	else {
		res = 0;
	}
	return res;
}

char getSingleChar(void) {
	char ch = getchar();
	flushKey();
	return ch;
}