#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60 ");
again:	
	printf("请注意，你的电脑将在一分钟之后关机，请输入取消关机，就停止关机\n");
	scanf("%s", input);
	if (strcmp(input, "取消关机") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}
