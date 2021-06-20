#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>

int SIZE(int x)
{
	int count=0;
	while (x>0)
	{
		 x /= 10;
		count++;
	}
	return count;
}


int sum(int x, int size)
{
	int ret = 0;
	while(x)
	{
		ret += pow(x%10,size);
		x /= 10;
	}
	return ret;
}

int main()
{
	int i = 0;
	for (i = 1; i <= 100000; i++)
	{
		int size = SIZE(i);
		if (i == sum(i, size))
			printf("%d ", i);
	}
	return 0;
}
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