#include <stdio.h>

//乘法口诀表
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


//求最大值
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
//	printf("最大值为%d\n", max);
//	return 0;
//}

//求1-1/2+1/3-1/4+1/5+...+1/99-1/100
// 方法1
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

//方法二
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
//		if (i % 10 == 9 )//个位
//		{
//			printf("%d ", i);
//			count++;
//		}
//		if(i / 10 == 9)//十位
//		{
//			printf("%d ", i);
//			count++;
//		}
//	
//	}	
//	printf("共有%d个9", count);
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
//	printf("\n一共有%d个素数\n", count);
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
//	printf("\n共有%d个闰年\n", count);
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
//	printf("最大公约数为%d\n", b);
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
//		printf("请输入密码>:");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("登陆成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("登陆失败，已报警\n");
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
//			printf("找到了,位置为 %d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("未找到目标");
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
//	printf("请确认(Y/N):>");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("确认成功");
//	}
//	else
//	{
//		printf("放弃确认");
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
//		printf("工作日");
//		break;
//	case 6:
//	case 7:
//		printf("休息日");
//		break;
//	default:
//		printf("输入错误");
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