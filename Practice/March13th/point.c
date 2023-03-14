#include <stdio.h>
void test() {
	int num = 100;
	printf("%p\n", &num);
	int* p = NULL;
	printf("sizeof(p)=%d\n", sizeof(p));
	p = &num;
	printf("num=%d\n", num);
	printf("*p=%d\n",*p);

}
int main() {
	test();

	return 0;
}
