#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//#include<stdio.h>
//int main()
//{
//	int arr1[5] = { 1,2,3,4,5 };
//	int arr2[5] = { 2,3,4,5,6 };
//	int arr3[5] = { 3,4,5,6,7 };
//	int* arr[3] = {arr1,arr2,arr3};
//	int i;
//	for (i = 0; i < 3; i++)
//	{
//		int j;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ",*arr[i]+j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//数组名的理解
//数组名是数组首元素的地址
//有两个例外：
//1.sizeof(数组名)：这里的的数组名不表示数组首元素的地址，这里的数组名表示的是整个数组，sizeof(数组名)计算的是整个数组的大小，单位是字节
//2.&数组名：这里的数组名表示的是整个数组，&数组名取出的是整个数组的地址
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//int *
//	printf("%p\n", arr+1);//int *
//
//	printf("%p\n", &arr);//int (*)[10]
//	printf("%p\n", &arr+1);//int (*)[10]
//
//	printf("%p\n", &arr[0]);//int *
//	printf("%p\n", &arr[0]+1);//int *
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *((*p)+i));
//		//printf("%d ", (*p)[i]);//*((*p)+i)和(*p)[i]是等价的
//	}
//	return 0;
//}

//数组指针应该怎么使用?一般在二维指针中使用才方便
//二维数组的传参，形参是二维数组的形式
//#include<stdio.h>
//void print(int arr[3][5], int r, int c)
//{
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
//	print(arr, 3, 5);
//	return 0;
//}

//二维数组的传参，形参是指针的形式
//#include<stdio.h>
//void Print(int(*p)[5], int r, int c)
//{
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			printf("%d ", *(*(p + i)+j));
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5, 2,3,4,5,6, 3,4,5,6,7 };
//	Print(arr, 3, 5);
//	return 0;
//}

 //#include<stdio.h>
//void aa(int arr[], int r)//形参部分是数组的形式，但本质上是指针的形式
//{
//	for (int i = 0; i < r; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void ab(int* p, int r)
//{
//	for (int i = 0; i < r; i++)
//	{
//		printf("%d ", (*p)+i);
//	}
//	printf("\n");
//
//}
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	aa(arr, 5);
//	ab(arr, 5);
//}

//二维数组传参，形参部分可以是数组也可以是指针
#include<stdio.h>
void print1(int arr[][5], int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
void print2(int(*p)[5], int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			printf("%d ", (*(p+i))[j]);
		}
		printf("\n");
		//for (int j = 0; j < c; j++)
		//{
		//	printf("%d ", *(*(p + i)+j));
		//}
		//printf("\n");
	}
}
int main()
{
	int arr[][5] = { 1,2,3,4,5, 2,3,4,5,6, 3,4,5,6,7 };
	print1(arr, 3, 5);
	print2(arr, 3, 5);
	return 0;
}