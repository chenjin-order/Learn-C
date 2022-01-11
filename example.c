#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a=1;
	int b = (a++) + (a++) + (a++);
	printf("%d\n", a);
	printf("%d\n", b);
	int arr[10] = { 0 };
	printf("%d\n", arr[0]);
	return 0;
}