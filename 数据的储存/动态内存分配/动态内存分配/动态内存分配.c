#define _CRT_SECURE_NO_WARNINGS 1

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>


//替代柔性数组的方法
struct S
{
	int n;
	int* arr;//指向一块可以调节的空间
};

int main()
{
	struct S* ps = (struct S*)malloc(sizeof(struct S));
	ps->arr = malloc(5*sizeof(int));

	int i = 0;
	for (i = 0; i < 5; i++)
	{
		ps->arr[i] = i;
	}
	int* ptr = realloc(ps->arr, 10 * sizeof(int));
	if (ptr != NULL)
	{
		ps->arr = ptr;
		for (i = 5; i < 10; i++)
		{
			ps->arr[i] = i;
		}
		for (i = 0; i < 10; i++)
		{
			printf("%d ", ps->arr[i]);
		}
	}
	free(ps->arr);
	ps->arr = NULL;
	free(ps);
	ps = NULL;

	return 0;
}

//柔性数组
// 柔性数组前边至少包含一个成员
// sizeof返回这种结构体大小不包含柔性数组的内存
//struct S
//{
//	int n;
//	int arr[0];//未知大小的-柔型数组成员-数组的大小是可以调整的
//};
//
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));//4+20
//	ps->n = 100;
//
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//	struct S* ptr = (struct S*)realloc(ps,44);
//	if (ptr != NULL)
//	{
//		ps = ptr;
//		for (i = 5; i < 10; i++)
//		{
//			ps->arr[i] = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", ps->arr[i]);
//		}
//	}
//	free(ps);
//	ps=NULL;
//
//	return 0;
//}

//题目
//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//	//返回之后，p[]被销毁，仅仅返回地址位置，当str访问时为非法访问
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

////realloc
////1.如果P指向的空间之后有足够的内存空间可以追加，则直接追加，后返回p
////2.如果p指向的空间之后没有足够的内存空间可以追加，则realloc函数会重新找一个新的内存区域，开辟一块满足需求的空间，
////并把原来内存中的数据拷贝回来，释放旧的内存空间，最后返回新开辟的内存空间地址
////3. 得用一个新的变量接受realloc函数的返回值
//int main()
//{
//	int* p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//			printf("%d ", *(p + i));
//		}
//	}
//	int* p2 = realloc(p, 40);
//	int i = 0;
//	if (p2 != NULL)
//	{
//		p = p2;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		*(p2 + i) = i;
//		printf("%d ", *(p2 + i));
//	}
//	free(p);//如果不释放内存将会导致内存泄漏的问题
//	p = NULL;
//
//	return 0;
//}
//
////calloc
////与malloc的区别为，calloc会在返回地址之前把申请的空间的每个字节初始化为0
//int main()
//{
//	int* p = (int*)calloc(10,sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//
//	return 0;
//}
//
////malloc
//int main()
//{
//	int* p = (int*)malloc(INT_MAX);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//	
//	return 0;
//}