#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	int a;
	int b;
	printf("두 개의 정수를 입력하시오:");
	scanf_s("%d %d", &a, &b);

	printf("%d+%d=%d\n", a, b, a + b);
	printf("%d-%d=%d\n", a, b, a - b);
	printf("%d*%d=%d\n", a, b, a * b);
	printf("%d/%d=%d\n", a, b, a / b);
	return 0;
}