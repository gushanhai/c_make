#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//#include<stdio.h>
//void sz_a(int* arr1, int* arr2 ,int sz1)
//{
//	for (int i = 0; i < sz1; i++)
//	{
//		int tmp = *(arr1 + i);
//		*(arr1 + i) = *(arr2 + i); 
//		*(arr2 + i) = tmp;
//	}
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int arr2[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz1 = sizeof(arr1) / sizeof(arr1[0]);
//	sz_a(arr1, arr2,sz1);
//	for (int a = 0; a < sz1; a++)
//	{
//		printf("%d ", arr1[a]);
//	}
//	printf("\n");
//	for (int b = 0; b < sz1; b++)
//	{ 
//		printf("%d ", arr2[b]);
//	}
//	return 0;
//}
//#include<stdio.h>
//void print(int* arr, int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void reverse(int arr[], int sz)
//{
//	int a = 0;
//	int b = sz - 1;
//	while (b >= a)
//	{
//		int tmp = arr[a];
//		arr[a] = arr[b];
//		arr[b] = tmp;
//		a++;
//		b--;
//	}
//}
//void init(int arr[], int sz)
//{
//	for (int a = 0; a < sz; a++ )
//	{
//		arr[a] = 0;
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 }; 
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//打印数组中的每个元素
//	print(arr, sz);
//	//实现reverse()  函数完成数组元素的逆置。
//	reverse(arr, sz);
//	print(arr, sz);
//	//实现函数init() 初始化数组为全0
//	init(arr, sz);
//	print(arr, sz);
//}
#include<stdio.h>
void ret_a(int arr[], int sz)
{
	for (int a = 0; a < sz - 1; a++)
	{
		for (int i = 0; i < sz - 1 - a; i++)
		{
			int tmp = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = tmp;
		}
	}
}
int main()
{
	int arr[] = { 0,9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	ret_a(arr, sz);
	for (int b = 0; b < sz; b++)
	{
		printf("%d ", arr[b]);
	}
	return 0;
}