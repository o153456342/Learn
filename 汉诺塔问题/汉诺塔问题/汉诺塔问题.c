#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////汉诺塔问题
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
	printf("请输入共放入多少积木:>");
	scanf("%d", &n);
	hanoi(n, 'a', 'b', 'c');

	return 0;
}