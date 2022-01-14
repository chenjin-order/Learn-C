#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h> 
int main()
{
	int age = 20;
	if (age < 18)
		printf("少年");
	else if (age >= 18 && age < 40)
		printf("青年");
	else if (age >= 40 && age < 60)
		printf("中年");
	else
		printf("晚年");
	return 0;
}