#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//求一个整数的所有数位之和
//#include <stdio.h>
//int main()
//{
//    int a;
//    scanf("%d", &a);
//    int sum = 0;
//    int b;
//    while (a > 9)
//    {
//        b = a % 10;
//        a /= 10;
//        sum += b;
//    }
//    sum += a;
//    printf("%d", sum);
//    return 0;
//}

//有一个数字魔法，给你一个正整数n，如果n为偶数，就将他变为n / 2, 如果n为奇数，就将他变为乘3加1
//不断重复这样的运算，经过有限步之后，一定可以得到1
//牛牛为了验证这个魔法，决定用一个整数来计算几步能变成1
//#include <stdio.h>
//int main()
//{
//    int a;
//    scanf("%d", &a);
//    int count = 0;
//    while (a != 1)
//    {
//        if (a % 2 == 0)
//        {
//            a /= 2;
//        }
//        else
//        {
//            a = a * 3 + 1;
//        }
//        count++;
//    }
//    printf("%d", count);
//    return 0;
//}

//今年是2019年，KiKi想知道1~2019中有多少个包含数字9的数。包含数字的数是指有某一位是“9”的数，例如“2019”、“199”等。
//#include <stdio.h>
//int main()
//{
//    int a, b, c;
//    int count = 0;
//    for (a = 1; a < 2020; a++)
//    {
//        c = a;
//        while (c > 0)
//        {
//            if (c % 10 == 9)
//            {
//                count++;
//                break;
//            }
//            else
//            {
//                c /= 10;
//            }
//        }
//    }
//    printf("%d", count);
//    return 0;
//}

//小乐乐的班主任想统计一下班级里一共有多少人需要被请家长，
//三个成绩（语文，数学，外语）平均分低于60的将被请家长，小乐乐想编程帮助班主任算一下有多少同学被叫家长。
//#include <stdio.h>
//int main()
//{
//    int a, b, c, d;
//    int x = 0;
//    scanf("%d", &a);
//    for (int i = 0; i < a; i++)
//    {
//        scanf("%d %d %d", &b, &c, &d);
//        if ((b + c + d) / 3 < 60)
//            x++;
//    }
//    printf("%d", x);
//    return 0;
//}


//春天是鲜花的季节，水仙花就是其中最迷人的代表，数学上有个水仙花数，他是这样定义的： “水仙花数”是指一个三位数，
//它的各位数字的立方和等于其本身，比如：153 = 1 ^ 3 + 5 ^ 3 + 3 ^ 3。 现在要求输出所有在m和n范围内的水仙花数。
//#include <stdio.h>
//#include<math.h>
//int main()
//{
//    int m, n;
//    int count = 0;
//    int x = 0;
//    while (scanf("%d %d", &m, &n) != EOF)
//    {
//        for (int i = m; i <= n; i++)
//        {
//            int a = i % 10;
//            int b = i / 10 % 10;
//            int c = i / 100;
//            if (pow(a, 3) + pow(b, 3) + pow(c, 3) == i)
//            {
//                x++;
//                printf("%d ", i);
//            }
//        }
//        if (x == 0)
//            printf("no\n");
//        else
//            printf("\n");
//    }
//    return 0;
//}
//
//变种水仙花数 - Lily Number：把任意的数字，从中间拆分成两个数字，
//比如1461 可以拆分成（1和461）, （14和61）, （146和1), 
//如果所有拆分后的乘积之和等于自身，则是一个Lily Number。
//#include<stdio.h>
//int main()
//{
//    int i = 0;
//    for (i = 10000; i <= 99999; i++)
//    {
//        int a = i / 10000;//得到第一位
//        int a1 = i % 10000;//得到后四位
//        int b = i / 1000;
//        int b1 = i % 1000;
//        int c = i / 100;
//        int c1 = i % 100;
//        int d = i / 10;
//        int d1 = i % 10;
//        if ((a1 * a) + (b * b1) + (c * c1) + (d * d1) == i)
//        {
//            printf("%d ", i);
//        }
//    }
//    return 0;
//}

//公务员面试现场打分。有7位考官，从键盘输入若干组成绩，
//每组7个分数（百分制），去掉一个最高分和一个最低分，输出每组的平均成绩。
//（注：本题有多组输入）
//#include <stdio.h>
//int main()
//{
//    int a;
//    int sum = 0;
//    int max = 0;
//    int small = 100;
//    int i = 0;
//    while (scanf("%d ", &a) != EOF)
//    {
//        if (a > max)
//            max = a;
//        if (a < small)
//            small = a;
//        sum += a;
//        i++;
//        if (i == 7)
//        {
//            printf("%.2f\n", (sum - max - small) / 5.0);
//            sum = 0;
//            max = 0;
//            small = 100;
//            i = 0;
//        }
//    }
//    return 0;
//}

//将一个四位数，反向输出。
//#include <stdio.h>
//int main()
//{
//    int a;
//    scanf("%d", &a);
//    while (a)
//    {
//        printf("%d", a % 10);
//        a /= 10;
//    }
//    return 0;
//}

//小乐乐在课上学习了二进制八进制与十六进制后，对进制转换产生了浓厚的兴趣。
//因为他的幸运数字是6，所以他想知道一个数表示为六进制后的结果。请你帮助他解决这个问题。
//1.
//#include <stdio.h>
//int main()
//{
//    int a;
//    int b[10];
//    int i = 0;
//    int count = 0;
//    scanf("%d", &a);
//    if (a < 6)
//        printf("%d", a);
//    else
//    {
//        while (a)
//        {
//            b[i++] = a % 6;
//            a /= 6;
//            count++;
//        }
//        for (int j = count; j > 0; j--)
//        {
//            printf("%d", b[j - 1]);
//        }
//    }
//    return 0;
//}
//2.
//#include<stdio.h>
//void six(int a)
//{
//    if (a >= 6)
//        six(a / 6);
//    printf("%d", a % 6);
//}
//int main()
//{
//    int a;
//    scanf("%d", &a);
//    six(a);
//    return 0;
//}