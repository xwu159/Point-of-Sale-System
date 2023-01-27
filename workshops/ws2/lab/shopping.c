#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void line(char fill, int length){
    int i = 0;
	while (i < length) {
		printf("%c", fill);
        i++;
	}
	printf("\n");
}

void shoppingStats(int noOfItems) {
	int counter;
	double price,sum,aver;
    printf("Please enter the price of the %d items bought...\n", noOfItems);
    counter = 1;
    sum = 0;
    while (counter <= noOfItems) {
        printf("%d> ", counter);
        scanf("%lf", &price);
        sum += price;
        counter++;
    }
    aver = sum / noOfItems;
    line('-',50);
    printf("Total price for all the items purchased: %.2lf\n", sum);
    printf("Average price of the items: %.2lf\n", aver);
    line('=', 50);
}