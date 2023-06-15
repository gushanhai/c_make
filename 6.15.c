#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“* ”组成的箭形图案。
//#include <stdio.h>
//int main()
//{
//    int a;
//    while ((scanf("%d", &a)) != EOF)
//    {
//        for (int i = 0; i <= a; i++)
//        {
//            for (int j = i; j < a; j++)
//            {
//                printf("  ");
//            }
//            for (int j = 0; j <= i; j++)
//            {
//                printf("*");
//            }
//            printf("\n");
//        }
//        for (int i = 0; i < a; i++)
//        {
//            for (int j = 0; j <= i; j++)
//            {
//                printf("  ");
//            }
//            for (int j = i; j < a; j++)
//            {
//                printf("*");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“* ”组成的反斜线形图案。
//#include <stdio.h>
//int main()
//{
//    int a;
//    while ((scanf("%d", &a)) != EOF)
//    {
//        for (int i = 0; i < a; i++)
//        {
//            for (int j = 0; j < i; j++)
//            {
//                printf(" ");
//            }
//            printf("*\n");
//        }
//    }
//    return 0;
//}

//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“* ”组成的正斜线形图案。
//#include <stdio.h>
//int main()
//{
//    int a;
//    while ((scanf("%d", &a)) != EOF)
//    {
//        for (int i = 0; i < a; i++)
//        {
//            for (int j = i + 1; j < a; j++)
//            {
//                printf(" ");
//            }
//            printf("*\n");
//        }
//    }
//    return 0;
//}

//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“* ”组成的X形图案。
//#include<stdio.h>
//int main()
//{
//    int a;
//    while ((scanf("%d", &a)) != EOF)
//    {
//        for (int i = 0; i < a; i++)
//        {
//            for (int j = 0; j < a; j++)
//            {
//                if (j == i || j == a - i - 1)
//                    printf("*");
//                else
//                    printf(" ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“* ”组成的“空心”正方形图案。
//#include <stdio.h>
//int main()
//{
//    int a;
//    while ((scanf("%d", &a)) != EOF)
//    {
//        for (int i = 0; i < a; i++)
//        {
//            for (int j = 0; j < a; j++)
//            {
//                if (i == a - 1 || i == 0)
//                {
//                    printf("* ");
//                }
//                else
//                {
//                    if (j == 0 || j == a - 1)
//                    {
//                        printf("* ");
//                    }
//                    else
//                        printf("  ");
//                }
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“* ”组成的“空心”三角形图案。
//#include <stdio.h>
//int main()
//{
//    int a;
//    while ((scanf("%d", &a)) != EOF)
//    {
//        for (int i = 0; i < a; i++)
//        {
//            for (int j = 0; j <= i; j++)
//            {
//                if (i == a - 1 || i == j || j == 0)
//                    printf("* ");
//                else
//                    printf("  ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用数字组成的数字三角形图案。
//#include <stdio.h>
//int main()
//{
//    int a;
//    while ((scanf("%d", &a)) != EOF)
//    {
//        for (int i = 0; i < a; i++)
//        {
//            int c = 1;
//            for (int j = 0; j <= i; j++)
//            {
//                printf("%d ", c++);
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//今天是圣诞节，牛牛要打印一个漂亮的圣诞树送给想象中的女朋友，请你帮助他实现梦想。
//#include <stdio.h>
//int main()
//{
//    int a, i, j;
//    scanf("%d", &a);
//    int d = 3 * a;     //d为开始的前面的空格数
//    for (int i = 0; i < a; i++)
//    {
//
//        //第一行
//        for (int j = d - 1; j > 0; j--)
//        {
//            printf(" ");
//        }
//        for (int j = 0; j < i + 1; j++)
//        {
//            printf("*     ");
//        }
//        printf("\n");
//
//        //第二行
//        for (int j = d - 2; j > 0; j--)
//        {
//            printf(" ");
//        }
//        for (int j = 0; j < i + 1; j++)
//        {
//            printf("* *   ");
//        }
//        printf("\n");
//
//        //第三行
//        for (int j = d - 3; j > 0; j--)
//        {
//            printf(" ");
//        }
//        for (int j = 0; j < i + 1; j++)
//        {
//            printf("* * * ");
//        }
//        printf("\n");
//        d -= 3;
//    }
//    for (int i = 0; i < a; i++)
//    {
//        for (int j = 1; j < (2 * a) + a; j++)
//        {
//            printf(" ");
//        }
//        printf("*\n");
//    }
//    return 0;
//}

//今天是圣诞节，牛牛要打印一个漂亮的圣诞树送给想象中的女朋友，请你帮助他实现梦想。
//#include <stdio.h>
//int arr[500][800] = { {0, 0, 1, 0, 0}, {0, 1, 0, 1, 0}, {1, 0, 1, 0, 1} };
//
//int main() {
//    int length = 3;
//    int width = 5;
//    int n = 0;
//    int i = 0;
//    int j = 0;
//    int k = 0;
//    scanf("%d", &n);
//
//    for (i = 1; i < n; i++) { //以x个初始三角形为一层
//        //复制一层
//        for (j = length; j < length * 2; j++) {
//            for (k = 0; k < width; k++) {
//                arr[j][k] = arr[j - length][k];
//                arr[j][k + width + 1] = arr[j - length][k];
//            }
//        }
//
//        //由于第一层为了用来复制位置不对，调整位置
//        for (j = 0; j < length; j++) {
//            for (k = 0; k < width; k++) {
//                arr[j][k] = 0;
//            }
//        }
//
//        for (j = 0; j < length; j++) {
//            for (k = length; k < length + width; k++) {
//                arr[j][k] = arr[j + length][k - length];
//            }
//        }
//        length *= 2;
//        width *= 2;
//        width++;
//    }
//    //打印树叶
//    for (i = 0; i < length; i++) {
//        for (j = 0; j < width; j++) {
//            if (arr[i][j] == 0)
//                printf(" ");
//            else
//                printf("*");
//        }
//        printf("\n");
//    }
//
//    //打印树干
//    for (i = 0; i < n; i++) {
//        for (j = 0; j < width / 2; j++) {
//            printf(" ");
//        }
//        printf("*\n");
//    }
//    return 0;
//}