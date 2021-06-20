#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <assert.h>

int main()
{
	int line = 0;
	int i = 0;//打印行数
	int j = 0;//空格数
	int k = 0;//* 数
	scanf("%d", &line);
	for (i = 0; i < line; i++)
		//从上到中
	{
		for (j = 0; j <line - 1-i; j++)
			//空格数
		{
			printf(" ");
		}
		for (k = 1; k <= 2 * i + 1; k += 1)
			//*数
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 0; i < line-1; i++)
		//从中到下
	{
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		for (k = 1; k <= 2*(line-1-i)-1; k += 1)
		{
			printf("*");
		}
		printf("\n");
	}
}

////2+22+222+22222+22222
//int main()
//{
//	int a = 0;
//	int n = 0;
//	int i = 0;
//	int ret = 0;
//	scanf("%d%d", &a, &n);
//	int sum = 0;
//	for (i = 0; i < n; i++)
//	{
//		ret = 10 * ret + a;
//		sum += ret;
//	}
//	printf("%d", sum);
// return 0;
//}

//逆转字符串
//void reverse_char(char* a)
//{
//	assert(a);
//	int len = strlen(a);
//	char* left = a;
//	char* right = a + len - 1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//
//
//}
//
//int main()
//{
//	char a[256] = { 0 };
//	gets(a);
//	reverse_char(a);
//	printf("%s\n", a);
//}

//水仙花数
//int SIZE(int x)
//{
//	int count=0;
//	while (x>0)
//	{
//		 x /= 10;
//		count++;
//	}
//	return count;
//}
//
//
//int sum(int x, int size)
//{
//	int ret = 0;
//	while(x)
//	{
//		ret += pow(x%10,size);
//		x /= 10;
//	}
//	return ret;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100000; i++)
//	{
//		int size = SIZE(i);
//		if (i == sum(i, size))
//			printf("%d ", i);
//	}
//	return 0;
//}
//
//int my_strlen(char* str)
//{
//	char* start=str;
//	char* end=str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return (end - start);
//}
//
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}