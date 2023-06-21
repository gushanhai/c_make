#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//牛牛刚刚学了素数的定义：素数值指在大于1的自然数中，除了1和它本身以外不再有其他因数的自然数
//牛牛想知道在[l, r] 范围内全部素数的和
//#include <stdio.h>
//int main()
//{
//    int l, r;
//    scanf("%d %d", &l, &r);
//    int count = 0;
//    for (int i = l; i <= r; i++)
//    {
//        int x = 1;
//        if (i == 1)
//            count++;
//        for (int j = 2; j < i; j++)
//        {
//            if (i % j == 0)
//            {
//                x = 0;
//                break;
//            }
//        }
//        if (x != 0)
//        {
//            count += i;
//        }
//    }
//    printf("%d", count);
//    return 0;
//}

//牛牛刚学会数组不久，他拿到两个数组 a 和 b，询问 b 的哪一段连续子数组之和与数组 a 之和最接近。
//如果有多个子数组之和同样接近，输出起始点最靠左的数组。
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//    int n, m;
//    scanf("%d %d", &n, &m);
//    int count = 0;//数组a的总值
//    int count2 = 0;//数组b的总值
//    int left = 0;
//    int right = 1;
//    int c1, c2;
//    int arr1[n], arr2[m];
//    int b = 100;
//    int a;
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr1[i]);
//        count += arr1[i];
//    }
//    int min = count;
//    for (int i = 0; i < m; i++)
//    {
//        scanf("%d", &arr2[i]);
//    }
//    if (m == 1)
//    {
//        printf("%d", arr2[0]);
//    }
//    else
//    {
//        while (left < right && right < m)
//        {
//            count2 = 0;
//            for (int i = left; i <= right; i++)
//            {
//                count2 += arr2[i];
//            }
//            if (abs(count2 - count) < min)//如果数组2的和小于数组1的和
//            {
//                min = abs(count2 - count);//最小值是数组2-数组1的绝对值
//                c1 = left;
//                c2 = right;
//            }
//            if (count2 > count)//如果数组2的和大于数组1的和
//            {
//                left++;//让left+1（退出循环）
//            }
//            if (count2 < count)//如果数组2的和小于数组1的和
//            {
//                right++;//加上一位元素的值（直到right的值小于m的值）
//            }
//        }
//    }
//    for (int i = c1; i <= c2; i++)
//    {
//        printf("%d ", arr2[i]);
//    }
//    return 0;
//}

//现在给出一个素数，这个素数满足两点：
//1、  只由1 - 9组成，并且每个数只出现一次，如13, 23, 1289。
//2、  位数从高到低为递减或递增，如2459，87631。
//请你判断一下，这个素数的回文数是否为素数（13的回文数是131, 127的回文数是12721）。
//#include <stdio.h>
//#include<math.h>
//int main()
//{
//    long long a;
//    scanf("%lld", &a);
//    long long b = a;
//    long long  c = a;
//    long long j = 0;
//    while (c > 9)
//    {
//        c /= 10;
//        b = b * 10 + (c % 10);
//    }
//    for (j = 2; j <= sqrt(b); j++)
//    {
//        if (b % j == 0)
//        {
//            printf("noprime\n");
//            break;
//        }
//    }
//    if (j > sqrt(b))
//    {
//        printf("prime\n");
//    }
//    return 0;
//}