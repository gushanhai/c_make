#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//兔子发现了一个数字序列，于是开始研究这个序列。兔子觉得一个序列应该需要有一个命名，命名应该要与这个序列有关。
//由于兔子十分讨厌完全平方数，所以兔子开创了一个新的命名方式：这个序列中最大的不是完全平方数的数字就是他的名字。
//现在兔子有一个序列，想要知道这个序列的名字是什么。
//#include <stdio.h>
//#include<math.h>
//int main()
//{
//    int n, m, a;
//    int max = 0;
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &m);
//        a = sqrt(m);
//        if (m != pow(a, 2))
//        {
//            if (m > max)
//            {
//                max = m;
//            }
//        }
//    }
//    printf("%d", max);
//}

//小q最近迷上了各种好玩的数列，这天，他发现了一个有趣的数列，其递推公式如下：
//f[0] = 0 f[1] = 1;
//f[i] = f[i / 2] + f[i % 2]; (i >= 2)
//现在，他想考考你，问：给你一个n，代表数列的第n项，你能不能马上说出f[n]的值是多少，
//以及f[n]所代表的值第一次出现在数列的哪一项中？（这里的意思是：可以发现这个数列里某几项的值是可能相等的
//则存在这样一个关系f[n'] = f[n] = f[x/2]+f[x%2] = f[x]...（n' < n < x）
//	他们的值都相等，这里需要你输出最小的那个n'的值)(n<10^18)
//#include<stdio.h>
//    int main()
//{
//    long long t, n, i;
//    scanf("%lld", &t);
//    long long sum = 0;
//    long long num = 0;
//    while (t--)
//    {
//        sum = 0;
//        num = 0;
//        scanf("%lld", &n);
//        while (n)
//        {
//            if (n & 1)
//            {
//                sum++;
//            }
//            n = n >> 1;
//        }
//        for (i = 0; i < sum; i++)
//        {
//            num = num * 2 + 1;
//        }
//        printf("%lld %lld\n", sum, num);
//    }
//}