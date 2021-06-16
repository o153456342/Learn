#include <stdio.h>

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = Add(a, b);
//	printf("Add=%d", sum);
//	return 0;
//}

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	//printf的返回值为字符个数，首先变成 printf("%d", printf("%d",2）），然后变成printf("%d",1）；所以结果为4321
//	return 0;
//}

//void Add(int* p)
//{
//	(*p)++;
//}
//
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("num=%d\n", num);
//	Add(&num);
//	printf("num=%d\n", num);	
//	Add(&num);
//	printf("num=%d\n", num);
//	return 0;
//}


//int bin_search(int arr[],int x, int sz)
//{
//
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (x > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else if (x < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//		return -1;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int a = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	scanf("%d", &a);
//	if ((bin_search(arr, a, sz)) == -1)
//		printf("查无此数");
//	else
//			
//printf("找到此数，位置为 % d", (bin_search(arr, a, sz)));
//
//	return 0;
//}

//int is_leap_year(int a)
//{
//	if (((a % 4 == 0) && (a % 100 != 0)) || a % 400==0)
//	{
//		return 1;
//	}
//	else
//		return 0;
//}
//
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if ((is_leap_year(year)) == 1)
//	{
//		printf("%d年是闰年", year);
//	}
//	else
//		printf("%d年不是闰年", year);
//
//	return 0;
//}

//int is_prime(int x)
//{
//	int i = 0;
//	for (i = 2;i <= sqrt(x);i += 1)
//	{
//		if (x % i == 0)
//		{
//			return 0;
//		}
//	}
//		return 1;
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if ((is_prime(a)) == 1)
//	{
//		printf("此数为素数");
//	}
//	else
//	{
//		printf("此数不是素数");
//	}
//	
//	
//	return 0;
//}

//void SWAP(int* pa, int* pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//
//int main()
//{
//	int x= 10;
//	int y = 20;
//	printf("a=%d,b=%d\n", x, y);
//	SWAP(&x, &y);
//	printf("a=%d,b=%d\n", x, y);
//
//	return 0;
//}

//int get_max(int a, int b)
//{
//	return (a > b) ? a : b;
//}
//
//int main()
//{
//	int a = 12;
//	int b = 5;
//	int max = get_max(a, b);
//	printf("max=%d", max);
//	return 0;
//}

//int main()
//{
//	char arr[] = "hello world";
//	int arr1[] = { 0 };
//	memset(arr, arr1, 5);
//	printf("%s\n", arr);
//	return 0;
//
//}