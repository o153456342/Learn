#define _CRT_SECURE_NO_WARNINGS 1

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>


//�����������ķ���
struct S
{
	int n;
	int* arr;//ָ��һ����Ե��ڵĿռ�
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

//��������
// ��������ǰ�����ٰ���һ����Ա
// sizeof�������ֽṹ���С����������������ڴ�
//struct S
//{
//	int n;
//	int arr[0];//δ֪��С��-���������Ա-����Ĵ�С�ǿ��Ե�����
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

//��Ŀ
//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//	//����֮��p[]�����٣��������ص�ַλ�ã���str����ʱΪ�Ƿ�����
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
////1.���Pָ��Ŀռ�֮�����㹻���ڴ�ռ����׷�ӣ���ֱ��׷�ӣ��󷵻�p
////2.���pָ��Ŀռ�֮��û���㹻���ڴ�ռ����׷�ӣ���realloc������������һ���µ��ڴ����򣬿���һ����������Ŀռ䣬
////����ԭ���ڴ��е����ݿ����������ͷžɵ��ڴ�ռ䣬��󷵻��¿��ٵ��ڴ�ռ��ַ
////3. ����һ���µı�������realloc�����ķ���ֵ
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
//	free(p);//������ͷ��ڴ潫�ᵼ���ڴ�й©������
//	p = NULL;
//
//	return 0;
//}
//
////calloc
////��malloc������Ϊ��calloc���ڷ��ص�ַ֮ǰ������Ŀռ��ÿ���ֽڳ�ʼ��Ϊ0
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