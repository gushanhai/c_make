#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//#include<stdlib.h>
//#include<stdio.h>
//int main()
//{
//	int* p = (int*)calloc(10,sizeof(int));
//	if (p == NULL)
//	{
//		printf("内存开辟失败!\n");
//		return;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int* ptr = (int*)malloc(40);
//	if (ptr == NULL)
//	{
//		return 1;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		*(ptr + i) = i;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *(ptr+i));
//	}
//	printf("\n");
//	ptr = realloc(ptr, 8);
//	if (ptr == NULL)
//	{
//		return 2;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *(ptr + i));
//	}
//	free(ptr);
//	ptr = NULL;
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int* ptr = (int*)malloc(40);
//	if (ptr == NULL)
//	{
//		return 1;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		*(ptr + i) = i;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *(ptr + i));
//	}
//	printf("\n");
//	int* tmp = realloc(ptr, 1000000);
//	if (ptr == NULL)
//	{
//		return 2;
//	}
//	ptr = tmp;
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *(ptr + i));
//	}
//	free(ptr);
//	ptr = NULL;
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int* ptr = (int*)malloc(40);
//	if (ptr == NULL)
//		return;
//	*ptr++;
//	free(ptr);
//	ptr = NULL;
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int* p = (int*)realloc(NULL, 80);
//	if (p == NULL)
//		return;
//	for (int i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//		printf("%d ", *(p + i));
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//输入数字 n，按顺序打印出从 1 到最大的 n 位十进制数。比如输入 3，则打印出 1、2、3 一直到最大的 3 位数 999。
//#include<stdio.h>
//#include<math.h>
//#include<stdlib.h>
//int* printNumbers(int n, int* returnSize) {
//    // write code here
//    *returnSize = pow(10, n) - 1;
//    int* p = (int*)malloc((*returnSize) * sizeof(int));
//    for (int i = 1; i <= *returnSize; i++)
//    {
//        *(p + i - 1) = i;
//    }
//    return p;
//}
//int main()
//{
//    int n;
//    int b = 0;
//    int* returnSize = &b;
//    scanf("%d", &n);
//    printNumbers(n,returnSize);
//    for (int i = 1; i <= *returnSize; i++)
//    {
//        printf("%d ", i);
//    }
//    return 0;
//}

//根据输入的日期，计算是这一年的第几天。
//保证年份为4位数且日期合法。
//#include <stdio.h>
//int main()
//{
//    int year, mounth, day;
//    scanf("%d %d %d", &year, &mounth, &day);
//    int all_day = 0;
//    int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//    {
//        days[1] = 29;
//    }
//    for (int i = 0; i < mounth - 1; i++)
//    {
//        all_day += days[i];
//    }
//    all_day += day;
//    printf("%d\n", all_day);
//    return 0;
//}

//验证尼科彻斯定理，即：任何一个整数m的立方都可以写成m个连续奇数之和。
//例如：
//1 ^ 3 = 1
//2 ^ 3 = 3 + 5
//3 ^ 3 = 7 + 9 + 11
//4 ^ 3 = 13 + 15 + 17 + 19
//输入一个正整数m（m≤100），将m的立方写成m个连续奇数之和的形式输出。
//#include <stdio.h>
//int main()
//{
//    int a;
//    scanf("%d", &a);
//    int string = 0;
//
//    if (a == 1)
//    {
//        printf("%d", 1);
//    }
//    else
//    {
//        for (int i = 0; i < a; i++)
//        {
//            printf("%d", (a * (a - 1) + 1) + 2 * i);
//            if (i < a - 1)
//            {
//                printf("+");
//            }
//        }
//    }
//}

//输出求等差数列前n项和
//1.
//#include <stdio.h>
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int num = 2;
//    int x = 0;
//    for (int i = 0; i < n; i++)
//    {
//        x += num;
//        num += 3;
//    }
//    printf("%d", x);
//    return 0;
//}

//2.
//#include <stdio.h>
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    printf("%d\n", n * 2 + n * (n - 1) * 3 / 2);
//    return 0;
//}