#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include<assert.h>

//��Ծ���
int find_num(int arr[3][3], int k, int* px,int* py)
{
	int x = 0;
	int y = *py-1;
	while (x <= *px-1 && y >= 0)
	{
		if (arr[x][y] > k)
		{
			y--;
		}
		else if (arr[x][y] < k)
		{
			x++;
		}
		else
		{
			*px = x;
			*py = y;
			return 1;
		}

	}
		return 0;
}

int main()
{
	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int k = 7;
	int x = 3;
	int y = 3;
	int ret = find_num(arr, k,&x,&y);
	if (ret == 1)
	{
		printf("�ҵ��� ");
		printf("�±�Ϊ%d %d\n", x, y);
	}
	else
		printf("δ�ҵ�");
}

////�����ַ��� �����ⷨ
//void left_move(char* arr, int k)
//{
//	assert(arr != NULL);
//	int i = 0;
//	int j = 0;
//	int len = strlen(arr);
//	for (i = 0; i < k; i++)
//	{
//		char tmp = *arr;
//		for (j = 0; j < len-1; j++)
//		{
//			*(arr + j) = *(arr + j + 1);
//		}
//		*(arr + len - 1) = tmp;
//	}
//}

////��������
//void reverse(char* left, char* right)
//{
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void left_move(char* arr,int k)
//{
//	int len = strlen(arr);
//	assert(arr != NULL);
//	assert(k < len);
//	reverse(arr,arr+k-1);//��ת���
//	reverse(arr+k,arr+len-1);//��ת�ұ�
//	reverse(arr,arr+len-1);//������ת
//}

//int is_left_move(char* arr1, char* arr2)
//{
//	int i = 0;
//	int len = strlen(arr1);
//	for (i = 0; i < len; i++)
//	{
//		left_move(arr1, 1);
//		int ret=strcmp(arr1, arr2);
//		if (ret == 0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}

////ͨ����arr1ƴ�ӵ�arr1��ߣ�����abcdefabcdef,����arr2������ַ��������Ƿ���ƥ������ַ���
//int is_left_move(char* arr1, char* arr2)
//{
//	//strcat(arr1, arr1);
//	int len1 = strlen(arr1);
//	int len2 = strlen(arr2);
//	if (len1 != len2)
//	{
//		return 0;
//	}
//	//ƴ��
//	strncat(arr1, arr1, len1);
//	//���Ӵ�
//	char* ret=strstr(arr1, arr2);
//	
//	if (ret == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//
//}
//
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "bcdefa";
//	int ret=is_left_move(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//	return 0;
//}

////����
//int main()
//{
//	char arr[] = "abcdef";
//	int k = 1;
//	left_move(arr, k);
//	printf("%s", arr);
//	return 0;
//}

////�ĸ�������
////A�����ֲ�����   B��������C     C��������D      D��C�ں�˵
////3���滰һ���ٻ�
//int main()
//{
//	int killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//		{
//			printf("killer = %c\n", killer);
//		}
//	}
//	return 0;
//}

////���������
//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			if (i == j)
//			{
//				arr[i][j] = 1;
//			}
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//		}
//	}
//	for (i = 0; i <10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//		
//	}
//
//	
//	return 0;
//}

//void move(int* arr,int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		while ((left < right) && (arr[left] % 2 == 1))//left < right Ϊ�˱���ȫ������
//		{
//			left++;
//		}
//		while ((left < right) && (arr[right] % 2 == 0))//����ȫ��ż��
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr, sz);
//
//	for (i = 0; i < sz - 1; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//һ��Ǯ��һƿ���֣�������ƿ��һƿ���֣�һ�����Ժȶ���ƿ
//int main()
//{
//	int money = 20;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);
//	total = money;
//	empty = money;
//	while (empty>=2)
//	{
//		total += empty / 2;
//		empty = empty % 2 + empty / 2;
//	}
//	printf("%d", total);
//}

//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//
//	printf("%s\n", **++cpp);
//	//++cpp�ƶ���c+2,���ν�����ָ��POINT��
//	printf("%s\n", *--*++cpp+3);
//	//++cpp����cpp��c+2�ƶ���c+1���׵�ַ������������c+1��--��Ϊc���ٴν�����ָ��"ENTER"��+3�ַ���������������ĸ����ӡ��ER
//	printf("%s\n", *cpp[-2] + 3);
//	//cpp[-2] = *(cpp-2)  cpp����,��c+1���׵�ַ�ƶ���c+3���׵�ַ���ҽ����ã�����c+3,�ٽ�����һ������"FIRST"����+3����Z�ַ���������������ĸ����ӡ��ST
//	printf("%s\n", cpp[-1][-1]+1);
//	//cpp[-1][-1]=*(*(cpp-1)-1), �Ƚ�����c+2���׵�ַ���õ�c+2��-1���õ�c+1�������õõ�NEW������+1���ַ����õ�EW
//	return 0;
//}

//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	return 0;
//}

//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);//���ڴ��Ͽ��������ƶ�һ���ֽڣ����Ϊ0x02000000
//	printf("%x,%x", ptr1[-1], *ptr2);
//}

//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}* p;//20���ֽ�
//
//int main()
//{
//	p = (struct Test*)0x100000;
//	printf("&p\n", p + 0x1);//+20 = 0x14
//	printf("&p\n", (unsigned long)p + 0x1);//ת��Ϊ������+1 = +0x1
//	printf("&p\n", (unsigned int *)p + 0x1);//+4
//	return 0;
//}

//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));//2 5
//	return 0;
//}

