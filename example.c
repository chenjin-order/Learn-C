#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c','\0'};
	printf("%zd\n", strlen(arr1));
	printf("%zd\n", strlen(arr2));
	return 0;
}