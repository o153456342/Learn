#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include<assert.h>

//杨辉矩形
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
		printf("找到了 ");
		printf("下标为%d %d\n", x, y);
	}
	else
		printf("未找到");
}

////左旋字符串 暴力解法
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

////三步逆序法
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
//	reverse(arr,arr+k-1);//逆转左边
//	reverse(arr+k,arr+len-1);//逆转右边
//	reverse(arr,arr+len-1);//整体逆转
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

////通过将arr1拼接到arr1后边，例如abcdefabcdef,在让arr2在这个字符串中找是否有匹配的子字符串
//int is_left_move(char* arr1, char* arr2)
//{
//	//strcat(arr1, arr1);
//	int len1 = strlen(arr1);
//	int len2 = strlen(arr2);
//	if (len1 != len2)
//	{
//		return 0;
//	}
//	//拼接
//	strncat(arr1, arr1, len1);
//	//找子串
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

////左旋
//int main()
//{
//	char arr[] = "abcdef";
//	int k = 1;
//	left_move(arr, k);
//	printf("%s", arr);
//	return 0;
//}

////四个嫌疑人
////A：凶手不是我   B：凶手是C     C：凶手是D      D：C在胡说
////3个真话一个假话
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

////杨辉三角形
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
//		while ((left < right) && (arr[left] % 2 == 1))//left < right 为了避免全是奇数
//		{
//			left++;
//		}
//		while ((left < right) && (arr[right] % 2 == 0))//避免全是偶数
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

//一块钱买一瓶可乐，两个空瓶换一瓶可乐，一共可以喝多少瓶
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
//	//++cpp移动到c+2,两次解引用指向“POINT”
//	printf("%s\n", *--*++cpp+3);
//	//++cpp，将cpp从c+2移动到c+1的首地址，解引用引出c+1，--变为c，再次解引用指向"ENTER"，+3字符串往后数三个字母，打印出ER
//	printf("%s\n", *cpp[-2] + 3);
//	//cpp[-2] = *(cpp-2)  cpp不变,从c+1的首地址移动到c+3的首地址并且解引用，引出c+3,再解引用一次引出"FIRST"，再+3等于Z字符串往后数三个字母，打印出ST
//	printf("%s\n", cpp[-1][-1]+1);
//	//cpp[-1][-1]=*(*(cpp-1)-1), 先解引用c+2的首地址，得到c+2，-1，得到c+1，解引用得到NEW，往后+1个字符，得到EW
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
//	int* ptr2 = (int*)((int)a + 1);//从内存上看，往后移动一个字节，结果为0x02000000
//	printf("%x,%x", ptr1[-1], *ptr2);
//}

//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}* p;//20个字节
//
//int main()
//{
//	p = (struct Test*)0x100000;
//	printf("&p\n", p + 0x1);//+20 = 0x14
//	printf("&p\n", (unsigned long)p + 0x1);//转化为整数，+1 = +0x1
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
////base 数组的起始地址//num 数组的大小//width 数组的每个元素的字节数byte//对比函数cmp
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
////冒泡排序
//void bubble_sort(void* base, int sz, int width, int(*cmp)(const void* e1, const void* e2))
//{
//	int i = 0;
//	//趟数
//	for (i = 0; i < sz - 1; i++)
//	{
//		//每一趟比较的对数
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			//两元素比较
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0 )
//				//width为一个元素的字节数，char为一个字节宽度，char*每次加1移动一个字节，从第一个元素移动到第二个元素共移动width个字节
//			{
//				//交换
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
//	//字符串比较用strcmp
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
//	int(*p)[10] = &arr;//数组指针
//	int(*pfArr[4])(int, int);//pfArr是一个数组-函数指针数组
//	int(*(*ppfArr)[4])(int, int) = &pfArr;//ppfArr是一个数组指针，指向的数组含有四个元素，每个元素是一个函数指针 int(*)(int,int)
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
////回调函数  
//void Calc(int(*pf)(int, int)) //将函数名输入回调函数，函数指针找到对应函数并调用
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入两个操作数:>");
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
//		printf("请输入:>");
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
//			printf("退出程序");
//			break;
//		default:
//			printf("输入错误，请重新选择");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//void(*Signal(int, void(*)(int)))(int);
////signal是一个函数声明
////signal函数的参数有2个，第一个是int，第二个是函数指针，该函数指针指向的函数的参数是int，返回值是void
////signal函数的返回类型也是一个函数指针：该函数指针指向的函数的参数是Int,返回类型是void

//int arr[5];			//arr 是一个5个元素的整型整数
//int* paar1[10];		//parr1是一个数组，数组有十个元素，每个元素的类型是int*，parr1是指针数组
//int(*parr2)[10];	//parr2是一个指针，指针指向一个数组，数组中含有十个元素，每个元素的类型是int，parr2是数组指针
//int(*parr3[10])[5];	//parr3是一个数组，数组有十个元素，每个元素都是一个数组指针，每个数组指针指向一个数组，一个数组含有五个元素，每个元素的类型是int

////数组指针
//void print(int(*p)[5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", (*(p + i))[j]);//或者  *((*p + i) + j)
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
//		//全部等价
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