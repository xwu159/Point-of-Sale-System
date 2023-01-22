#pragma warning(disable : 4996)
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
	printf("The average is :%d\n", d);
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