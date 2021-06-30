#include <stdio.h>

void bubble_sort(int arr[], int sz)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < sz; i++)
	{
		int flag = 1;
		for (j = 1; j < sz - i; j++)
		{
			if (arr[j] > arr[j - 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = tmp;
				flag = 0;
			}
		}
		if (flag == 1)
		{
			break;
		}

	}
}

int main()
{
	int arr[] = {0,1,2};
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}