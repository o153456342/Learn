#define _CRT_SECURE_NO_WARNINGS 1

#include <string.h>
#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


int main()
{
    int n = 0;
    scanf("%d", &n);
    int i = 0;
    int j = 0;
    int arr[30][30] = { 0 };
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            if (i == j)
                arr[i][j] = 1;
            else if (j = 0)
                arr[i][j] = 1;
            else
                arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%d    ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
////ð������
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int flag = 1;
//		for (j = 1; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j - 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j - 1];
//				arr[j - 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//			break;
//	}
//}
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//�������
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int j = 0;
//	int target = 0;
//	int ret = 0;
//	printf("������Ŀ��ֵ>:");
//	scanf("%d", &target);
//	for (i = 0; i < sz; i++)
//	{
//		for (j = 1; j < sz; j++)
//		{
//			if (arr[i] + arr[j] == target)
//			{
//				break;
//			}
//		}
//		if (arr[i] + arr[j] == target)
//		{
//			printf("Ŀ��λ��Ϊ%d��%d\n", i, j);
//			break;
//		}
//	}
//	if (arr[i] + arr[j] != target)
//	{
//		printf("δ�ҵ���Ӧ�������");
//	}
//	return 0;
//}

//int step(int x)
//{
//	if (x == 0||x==1)
//	{
//		return 1;
//	}
//	else
//	{
//		return  step(x - 1) + step(x - 2);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	printf("��������Ҫ�ϼ���¥��:>");
//	scanf("%d", &n);
//	ret = step(n);
//	printf("һ����%d�ַ���", ret);
//	return 0;
//}

//////��ŵ������
//void move(char x, char y)
//{
//	printf("%c -> %c\n", x, y);
//}
//
//void hanoi(int n, char x, char y, int z)
//{
//	if (n == 1)
//	{
//		move(x, z);
//	}
//	else
//	{
//		hanoi(n - 1, x, z, y);
//		move(x, z);
//		hanoi(n - 1, y, x, z);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	hanoi(n, 'a', 'b', 'c');
//
//	return 0;
//}

//�ݹ�ķ�����׳�
//int prime(int x)
//{
//	if (x > 1)
//	{
//	return x = x * prime(x - 1);
//	}
//	return 1;
//
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = prime(n);
//	printf("%d�Ľ׳�Ϊ%d\n", n, ret);
//	return 0;
//}

//����һ
//int Fib(int x)
//{
//	int i = 0;
//	int a = 0;
//	int b = 1;
//	int ret = 1;
//	if (x <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		for (i = 3;i <= x;i++)
//		{
//			a = b;
//			b = ret;
//			ret = a + b;
//		}
//	return ret;
//	}
//}

//������
//int Fib(int x)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (x > 2)
//	{
//		c = b + a;
//		a = b;
//		b = c;
//		x--;
//	}
//	return c;
//}
//
//int main()
//{
//	int i = 0;
//	int ret = 0;
//	scanf("%d", &i);
//	ret = Fib(i);
//	printf("��%d��쳲�������Ϊ%d\n", i, ret);
//	return 0;
//}

//ѭ���ķ�ʽ
//int Fac1(int a)
//{
//	int i = 0;
//	int mul = 1;
//	for (i = 1;i <= a;i++)
//	{
//		mul = i * mul;
//	}
//	return mul;
//}

//�ݹ�ķ�ʽ��쳲��������У�
//int Fac1(int a)
//{
//	int i = 1;
//	int mul = 1;
//	if (a > 1)
//	{
//		return a*Fac1(a-1);
//	}
//	else
//	{
//		return 1;
//	}
//}
//
//int main()
//{
//	int num = 0;
//	int ret = 0;
//	scanf("%d", &num);
//	ret = Fac1(num);
//	printf("%d�Ľ׳�Ϊ%d\n", num, ret);
//	return 0;
//}

//#include "add.h"

//ģ��ʵ��strlen
//int my_strlen(char* str) 
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		str++;
//		count++;
//	}
//	return count;
//}

//�ݹ�ķ�������ʹ����ʱ����
//strlen=my_strlen("bit")
//strlen=1+my_strlen("it")
//strlen=1+1+my_strlen("t")
//strlen=1+1+1+my_strlen()
//strlen=1+1+1+0

//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return (1 + my_strlen(str + 1));
//	}
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("len=%d\n", len);
//
//	return 0;
//}

//��˳����������ÿһλ����
//void print(int x)
//{
//	if (x > 10)
//	{
//		print(x / 10);
//	}
//	printf("%d ", x % 10);
//
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}

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
//	//printf�ķ���ֵΪ�ַ����������ȱ�� printf("%d", printf("%d",2������Ȼ����printf("%d",1�������Խ��Ϊ4321
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
//		printf("���޴���");
//	else
//			
//printf("�ҵ�������λ��Ϊ % d", (bin_search(arr, a, sz)));
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
//		printf("%d��������", year);
//	}
//	else
//		printf("%d�겻������", year);
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
//		printf("����Ϊ����");
//	}
//	else
//	{
//		printf("������������");
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

