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

//�����������
//��������������Ԫ�صĵ�ַ
//���������⣺
//1.sizeof(������)������ĵ�����������ʾ������Ԫ�صĵ�ַ���������������ʾ�����������飬sizeof(������)���������������Ĵ�С����λ���ֽ�
//2.&���������������������ʾ�����������飬&������ȡ��������������ĵ�ַ
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
//		//printf("%d ", (*p)[i]);//*((*p)+i)��(*p)[i]�ǵȼ۵�
//	}
//	return 0;
//}

//����ָ��Ӧ����ôʹ��?һ���ڶ�άָ����ʹ�òŷ���
//��ά����Ĵ��Σ��β��Ƕ�ά�������ʽ
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

//��ά����Ĵ��Σ��β���ָ�����ʽ
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
//void aa(int arr[], int r)//�ββ������������ʽ������������ָ�����ʽ
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

//��ά���鴫�Σ��ββ��ֿ���������Ҳ������ָ��
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