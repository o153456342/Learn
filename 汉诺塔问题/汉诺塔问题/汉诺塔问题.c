#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////��ŵ������
void move(char x, char y)
{
	printf("%c -> %c\n", x, y);
}

void hanoi(int n, char x, char y, int z)
{
	if (n == 1)
	{
		move(x, z);
	}
	else
	{
		hanoi(n - 1, x, z, y);
		move(x, z);
		hanoi(n - 1, y, x, z);
	}
}

int main()
{
	int n = 0;
	printf("�����빲������ٻ�ľ:>");
	scanf("%d", &n);
	hanoi(n, 'a', 'b', 'c');

	return 0;
}