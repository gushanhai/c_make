#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//#include<stdio.h>
//struct s
//{
//	int age;
//	char name[10];
//};
//void print(struct s* ss)
//{
//	printf("%d %s", ss-> age,ss-> name);
//}
//int main()
//{
//	struct s ss = { .age = 19,.name = "颤三" };
//	print(&ss);
//	return 0;
//}


//这种写法效率太低 
//#include<stdio.h>
//int num_of_1(int a)
//{
//	int count = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		if (((a >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a); 
//	int num=num_of_1(a);
//	printf("%d\n", num);
//	return 0;
//}
//#include<stdio.h>
//int num_of_1(int a)
//{
// 	int count = 0;
//	while (a)
//	{
//		a = a & (a - 1);
//		count++; 
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int num = num_of_1(a);
//	printf("%d", num);
//	return 0;
//}


//计算两个数有多少位不同--高级写法
#include<stdio.h>
int num_of_1(int a)
{
	int count = 0;
	while (a)
	{
		a = a & (a - 1);
		count++;
	}
	return count;
}
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	int num = num_of_1(a ^ b);
	printf("%d", num);
	return 0;
}