#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
typedef unsigned int u_int;
//extern int g_val;
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d ", a);
//}
extern int Add(int, int); 
int main()
{
	/*unsigned int num = 100;
	u_int num1 = 320;
	int i = 0;
	while (i<10)
	{
		test();
		i++;
	}*/
	/*printf("%d\n", g_val);*/
	int a = 10;
	int b = 20;
	int sum = Add(a, b);
	printf("sum = %d\n", sum);
	return 0;
}