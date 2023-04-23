#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//#include<stdio.h>
//void pirnt(int a)
//{
//	int b = 0;
//	for (b = 1; b <= a; b++)
//	{
//		int c = 0;
//		for (c = 1; c <= b; c++)
//		{
//			printf("%-2d*%-2d=%-2d ", b, c, c * b);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d", &a);
//	pirnt(a);
//	return 0;
//}
//#include<stdio.h>
//void rem(int* a, int* b)
//{
//	int tmp = 0;
//	tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//scanf("%d %d\n", &a, &b);
//	printf("%d %d\n", a, b);
//	rem(&a, &b);
//	printf("%d %d\n", a, b);
//	return 0;
//}
//#include<stdio.h>
//int pd(int year)
//{
//	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
//	{
//		return 1;
//	}
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	int a = pd(year);
//	if (a == 1)
//	{
//		printf("%d是闰年\n", year);
//	}
//	return 0;
//}
#include<stdio.h>
#include<math.h>
int pd(int a)
{
	int x = 0;
	for (x = 2; x <=sqrt(a); x++)
	{
		if (a % x == 0)
		{
			return 0;
			break;
		}
	}
	return 1;
}
int main()
{
	int a = 0;
	int count = 0;
	scanf("%d", &a);
	for (a = 100; a <= 200; a++)
	{
		int ax = pd(a);
		if (ax != 0)
		{
			printf("%d是素数\n", a);
			count++;
		}
	}
	printf("count=%d\n", count);
	return 0;
}