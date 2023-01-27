/*Name:Xinyang Wu, Email:xwu159@myseneca.ca, Seneca Student ID:153821228, date:2023 January 27nd*/
/*I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void line(char fill, int length);
void shoppingStats(int noOfItems);

int main(void) {
	int noOfItems;
	printf("Money Spending Calculator\n");
	line('=', 25);
	printf("How many items were bought?");
	printf("\n> ");
	scanf("%d",&noOfItems);
	shoppingStats(noOfItems);
	return 0;
}