//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//
//	while (1)
//	{
//		printf("��ĵ��Լ�����һ���Ӻ�ػ�\n������'�Ҳ�Ҫ'��ȡ��\n:>");
//		scanf("%s", input);
//		if (strcmp(input, "�Ҳ�Ҫ") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}

//void meau()
//{
//	printf("*****************************\n");
//	printf("***1.��ʼ��Ϸ   0.�˳���Ϸ***\n");
//	printf("*****************************\n");
//}
//void game()
//{
//	int i = 0;
//	int num = 0;
//
//	i = rand()%100+1;
//	printf("��Ϸ��ʼ\n");
//	Sleep(500);
//	system("cls");
//	printf("�����������\n");
//	Sleep(1000);
//	system("cls");
//	printf("�������������������:>");
//	scanf("%d", &num);
//	while (num != i)
//	{
//		if (num > i)
//		{
//			printf("���ִ��ˣ����ٲ�\n");
//		}
//		else if (num < i)
//		{
//			printf("����С�ˣ����ٲ�\n");
//		}
//		printf("����������������������:>");
//		scanf("%d", &num);
//	
//	if (num == i)
//	{
//		printf("��ϲ�㣬�¶���\n");
//		break;
//	}
//     }
//}
//int main()
//{
//
//	int input = 0;
//	srand((unsigned int)time(NULL));
//		meau();
//		printf("\n�Ƿ�ʼ��Ϸ:>");
//		scanf("%d", &input);
//	do
//	{
//		switch (input)
//		{
//		case 1:
//			game();
//		    printf("�����Ƿ�����һ��:>");
//		    scanf("%d", &input);
//			break;
//		case 0:
//			printf("���˳���Ϸ����������ر�\n");
//			goto end;
//			break;
//		default:
//			printf("������������������\n");
//			scanf("%d", &input);
//			break;
//		}
//	} while (input);
//	printf("���˳���Ϸ����������ر�\n");
//	end:
//	return 0;
//}

//�˷��ھ���
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1;i <= 9;i++)
//	{
//		printf("\n");
//		for (j = 1;j <= i;j++)
//		{
//			printf("%d*%d=%d\t", i, j, i*j);
//		}
//	}
//	return 0;
//}


//�����ֵ
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1;i < sz;i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("���ֵΪ%d\n", max);
//	return 0;
//}

//��1-1/2+1/3-1/4+1/5+...+1/99-1/100
// ����1
//int main()
//{
//	int i = 0;
//	int flag = 1;
//	double sum = 0.0;
//	for (i = 1;i <= 100;i ++)
//	{
//		sum += flag*1.0 / i ;
//		flag = -flag;
//	}
//	printf("%lf", sum);
//	return 0;
//}

//������
//int main()
//{
//	int i = 0;
//	int j = 0;
//	double sum = 0.0;
//	for (i = 1,j=2;i<100, j<=100;i += 2,j += 2)
//	{
//		sum += 1.0/i-1.0/j;
//	}
//	printf("%lf", sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1;i <= 100;i++)
//	{
//		if (i % 10 == 9 )//��λ
//		{
//			printf("%d ", i);
//			count++;
//		}
//		if(i / 10 == 9)//ʮλ
//		{
//			printf("%d ", i);
//			count++;
//		}
//	
//	}	
//	printf("����%d��9", count);
//		return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for (i = 101;i <= 200;i+=2)
//	{
//		for (j = 2;j < sqrt(i);j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j>sqrt(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\nһ����%d������\n", count);
//	return 0;
//}

