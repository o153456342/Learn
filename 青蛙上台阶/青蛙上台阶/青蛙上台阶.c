#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int step(int x)
{
	if (x == 0 || x == 1)
	{
		return 1;
	}
	else
	{
		return  step(x - 1) + step(x - 2);
	}
}

int main()
{
	int n = 0;
	int ret = 0;
	printf("��������Ҫ�ϼ���¥��:>");
	scanf("%d", &n);
	ret = step(n);
	printf("һ����%d�ַ���", ret);
	return 0;
}