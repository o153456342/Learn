#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	char c = 1;
	printf("%u\n", sizeof(c));//1
	printf("%u\n", sizeof(+c));//4
	printf("%u\n", sizeof(!c));//1

}

//struct Stu
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//
//int main()
//{
//	struct Stu s1 =
//	{
//		"����",20,"2014112510"
//	};
//	struct Stu* ps = &s1;
//	printf("������%s\n", ps->name);
//	printf("���䣺%d\n", ps->age);
//	printf("������%s\n", s1.name);
//	printf("���䣺%d\n", s1.age);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	printf("%d", a++);
//	printf("%d", a);
//	return 0;
//}

//�����������1�ĸ���
//f
//int main()
//{
//	int a = 0;
//	int i = 0;
//	int count=0;
//	scanf("%d", &a);
//
//	������
//	while (a)
//	{
//		a = a & (a - 1);
//		count++;
//	}
//
//	����һ
//	for (i = 0; i < 32; i++)
//	{
//		if (  1 == ((a >> i) & 1))
//		{
//			count++;
//		}
//	}
//	printf("����%d��1\n", count);
//	return 0;
//}

////������������ʹ����ʱ����
//int main()
//{
//	int a = 0;
//	int b = 0;
//
//	scanf("%d%d", &a, &b);
//	printf("a=%d b=%d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}