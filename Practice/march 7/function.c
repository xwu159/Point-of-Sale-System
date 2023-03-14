#include <stdio.h>
int max(int x, int y)
{
	int z;
	if (x > y) { z = x; }
	else { z = y; }
	return z;
}
void help(void)
{
	printf("*******************\n");
	printf("print help information\n");
	printf("*******************\n");

}

int main()
{
	int num;
	num = max(5, 10);
	printf("num=%d\n", num);
	help();
	return 0;

}