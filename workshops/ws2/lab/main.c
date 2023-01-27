/*Name:Xinyang Wu, Email:xwu159@myseneca.ca, Seneca Student ID:153821228, date:2023 January 27nd*/
/*I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void line(char fill, int length){
	int i;
	for (int i = 0; i < length; i++) {
		printf('%c', fill);
	}
	printf("\n");
}

int main(void) {
	line('=', 20);
	line('-', 40);
	line('#', 60);
	return 0;
}

