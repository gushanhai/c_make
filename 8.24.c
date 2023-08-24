#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//有一种兔子，从出生后第3个月起每个月都生一只兔子，小兔子长到第三个月后每个月又生一只兔子。
//例子：假设一只兔子第3个月出生，那么它第5个月开始会每个月生一只兔子。
//一月的时候有一只兔子，假如兔子都不死，问第n个月的兔子总数为多少？
//第一种解法：
//#include <stdio.h>
//int ret(int n)
//{
//    if (n == 1 || n == 2)
//        return 1;
//    else
//        return ret(n - 1) + ret(n - 2);
//}
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int count = ret(n);
//    printf("%d", count);
//    return 0;
//}

//第二种解法：
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int num1 = 1;
//	int num2 = 1;
//	int num = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		if (i < 3)
//		{
//			num = 1;
//		}
//		else
//		{
//		num = num1 + num2;
//		num1 = num2;
//		num2 = num;
//		}
//	}
//	printf("%d", num);
//	return 0;
//}


//数列的定义如下：数列的第一项为n，以后各项为前一项的平方根，求数列的前m项的和。
//#include <stdio.h>
//#include<math.h>
//int main()
//{
//    double n;
//    int m;
//    double count;
//    while (scanf("%lf %d", &n, &m) != EOF)
//    {
//        count = 0;
//        while (m--)
//        {
//            count += n;
//            n = sqrt(n);
//        }
//        printf("%.2lf\n", count);
//    }
//    return 0;
//}