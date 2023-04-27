#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//循环解决斐波那契数列
//#include<stdio.h>
//int ss_a(int a)
//{
//	int n = a;
//	int b = 1;
//	int c = 1;
//	int d = 0;
//	while (n > 2)
//	{
//		d = b + c;
//		n--;
//		b = c;
//		c = d;
//	}
//	return d;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int ret = ss_a(a);
//	printf("%d\n", ret);
//	return 0;
//}
//青蛙跳问题
//递归解决
//#include<stdio.h>
//int ss_a(int a)
//{
//	int b = a;
//	if (a <= 2)
//	{
//		return b;
//	}
//	else
//	{
//		return ss_a(a - 1) + ss_a(a - 2);
//	}
//}
//int main()
//{
//	//青蛙跳的台阶数
//	int a = 0;
//	scanf("%d", &a);
//	//计算函数
//	int ret = ss_a(a);
//	printf("%d\n", ret);
//	return 0;
//}
////循环解决
//#include<stdio.h>
//int ss_a(int a)
//{
//	int b = a;
//	int c = 1;
//	int d = 2;
//	int x = 0;
//	while (b > 2)
//	{
//		x = c + d;
//		c = d;
//		d = x;
//		b--;
//	}
//	if (a <= 2)
//	{
//		return b;
//	}
//	return x;
//}
//int main()
//{
//	//青蛙跳的台阶数
//	int a = 0;
//	scanf("%d", &a);
//	//计算函数
//	int ret = ss_a(a);
//	printf("%d\n", ret);
//	return 0;
//}
//递归
//#include<stdio.h>
//int ss_a(int a)
//{
//	int c = 1;
//	if (a <= 2)
//	{
//		return c;
//	}
//	else
//	{
//		return ss_a(a - 1) + ss_a(a - 2);
//	}
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int ret = ss_a(a);
//	printf("%d\n", ret);
//	return 0;
//}
//循环
//#include<stdio.h>
//int ss_a(int a)
//{
//	int b = 1;
//	int c = 1;
//	int d = 0;
//	int n = a;
//	if (a <= 2)
//	{
//		return b;
//	}
//	if (n > 2)
//	{
//		for (n = 3; n <= a; n++)
//		{
//			d = b + c;
//			b = c;
//			c = d;
//		}
//		return d;
//
//	}
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int ret = ss_a(a);
//	printf("%d\n", ret);
//	return 0;
//}
//计算n的k次方
//#include<stdio.h>
//int ss_a(int n,int k)
//{
//	if (k > 1)
//	{
//		return n * ss_a(n, k - 1);
//
//	}
//	else
//		return n;
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	int ret = ss_a(n, k);
//	printf("%d\n", ret);
//	return 0;
//}
//计算一个整数的每位之和
//#include<stdio.h>
//int ss_a(int a)
//{
//	if (a > 9)
//	{
//		return a % 10 + ss_a(a / 10);
//	}
//	else
//		return a % 10;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int ret = ss_a(a);
//	printf("%d", ret);
//	return 0;
//}
//字符串逆序
//#include<stdio.h>
//int sz_a(char* arr)
//{
//	if (*arr != '\0')
//	{
//		return 1 + sz_a(arr + 1);
//	}
//}
//char turn_arr(char* arr)
//{
//	char tmp = *arr;
//	int sz = sz_a(arr);
//	*arr = *(arr + sz - 1);
//	*(arr + sz - 1) = '\0';
//	if (sz_a(arr + 1) >= 2)
//	{
//		turn_arr(arr + 1);
//	}
//	*(arr + sz - 1) = tmp;
//}
//int main()
//{
//	char arr[] = "asdfghj";
//	int sz = sz_a(arr);
//	printf("sz=%d\n", sz);
//	turn_arr(arr);
//	printf("%s\n", arr);
//	return 0;
//}
//实现strlen
//递归
//#include<stdio.h>
//int sz_a(char* arr)
//{
//	if (*arr != '\0')
//	{
//		return 1 + sz_a(arr + 1);
//	}
//}
//int main()
//{
//	char arr[] = "sfkljdfkjskdj";
//	int sz = sz_a(arr);
//	printf("%d", sz);
//	return 0;
//}
//循环
//#include<stdio.h>
//int sz_a(char* arr)
//{
//	int a = 0;
//	while (*arr != '\0')
//	{
//		a++;
//		*arr++;
//	}
//	return a;
//}
//int main()
//{
//	char arr[] = "sfkljsdsjdfjdklfjsld";
//	int sz = sz_a(arr);
//	printf("%d", sz);
//	return 0;
//}
//阶乘
//递归
//#include<stdio.h>
//int ss_a(int a)
//{
//	if (a >= 1)
//	{
//		return a * ss_a(a - 1);
//	}
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int s = ss_a(a);
//	printf("%d", s);
//	return 0;
//}
//非递归
//#include<stdio.h>
//int ss_a(int a)
//{
//	int c = 1;
//	while (a >= 1)
//	{
//		c *= a;
//		a -= 1;
//	}
//	return c;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int s = ss_a(a);
//	printf("%d", s);
//	return 0;
//}
//打印整型的每一位
#include<stdio.h>
void ss_a(int a)
{
	if (a > 9)
	{
		printf("%d ", (a % 10));
		ss_a(a / 10);
	}
	else
		printf(" %d", a % 10);
}
int main()
{
	int a = 0;
	scanf("%d", &a);
	ss_a(a);
	return 0;
}