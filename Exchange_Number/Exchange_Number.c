#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a = 20;
	int b = 10;
	int temp = 0;
	temp = a;
	a = b;
	b = temp;
	printf("a=%d\n", a);
	printf("b=%d\n", b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("a=%d\n", a);
	printf("b=%d\n", b);
	a = a^b;
	b = a^b;
	a = a^b;
	printf("a=%d\n", a);
	printf("b=%d\n", b);
	return 0;
}