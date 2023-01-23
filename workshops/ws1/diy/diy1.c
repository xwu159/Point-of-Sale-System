/*Name:Xinyang Wu, Email:xwu159@myseneca.ca, Seneca Student ID:153821228, date:2023 January 22nd*/
/*I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void title(void);
void line(void);
void info(void);

int main(void)
{
	int a, b, c, d;
	title();
	line();
	info();
	line();
	printf("Enter the marks for the following subjects,\nIPC144: ");
	scanf("%d",&a);
	printf("ULI101: ");
	scanf("%d",&b);
	printf("EAC150: ");
	scanf("%d",&c);
	d=(a+b+c)/3;
	printf("The average is: %d\n", d);
	line();
	return 0;
}
void title(void) {
	printf("IPC144 NBB\tWorkshop 1\tPart 2\n");
}
void line(void) {
	printf("------------------------------------------------------------\n");
}

void info(void) {
	printf("Name:\n\tXinyang Wu\nEmail:\n\txwu159@myseneca.ca\n");
}