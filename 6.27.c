#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//第一行输入一个正整数 n 表示字符数组的长度，四个个字符分别 a1 和 a2 ， a3 和 a4，
//表示把字符数组中 a1 全部替换成 a2，然后把 a3 全部替换成 a4（包括a1替换后产生的a2等于a3的情况）
//第二行输入一个长度为 n 的字符数组
//#include <stdio.h>
//int main()
//{
//    int n;
//    char a1, a2, a3, a4;
//    scanf("%d %c %c %c %c\n", &n, &a1, &a2, &a3, &a4);
//    char arr[n];
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%c", &arr[i]);
//        if (arr[i] == a1)
//            arr[i] = a2;
//        if (arr[i] == a3)
//            arr[i] = a4;
//    }
//    for (int i = 0; i < n; i++)
//    {
//        printf("%c", arr[i]);
//    }
//    return 0;
//}

//牛牛最近学了水仙花数，但是他并不喜欢水仙花，因此他准备算出[l, r] 区间内的四叶玫瑰数。
//四叶玫瑰数：一个数的四个位置的数字的四次方加起来等于这个四位数本身的数。
//#include <stdio.h>
//#include<math.h>
//int main()
//{
//    int l, r;
//    scanf("%d %d", &l, &r);
//    for (int i = l; i <= r; i++)
//    {
//        int x = i;
//        int count = 0;
//        while (x)
//        {
//            count += pow(x % 10, 4);
//            x /= 10;
//        }
//        if (count == i)
//            printf("%d ", i);
//    }
//    return 0;
//}

//世界上有10类人，1类是懂二进制的，另一类的不懂二进制的。牛牛是第10种人，因此他是懂二进制的。
//牛牛把二进制数分成两种，一种是 1 的数量是偶数的，牛牛称之为 1 数，一种是 0 的数量是偶数的，
//牛牛称之为 0 数，如果一个数同时是 1 数和 0 数，那称之为 10 数。
//#include <stdio.h>
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int arr[n];
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//        int a_0 = 0, a_1 = 0;
//        int e = arr[i];
//        while (e)
//        {
//            if (e % 2 == 0)
//                a_0++;
//            else
//                a_1++;
//            e /= 2;
//        }
//        if (a_0 % 2 != 0 && a_1 % 2 == 0)
//            printf("1 ");
//        else if (a_0 % 2 == 0 && a_1 % 2 != 0)
//            printf("0 ");
//        else if (a_0 % 2 == 0 && a_1 % 2 == 0)
//            printf("10 ");
//        else
//            printf("100 ");
//    }
//    return 0;
//}

//小乐乐上课需要走n阶台阶，因为他腿比较长，所以每次可以选择走一阶或者走两阶，那么他一共有多少种走法？
//#include <stdio.h>
//int fib(int a)
//{
//    return a <= 2 ? a : fib(a - 1) + fib(a - 2);
//}
//int main()
//{
//    int a;
//    scanf("%d", &a);
//    printf("%d", fib(a));
//    return 0;
//}

//编写一个函数 long long factorial(int n)，用于计算 n 的阶乘。（要求使用递归实现）
//#include <iostream>
//using namespace std;
//
//long long factorial(int n);
//
//int main() {
//
//    int n;
//    scanf("%d", &n);
//    printf("%lld", factorial(n));
//    return 0;
//}
//
//long long factorial(int n) {
//
//    // write your code here......
//    if (n == 1)
//        return 1;
//    return n * factorial(n - 1);
//}

//请你帮他模拟一下这个运算。 （即 1 + 2 + 3.... + n - 1 + n)
//#include <stdio.h>
//long long jie(int n)
//{
//    if (n == 1)
//        return 1;
//    return n + jie(n - 1);
//}
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    printf("%lld", jie(n));
//    return 0;
//}

//牛牛最近了解到了著名的阿克曼(Ackmann)函数，
//阿克曼函数是一个增长极其迅速的函数，另外一个著名的数据结构--并查集的最优复杂度便可以达到阿克曼函数的反函数级别。
//请你计算阿克曼函数的几个整数定义域的结果。
//#include <stdio.h>
//int ackmann(long long  m, long long n)
//{
//    if (m == 0)
//        return n + 1;
//    if (m > 0 && n == 0)
//        return ackmann(m - 1, 1);
//    if (m > 0 && n > 0)
//        return ackmann(m - 1, ackmann(m, n - 1));
//    return 0;
//}
//int main()
//{
//    long long  n, m;
//    scanf("%lld %lld", &n, &m);
//    printf("%lld", ackmann(m, n));
//    return 0;
//}

//牛牛定义了一个函数 digit(x, i) ，表示分离出 x 的后 i 位的数字。
//#include <stdio.h>
//#include<math.h>
//int fl(int x, int i)
//{
//    if (i == 1)
//        return x % 10;
//    else
//        return fl(x / 10, i - 1) * 10 + x % 10;
//}
//int main()
//{
//    int x, i;
//    scanf("%d %d", &x, &i);
//    printf("%d", fl(x, i));
//    return 0;
//}