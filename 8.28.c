#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//输入一个字符串和一个整数 k ，截取字符串的前k个字符并输出
//第一种方法
//#include <stdio.h>
//#include<string.h>
//int main()
//{
//    char str[1000];
//    int k;
//    char str1[1000] = { 0 };
//    gets(str);
//    scanf("%d", &k);
//    memcpy(str1, str, k);
//    printf("%s", str1);
//    return 0;
//}
//第二种方法
//#include <stdio.h>
//int main()
//{
//    char str[1000];
//    int k;
//    gets(str);
//    scanf("%d", &k);
//    str[k] = '\0';
//    printf("%s", str);
//    return 0;
//}

//牛牛以前在老师那里得到了一个正整数数对(x, y), 牛牛忘记他们具体是多少了。
//但是牛牛记得老师告诉过他x和y均不大于n, 并且x除以y的余数大于等于k。
//牛牛希望你能帮他计算一共有多少个可能的数对。
//#include <stdio.h>
//int main()
//{
//    long n, k = 0;
//    long count = 0;
//    while (~scanf("%ld %ld", &n, &k))
//    {
//        if (k == 0)
//        {
//            printf("%ld\n", n * n);
//            continue;
//        }
//        for (long j = k + 1; j <= n; j++)
//        {
//            long help = n % j < k ? 0 : (n % j) - k + 1;
//            count += (j - k) * (n / j) + help;
//        }
//        printf("%ld\n", count);
//    }
//    return 0;
//}