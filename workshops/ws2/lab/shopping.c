#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void line(char fill, int length){
	for (int i = 0; i < length; i++) {
		printf("%c", fill);
	}
	printf("\n");
}
