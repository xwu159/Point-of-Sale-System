//keyword: sizeof, typedef,volatile
//sizeof is used for measuring how many byte in the ram
//typedef typedefine alias the existing type  unsigned short int a = 10;
//short int a;
//short int INT16;
//typedef short int INT16;
//INT16 b=short int b;
//volatile 


#include <stdio.h>
int main() 
{
	int i = 0;
	int a, b, c;
	for (i = 0; i < 999; i++) 
	{ 
		a = i / 100;
		b = i % 100 / 10;
		c = i % 10;
		if (i == a*a*a + b*b*b + c*c*c)
		{
			printf("i=%d\n", i);
		}
	
	}






	return 0;
}