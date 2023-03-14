#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() 
{
	int a = 0;
	int b = 0;
	int sum = 0;
	printf("input 2 integers, space sperated: ");
	scanf("%d %d", &a, &b);
	sum = a + b;
	printf("the addition is %d",sum);
	return 0;
}