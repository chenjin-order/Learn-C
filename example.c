#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h> 
int main()
{
	int age = 20;
	if (age < 18)
		printf("����");
	else if (age >= 18 && age < 40)
		printf("����");
	else if (age >= 40 && age < 60)
		printf("����");
	else
		printf("����");
	return 0;
}