#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//练习1：输入两个数，实现两个数的交换
//法1：三杯水交换（常规的方式）
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	printf("%d %d\n", a, b);
//	c = a;
//	a = b;
//	b = c;
//	printf("%d %d\n", a, b);
//	return 0;
//}
//法2：如何不使用额外的内存空间，实现两个交换（没有空杯子了）
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%d %d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d %d\n", a, b);
//	return 0;
//}
//打印处整数的每一位
//#include<stdio.h>
//tt_a(int a)
//{
//	if (a > 9)
//	{
//		tt_a(a / 10);
//		printf("%d ", a % 10);
//	}
//	else
//	{
//		printf("%d ", a % 10);
//	}
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	tt_a(a);
//	return 0;
//}
//计算字符串的长度
//方法1：循环
//#include<stdio.h>
//my_strlen(char* a)
//{
//	int count = 0;
//	while (*a != '\0')
//	{
//		a++;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "skjdfd";
//	int s = my_strlen(arr);
//	printf("%d", s);
//	return 0;
//}
//方法2：递归
//#include<stdio.h>
//my_str(char* a)
//{
//	if (*a == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		return 1 + my_str(a + 1);
//	}
//}
//int main()
//{
//	char arr[] = "sksksksksk";
//	int a=my_str(arr);
//	printf("%d", a);
//	return 0;
//}
//求N的阶乘
//#include<stdio.h>
//int cc_a(int a)
//{
//	if (a <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return a * cc_a(a - 1);
//	}
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int x = cc_a(a);
//	printf("%d\n", x);
//	return 0;
//}
//求斐波那契数列
//使用递归进行斐波那契数列效率太低
//#include<stdio.h>
//int ss_a(int a)
//{
//	if (a <= 2)
//	{
//		return 1;
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
//}
