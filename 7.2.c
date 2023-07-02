#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//牛牛定义了一个函数 digit(x, i) ，表示分离出 x 的后 i 位的数字。
//#include<stdio.h>
//#include<math.h>
//int digit(int x, int i)
//{
//    int count = 0;
//    int e = pow(10, i);
//    count = x % e;
//    return count;
//}
//int main()
//{
//    int x, i;
//    scanf("%d %d", &x, &i);
//    printf("%d", digit(x, i));
//    return 0;
//}

//#include <stdio.h>
//int hermite(int n, int x)
//{
//    if (n == 0)
//        return 1;
//    if (n == 1)
//        return 2 * n;
//    if (n > 1)
//        return 2 * x * hermite(n - 1, x) - 2 * (n - 1) * hermite(n - 2, x);
//}
//int main()
//{
//    int n, x;
//    scanf("%d %d", &n, &x);
//    printf("%d", hermite(n, x));
//    return 0;
//}

//#include <stdio.h>
//int outprint(int n, int m)
//{
//    if (m == 1)
//        return n;
//    else
//        return n * outprint(n - 1, m - 1);
//}
//int main()
//{
//    int n, m;
//    scanf("%d %d", &n, &m);
//    printf("%d", outprint(n, m));
//    return 0;
//}

//输入一个正整数 n。保证个位数不是 0
//#include <stdio.h>
//void outptint(int n)
//{
//    int x = n;
//    while (x)
//    {
//        int e = x % 10;
//        printf("%d", e);
//        x /= 10;
//    }
//}
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    outptint(n);
//    return 0;
//}

//#include <stdio.h>
//void outptint(int n)
//{
//    int x = n;
//    if (n > 0)
//    {
//        printf("%d", x % 10);
//        outptint(n / 10);
//    }
//}
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    outptint(n);
//    return 0;
//}