//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000;year <= 2000;year++)
//	{
//		//if (year % 4 == 0 && year % 100 != 0)
//		//{
//		//	printf("%d ", year);
//		//	count++;
//		//}
//		//else if (year % 400 == 0)
//		//{
//		//	printf("%d ", year);
//		//	count++;
//		//}	
//
//		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\n����%d������\n", count);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	while (a % b)
//	{
//		int tmp = a%b;
//		a = b;
//		b = tmp;
//	}
//	printf("���Լ��Ϊ%d\n", b);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1;i <= 100;i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}

//int main()
//{
//	char password[20] = {0};
//	int i = 0;
//	for (i = 0;i < 3;i++)
//	{
//		printf("����������>:");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("��½�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("��½ʧ�ܣ��ѱ���\n");
//	}
//	return 0;
//}

//int main()
//{
//	char arr1[] =  "welecome to my home!!!!!!!";
//    char arr2[] =  "##########################";
////	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int sz = strlen(arr1);
////	int right = sz - 2;
//	int right = sz - 1;
//	int left = 0;
//	for (left = 0, right = sz - 1;left <= right;left++, right--)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		Sleep(1000);
//		system("cls");
//		printf("%s\n", arr2);
//	}
//		
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,13,231,353,423,534,551,653,715,764,861,973,1053,1143,1221,1351,1435 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	int mid = 0;
//	int x = 0;
//	scanf("%d", &x);
//	while (left <= right)
//	{
//		mid = (right + left) / 2;
//		if (arr[mid] > x)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < x)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("�ҵ���,λ��Ϊ %d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("δ�ҵ�Ŀ��");
//	}
//
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int n = 0;
//	int sum = 1;
//	int ret = 0;
//	scanf("%d", &n);
//	for (i = 1;i <= n;i++)
//	{
//		sum = sum * i;
//		ret = ret + sum;
//	}
//	printf("sum=%d, ret=%d\n", sum,ret);
//
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch <= '0' || ch >= '9')
//			continue;
//		putchar(ch);
//
//	}
//	return 0;
//}

//int main()
//{
//	char password[20] = { 0 };
//	char ret = '0';
//	int ch = 0;
//
//	scanf("%s", password);
//	while ((ch = getchar() != '\n'))
//	{
//		;
//	}
//	printf("��ȷ��(Y/N):>");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("ȷ�ϳɹ�");
//	}
//	else
//	{
//		printf("����ȷ��");
//	}
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	switch (i)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��");
//		break;
//	default:
//		printf("�������");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	for(i=1;i<=100;i++)
//	{
//		if (i % 2 == 1)
//			printf("%d ", i);
//		
//	}
//	return 0;
//}


//struct Book
//{
//	char name[20];
//	short price;
//};
//
//int main()
//{
//	struct Book b1 = { "C����",100 };
//	struct Book* pb = &b1;
//	printf("%s\n", pb->name);
//	printf("%d\n", pb->price);
//	strcpy(b1.name, "C++");
//	printf("%s\n", pb->name);
//	//printf("���� = %s\n", b1.name);
//	//printf("�۸� = %d\n", b1.price);
//	//b1.price = 5;
//	//printf("�޸ĺ�۸� = %d\n", b1.price);
//	return 0;
//}

//int main()
//{
//	//int a = 0;
//	//int b = 0;
//	int arr[] = { 1,2,34,54,5,3523,34,324,12,412,3413 };
//	int max = 0;
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < size; i++)
//	{
//		if (max < arr[i])
//			max = arr[i];
//	}
////	scanf_s("%d %d", &a, &b);
////    max = (a > b ? a : b);
//	printf("max = %d\n", max);
//	return 0;
//}


//int main() {
//int A = 2 * (X * Y(3 + 1));
//printf("%d\n", A);
//return 0;
//}

//int main()
//{
//	int input = 0;
//		printf("��Ҫ�ú�ѧϰô?(1/0)>:");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("�����۷�\n");
//	else
//		printf("��̭\n");
//
//	return 0;
//}

//int main()
//{
//	printf("%c\n", '\32');
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", strlen (arr1));
//	printf("%d\n", strlen (arr2));
//		return 0;
//}
//int main()
//{
//	extern int global;
//	printf("global = %d\n", global);
//
//	return 0;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//    int sum = 0;
//	scanf("%d%d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}