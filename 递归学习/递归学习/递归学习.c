#include<stdio.h>
#include <string.h>

//递归的方法求阶乘
int prime(int x)
{
	if (x > 1)
	{
	return x = x * prime(x - 1);
	}
	return 1;

}

int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = prime(n);
	printf("%d的阶乘为%d\n", n, ret);
	return 0;
}

//方法一
int Fib(int x)
{
	int i = 0;
	int a = 0;
	int b = 1;
	int ret = 1;
	if (x <= 2)
	{
		return 1;
	}
	else
	{
		for (i = 3;i <= x;i++)
		{
			a = b;
			b = ret;
			ret = a + b;
		}
	return ret;
	}
}

//方法二
int Fib(int x)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (x > 2)
	{
		c = b + a;
		a = b;
		b = c;
		x--;
	}
	return c;
}

int main()
{
	int i = 0;
	int ret = 0;
	scanf("%d", &i);
	ret = Fib(i);
	printf("第%d个斐波那契数为%d\n", i, ret);
	return 0;
}

//循环的方式
int Fac1(int a)
{
	int i = 0;
	int mul = 1;
	for (i = 1;i <= a;i++)
	{
		mul = i * mul;
	}
	return mul;
}

//递归的方式（斐波那契数列）
int Fac1(int a)
{
	int i = 1;
	int mul = 1;
	if (a > 1)
	{
		return a*Fac1(a-1);
	}
	else
	{
		return 1;
	}
}

int main()
{
	int num = 0;
	int ret = 0;
	scanf("%d", &num);
	ret = Fac1(num);
	printf("%d的阶乘为%d\n", num, ret);
	return 0;
}



//模拟实现strlen
int my_strlen(char* str) 
{
	int count = 0;
	while (*str != '\0')
	{
		str++;
		count++;
	}
	return count;
}

//递归的方法，不使用临时变量
//strlen=my_strlen("bit")
//strlen=1+my_strlen("it")
//strlen=1+1+my_strlen("t")
//strlen=1+1+1+my_strlen()
//strlen=1+1+1+0

int my_strlen(char* str)
{
	if (*str != '\0')
	{
		return (1 + my_strlen(str + 1));
	}
	else
		return 0;
}

int main()
{
	char arr[] = "bit";
	int len = my_strlen(arr);
	printf("len=%d\n", len);

	return 0;
}

//按顺序输出输入的每一位数字
void print(int x)
{
	if (x > 10)
	{
		print(x / 10);
	}
	printf("%d ", x % 10);

}

int main()
{
	int num = 0;
	scanf("%d", &num);
	print(num);
	return 0;
}