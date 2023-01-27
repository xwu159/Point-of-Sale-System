#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void line(char fill, int length);

int main(void) {
	line('=', 20);
	line('-', 40);
	line('#', 60);
	return 0;
}