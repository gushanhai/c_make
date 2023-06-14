#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//国王将金币作为工资，发放给忠诚的骑士。第一天，骑士收到一枚金币；
//之后两天（第二天和第三天），每天收到两枚金币；之后三天（第四、五、六天），
//每天收到三枚金币；之后四天（第七、八、九、十天），每天收到四枚金币……；
//这种工资发放模式会一直这样延续下去：当连续N天每天收到N枚金币后，骑士会在之后的连续N + 1天里，每天收到N + 1枚金币。
//请计算在前K天里，骑士一共获得了多少金币。
//#include<stdio.h>
//int main()
//{
//    int k;//总共的天数
//    scanf("%d", &k);
//    int count = 0;//收到的金币
//    int day = 0;//天数
//    for (int i = 1; day < k; i++)
//    {
//        for (int j = 0; j < i; j++)//
//        {
//            count += i;//外层循环代表收到的几枚金币
//            day++;
//            if (day == k)
//                break;
//        }
//    }
//    printf("%d", count);
//    return 0;
//}

//今天牛牛学到了回文串，他想在数字里面找回文，即回文数，
//回文数是正着读与倒着读都一样的数，比如1221，343是回文数，433不是回文数。请输出不超过n的回文数。
//#include <stdio.h>
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    for (int i = 1; i < n; i++)
//    {
//        int sum = 0;
//        int a = i;
//        while (a)
//        {
//            sum = sum * 10 + a % 10;
//            a /= 10;
//        }
//        if (sum == i)
//            printf("%d\n", i);
//    }
//    return 0;
//}


//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“* ”组成的线段图案。
//#include <stdio.h>
//int main()
//{
//    int a;
//    while (scanf("%d", &a) != EOF)
//    {
//        for (int i = 0; i < a; i++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//    return 0;
//}

//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“* ”组成的正方形图案。
//#include <stdio.h>
//int main()
//{
//    int a;
//    while (scanf("%d", &a) != EOF)
//    {
//        for (int i = 0; i < a; i++)
//        {
//            for (int j = 0; j < a; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“* ”组成的直角三角形图案。
//#include <stdio.h>
//int main()
//{
//    int a;
//    while (scanf("%d", &a) != EOF)
//    {
//        for (int i = 0; i < a; i++)
//        {
//            for (int j = 0; j <= i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“* ”组成的翻转直角三角形图案。
//#include <stdio.h>
//int main()
//{
//    int a;
//    while (scanf("%d", &a) != EOF)
//    {
//        for (int i = a; i > 0; i--)
//        {
//            for (int j = i; j > 0; j--)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“* ”组成的带空格直角三角形图案。
//#include<stdio.h>
//int main()
//{
//    int a;
//    while (scanf("%d", &a) != EOF)
//    {
//        for (int i = 0; i < a; i++)
//        {
//            for (int j = 0; j < (a - i - 1); j++)
//            {
//                printf("  ");
//            }
//            for (int j = 0; j <= i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“* ”组成的金字塔图案。
//#include <stdio.h>
//int main()
//{
//    int a;
//    while (scanf("%d", &a) != EOF)
//    {
//        for (int i = 0; i < a; i++)
//        {
//            for (int j = 0; j < a - 1 - i; j++)
//            {
//                printf(" ");
//            }
//            for (int j = 0; j <= i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“* ”组成的翻转金字塔图案
//#include <stdio.h>
//int main()
//{
//    int a;
//    while (scanf("%d", &a) != EOF)
//    {
//        for (int i = 0; i < a; i++)
//        {
//            for (int j = 0; j < i; j++)
//            {
//                if (j != i)
//                    printf(" ");
//            }
//            for (int j = 0; j < a - i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“* ”组成的菱形图案。
//#include <stdio.h>
//int main()
//{
//    int a;
//    while (scanf("%d", &a) != EOF)
//    {
//        for (int i = 0; i <= a; i++)
//        {
//            //上半部分
//            for (int j = i; j < a; j++)
//            {
//                printf(" ");
//            }
//            for (int j = 0; j <= i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//        for (int i = 0; i < a; i++)
//        {
//            for (int j = 0; j <= i; j++)
//            {
//                printf(" ");
//            }
//            for (int j = i; j < a; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“* ”组成的K形图案。
//#include <stdio.h>
//int main()
//{
//    int a;
//    while ((scanf("%d", &a) != EOF))
//    {
//        for (int i = 0; i <= a; i++)
//        {
//            for (int j = i; j <= a; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//
//        }
//        for (int i = 1; i <= a; i++)
//        {
//            for (int j = 0; j <= i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}