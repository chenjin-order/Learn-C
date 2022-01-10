#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
	int sum1 = 0;
	int sum2 = 0;
	scanf("%d%d", &sum1, &sum2);
	int sum = Add(sum1, sum2);
	printf("%d\n", sum);
	return 0;
}