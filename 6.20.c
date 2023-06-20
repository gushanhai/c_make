#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
假设你们社团要竞选社长，有两名候选人分别是A和B，社团每名同学必须并且只能投一票，最终得票多的人为社长.
//#include <stdio.h>
//#include<string.h>
//int main()
//{
//    char arr[20];
//    scanf("%s", arr);
//    getchar();
//    int a = 0, b = 0;
//    for (int i = 0; i < strlen(arr); i++)
//    {
//        if (arr[i] == 'A')
//            a++;
//        if (arr[i] == 'B')
//            b++;
//    }
//    if (a > b)
//        printf("A\n");
//    else if (a < b)
//        printf("B\n");
//    else
//        printf("E\n");
//    return 0;
//}


//给定长度为n的只有小写字母的字符串s，进行m次操作，每次将[l, r]范围内所有c1字符改成c2，输出操作完的字符串
//#include <stdio.h>
//#include<string.h>
//int main()
//{
//    int n, m, l, r;
//    char a, b;
//    scanf("%d %d", &n, &m);
//    char arr[n];
//    scanf("%s", arr);
//    for (int i = 0; i < m; i++)
//    {
//        scanf("%d %d %c %c", &l, &r, &a, &b);
//        for (int j = l; j <= r; j++)
//        {
//            if (arr[j - 1] == a)
//            {
//                arr[j - 1] = b;
//            }
//        }
//    }
//    printf("%s", arr);
//    return 0;
//}


//规定一种对于复合词的简写方式为只保留每个组成单词的首字母，并将首字母大写后再连接在一起
//比如 “College English Test”可以简写成“CET”，“Computer Science”可以简写为“CS”，“I am Bob”简写为“IAB”
//#include <stdio.h>
//#include<string.h>
//int main()
//{
//    char arr[1000];
//    gets(arr);
//    char* p = arr;
//    while (*p)
//    {
//        if (*(p - 1) == ' ' || p == arr)
//        {
//            if (*p >= 'a' && *p <= 'z')
//                printf("%c", *p - 32);
//            else
//                printf("%c", *p);
//        }
//        p++;
//    }
//    return 0;
//}

//其中 max3函数为计算三个数的最大值，如： max3(1, 2, 3) 返回结果为3。
//#include <stdio.h>
//int max3(int a, int b, int c)
//{
//    if (a > b)
//        b = a;
//    return b > c ? b : c;
//}
//int main()
//{
//    int a, b, c;
//    scanf("%d %d %d", &a, &b, &c);
//    printf("%.2f", (float)max3(a + b, b, c) / (max3(a, b + c, c) + max3(a, b, b + c)));
//    return 0;
//}

//求出[a, b]区间内有多少个数数位之和为5的倍数
//#include <stdio.h>
//int beishu(int a, int b)
//{
//    int count = 0;
//    for (int i = a; i <= b; i++)
//    {
//        int sum = i;
//        int val = 0;
//        while (sum)
//        {
//            val += sum % 10;
//            sum /= 10;
//        }
//        if (val % 5 == 0)
//            count++;
//    }
//    return count;
//}
//int main()
//{
//    int a, b;
//    scanf("%d %d", &a, &b);
//    int x = beishu(a, b);
//    printf("%d", x);
//    return 0;
//}

//给你一个数，让他进行巴啦啦能量，沙鲁沙鲁，小魔仙大变身，如果进行变身的数不满足条件的话，就继续让他变身。。。直到满足条件为止。
//巴啦啦能量，沙鲁沙鲁，小魔仙大变身：对于一个数，把他所有位上的数字进行加和，得到新的数。
//如果这个数字是个位数的话，那么他就满足条件
//#include <stdio.h>
//int bs(int a)
//{
//    int sum = 0;
//    while (a)
//    {
//        sum += a % 10;
//        a /= 10;
//    }
//    return sum;
//}
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int a = bs(n);
//    while (a > 9)
//    {
//        a = bs(a);
//    }
//    printf("%d", a);
//    return 0;
//}

//请统计某个给定范围[L, R]的所有整数中，数字2出现的次数。
//#include <stdio.h>
//int main()
//{
//    int a, b;
//    scanf("%d %d", &a, &b);
//    int count = 0;
//    for (int i = a; i <= b; i++)
//    {
//        int sum = i;
//        while (sum)
//        {
//            if (sum % 10 == 2)
//            {
//                count++;
//            }
//            sum /= 10;
//        }
//    }
//    printf("%d", count);
//    return 0;
//}

//牛牛很喜欢发短信，他所用的通讯公司的收费方法如下：
//1.每条短信收费0.1元
//2.每条短息的字数不超过60字，如果超过60字，将按照0.2元的价格收费。
//牛牛这个月发了 n 条短信，请问牛牛一共要缴多少短信费
//#include <stdio.h>
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int arr[n];
//    float count = 0;
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//        if (arr[i] <= 60)
//        {
//            count += 0.1;
//        }
//        else
//        {
//            count += 0.2;
//        }
//    }
//    printf("%.1f", count);
//    return 0;
//}