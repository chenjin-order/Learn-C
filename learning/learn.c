#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60 ");
again:	
	printf("��ע�⣬��ĵ��Խ���һ����֮��ػ���������ȡ���ػ�����ֹͣ�ػ�\n");
	scanf("%s", input);
	if (strcmp(input, "ȡ���ػ�") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}
