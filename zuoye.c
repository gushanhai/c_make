#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
#include<stdio.h>   
int main()
{
	int i = 0;
	scanf("%d", &i);
	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	int a = 0;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < i)
		{
			left = mid + 1;
		}
		else if (arr[mid] > i)
		{
			right = mid - 1;
		}
		else
		{
			printf("找到了,下标是%d", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("未找到");
	}
	return 0;
}