#include <stdio.h>
#include <stdlib.h>
#include <string.h>



////�궨��ʵ��offsetof
//#define OFFSETOF(struct_name, member_name) (int)&(((struct_name*)0)->member_name)
//
//struct S
//{
//	char a;
//	int b;
//	char c;
//};
//
//int main()
//{
//	printf("%d\n", OFFSETOF(struct S, a));
//	printf("%d\n", OFFSETOF(struct S, b));
//	printf("%d\n", OFFSETOF(struct S, c));
//	return 0;
//}


//union������
//�жϴ�С��
//int check_sys()
//{
//	//int a = 1;
//	//return *((char*)&a);
//
//	union Un
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	return u.c;
//}
//
//int main()
//{
//	int ret = check_sys();
//	if (1 == ret)
//	{
//		printf("С��\n");
//	}
//	else
//		printf("���");
//	return 0;
//}

//enumö��
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
//	enum Sex s = MALE;
//	printf("%d\n", sizeof(s));
//	return 0;
//}

//struct s1
//{
//	char c1;
//	int a;
//	char c2;
//};
//
//struct s2
//{
//	char c1;
//	char c2;
//	int a;
//};
//
//struct s3
//{
//	double d;
//	char c;
//	int i;
//};
//
//int main()
//{
//	struct s1 s1 = { 0 };
//	printf("%d\n", sizeof(s1));
//	struct s2 s2 = { 0 };
//	printf("%d\n", sizeof(s2));
//	struct s3 s3={0};
//	printf("%d\n", sizeof(struct s3));
//	return 0;
//}

////�ṹ��������
//struct Node
//{
//	int data;//������
//	struct Node* next;//ָ����
//};