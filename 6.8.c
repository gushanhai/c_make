#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//针对每行输入，输出该数是奇数（Odd）还是偶数（Even）。
//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    while (scanf("%d", &a) != EOF)
//    {
//        if ((a % 2) == 0)
//            printf("Even\n");
//        else
//            printf("Odd\n");
//    }
//    return 0;
//}


//针对每行输入，输出“Pass”或“Fail”。
//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    while (scanf("%d", &a) != EOF)
//    {
//        if (a >= 60)
//        {
//            printf("Pass\n");
//        }
//        else
//        {
//            printf("Fail\n");
//        }
//    }
//    return 0;
//}


//问题：KiKi今年5岁了，已经能够认识100以内的非负整数，并且并且能够进行 100 以内的非负整数的加法计算。
// 不过，BoBo老师发现KiKi在进行大于等于100的正整数的计算时，规则如下：
//1.       只保留该数的最后两位，例如：对KiKi来说1234等价于34；
//2.       如果计算结果大于等于 100， 那么KIKI也仅保留计算结果的最后两位，如果此两位中十位为0，则只保留个位。
//例如：45 + 80 = 25
//要求给定非负整数 a和 b，模拟KiKi的运算规则计算出 a + b 的值。
//#include<stdio.h>
//int main()
//{
//    int a, b;
//    scanf("%d %d", &a, &b);
//    printf("%d", (a + b) % 100);
//    return 0;
//}


//牛牛有一个线段放在二维坐标系中，已知线段两个点的坐标 (x1,y1)，(x2,y2) 。牛牛想知道这个线段的长度的平方,
//因为本题求距离的平方，因此只需计算(x1-x2)的平方+(y1-y2)的平方
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int x1, x2, y1, y2;
//    scanf("%d %d", &x1, &y1);
//    scanf("%d %d", &x2, &y2);
//    printf("%d\n", (int)pow((x1 - x2), 2) + (int)pow((y1 - y2), 2));
//    return 0;
//}
//牛牛从键盘输入整数 x 和左右边界 l 和 r 共三个整数。请你判断 x 是否在 l 和 r 之间
#include<stdio.h>
int main()
{
    int x, l, r;
    scanf("%d %d %d", &x, &l, &r);
    if (x <= r && x >= l)
        printf("true\n");
    else
        printf("false\n");
    return 0;
}