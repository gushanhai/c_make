#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//不使用临时变量，交换两个整型的内容
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 1;
//	printf("%d\n", a);
//	printf("%d\n", b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}
//获取一个二进制序列中所有的偶数位和奇数位，并分别打印出二进制序列
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int n = 0;
//	printf("奇数位:\n");
//	for (n = 1; n < 32; n+=2)
//	{
//		printf("%d ", (a>>n)&1);
//	}
//	printf("\n");
//	for (n = 0; n < 32; n+=2)
//	{
//		printf("%d ", (a >> n)&1);
//	}
//
//	return 0;
//}
//打印一个整数的每一位
#include<stdio.h>
void re(int a)
{
	if (a > 9)
	{
		printf("%d ", (a)%10);
		return re((a) / 10);
	}
	else
	{
		printf("%d", a);
	}
}
int main()
{
	int a = 12345;
	re(a);
	return 0;
}