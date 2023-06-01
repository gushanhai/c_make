#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	char arr[2][5] = { { 'a','b','c','d','e'} ,{'b','c','d','e','f'} };
//	for (i = 0; i < 2; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%c ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int s[2][3] = { {2,5,4},{6,9,2} };
//	int d[2][3] = { {2,3,4},{6,7,8} };
//	printf("第1组数据：\n");
//	for (int i = 0; i < 2; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d ", s[i][j]);
//		}
//		printf("\n");
//	}
//	printf("%p\n", s);
//	printf("第2组数据：\n");
//	for (int i = 0; i < 2; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d ", d[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
#include<stdio.h>
int main()
{
	int a = 10;
	int* x = &a;
	printf("%d\n", *x);
	printf("%p\n", x);
	return 0;
}