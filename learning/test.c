#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 0;
	int n = 0;
	scanf("%d", &n);
	for (int i = 1 ;i <= n ;i++)
	{
		int m = 1;
		for (int j = 1;j <= i ;j++)
		{
			m *= j;
		}
		a += m;
	}
	printf("%d\n", a);
	return 0;
}