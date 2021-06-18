#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//两数求和
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	int j = 0;
	int target = 0;
	int ret = 0;
	printf("请输入目标值>:");
	scanf("%d", &target);
	for (i = 0; i < sz; i++)
	{
		for (j = 1; j < sz; j++)
		{
			if (arr[i] + arr[j] == target)
			{
				break;
			}
		}
		if (arr[i] + arr[j] == target)
		{
			printf("目标位置为%d和%d\n", i, j);
			break;
		}
	}
	if (arr[i] + arr[j] != target)
	{
		printf("未找到相应解决方案");
	}
	return 0;
}