//struct stu
//{
//	char name[20];
//	int age;
//};
//
////void qsort(void* base, size_t num, size_t width, int(*cmp)(const void* e1, const void* e2));
////base �������ʼ��ַ//num ����Ĵ�С//width �����ÿ��Ԫ�ص��ֽ���byte//�ԱȺ���cmp
//
//void Swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//	}
//}
//
////ð������
//void bubble_sort(void* base, int sz, int width, int(*cmp)(const void* e1, const void* e2))
//{
//	int i = 0;
//	//����
//	for (i = 0; i < sz - 1; i++)
//	{
//		//ÿһ�˱ȽϵĶ���
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			//��Ԫ�رȽ�
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0 )
//				//widthΪһ��Ԫ�ص��ֽ�����charΪһ���ֽڿ�ȣ�char*ÿ�μ�1�ƶ�һ���ֽڣ��ӵ�һ��Ԫ���ƶ����ڶ���Ԫ�ع��ƶ�width���ֽ�
//			{
//				//����
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//
//			}
//		}
//	}
//}
//
//int cmp_int(const void* e1, const void* e2)
//{
//	return (*(int*)e1 - *(int*)e2);
//}
//
//int cmp_float(const void* e1, const void* e2)
//{
//	return ((int)(*(float*)e1 - *(float*)e2));
//}
//
//int cmp_stu_age(const void* e1, const void* e2)
//{
//	return (((struct stu*)e1)->age - ((struct stu*)e2)->age);
//}
//
//int cmp_stu_name(const void* e1, const void* e2)
//{
//	//�ַ����Ƚ���strcmp
//	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
//}
//
//int main()
//{
//	int i = 0;
//	int arr1[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	struct stu s[3] = { {"zhangsan",20},{"lisi",25},{"wangwu",30} };
//	float arr2[10] = { 9.0,8.0,7.0,6.0,5.0,4.0,3.0,2.0,1.0,0.0 };
//	int sz1 = sizeof(arr1) / sizeof(arr1[0]);
//	int sz2 = sizeof(arr2) / sizeof(arr2[0]);
//	int sz3 = sizeof(s) / sizeof(s[0]);
//	qsort(arr1, sz1, sizeof(arr1[0]), cmp_int);
//	qsort(arr2, sz2, sizeof(arr2[0]), cmp_float);
//	qsort(s, sz3, sizeof(s[0]), cmp_stu_age);
//	qsort(s, sz3, sizeof(s[0]), cmp_stu_name);
//	for (i = 0; i < sz1; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < sz2; i++)
//	{
//		printf("%f ", arr2[i]);
//	}
//	printf("\n");
//
//
//	return 0;
//
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;//����ָ��
//	int(*pfArr[4])(int, int);//pfArr��һ������-����ָ������
//	int(*(*ppfArr)[4])(int, int) = &pfArr;//ppfArr��һ������ָ�룬ָ������麬���ĸ�Ԫ�أ�ÿ��Ԫ����һ������ָ�� int(*)(int,int)
//}

//void meau()
//{
//	printf("*********************************\n");
//	printf("*****  1.Add  2.Sub   3.Mul  ****\n");
//	printf("*****  4.Div  5.Xor   0.exit ****\n");
//	printf("*********************************\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int Xor(int x, int y)
//{
//	return x ^ y;
//}
//
////�ص�����  
//void Calc(int(*pf)(int, int)) //������������ص�����������ָ���ҵ���Ӧ����������
//{
//	int x = 0;
//	int y = 0;
//	printf("����������������:>");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pf(x, y));
//}
//
//int main()
//{
//	int input = 0;
//	do
//	{
//		meau();
//		printf("������:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		case 5:
//			Calc(Xor);
//			break;
//		case 0:
//			printf("�˳�����");
//			break;
//		default:
//			printf("�������������ѡ��");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//void(*Signal(int, void(*)(int)))(int);
////signal��һ����������
////signal�����Ĳ�����2������һ����int���ڶ����Ǻ���ָ�룬�ú���ָ��ָ��ĺ����Ĳ�����int������ֵ��void
////signal�����ķ�������Ҳ��һ������ָ�룺�ú���ָ��ָ��ĺ����Ĳ�����Int,����������void

//int arr[5];			//arr ��һ��5��Ԫ�ص���������
//int* paar1[10];		//parr1��һ�����飬������ʮ��Ԫ�أ�ÿ��Ԫ�ص�������int*��parr1��ָ������
//int(*parr2)[10];	//parr2��һ��ָ�룬ָ��ָ��һ�����飬�����к���ʮ��Ԫ�أ�ÿ��Ԫ�ص�������int��parr2������ָ��
//int(*parr3[10])[5];	//parr3��һ�����飬������ʮ��Ԫ�أ�ÿ��Ԫ�ض���һ������ָ�룬ÿ������ָ��ָ��һ�����飬һ�����麬�����Ԫ�أ�ÿ��Ԫ�ص�������int

////����ָ��
//void print(int(*p)[5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", (*(p + i))[j]);//����  *((*p + i) + j)
//			printf("%d ", p[i][j]);
//			printf("%d ", *(p[i] + j));
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{6,7,8,9,0},{1,3,5,7,9} };
//	print(arr, 3, 5);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		//ȫ���ȼ�
//		printf("%d ", *(p + i));
//		printf("%d ", *(arr + i));
//		printf("%d ", arr[i]);
//		printf("%d ", p[i]);
//	}
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	
//	int* parr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(parr[i]+j));
//		}
//		printf("\n");
//	}
//
//}

//int main()
//{
//	char arr[] = "abcdef";
//	char* pa = arr;
//	char* p = "abcdef";
//	printf("%s\n", pa);
//	printf("%c\n", *p);
//	printf("%s\n", p);
//	return 0;
//
//}