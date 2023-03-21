//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void getIprt(int* ptr) {
//	printf("Enter a number: ");
//	scanf("%d",ptr);
//
//}
//int main() {
//	int a;
//	getIprt(&a);
//	printf("You entered:%d\n",a);
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int getVIptr(int* ptr, int min, int max);

void getIptr(int* ptr);

int main() {
	int a;
	getIptr(&a);
	printf("You ented: %d\n", a);

	if (getVIptr(&a, 10, 20)) {
		printf("You entered: %d\n", a);
	}
	else {
		printf("Invalid value(%d), min: 10, max: 20\n", a);
	}

	return 0;
}

int getVIptr(int* ptr, int min, int max) {
	int ret = 0;
	getIptr(ptr);
	while (*ptr < min || *ptr > max) {
		printf("Invalid value (%d), min: %d, max: %d\n", *ptr, min, max);
		getIptr(ptr);
	}
	ret = *ptr;
	return ret;
}

void getIptr(int* ptr) {
	printf("Enter a number: ");
	scanf("%d", ptr);

}
