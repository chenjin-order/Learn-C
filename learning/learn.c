#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char arr[] = "hello bit";
	memset(arr, 'x', 5);
	printf("%s", arr);

	return 0;
}
