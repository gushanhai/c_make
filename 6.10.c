#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//模拟实现strlen函数
//#include<stdio.h>
//#include<assert.h>
//int my_strlen(char const* arr)
//{
//	assert(arr != NULL);
//	int count = 0;
//	while (*arr++)
//	{
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abc";
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}

//输入两个升序排列的序列，将两个序列合并为一个有序序列并输出。
//#include<stdio.h>
//int main()
//{
//    int n, m;
//    scanf("%d %d", &n, &m);
//    int arr1[1000];
//    int arr2[2000];
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr1[i]);
//    }
//    for (int i = 0; i < m; i++)
//    {
//        scanf("%d", &arr2[i]);
//    }
//    int j = 0;
//    int k = 0;
//    int i = 0;
//    int arr3[3000];
//    while (j < n && k < m)
//    {
//        if (arr1[j] >= arr2[k])
//        {
//            arr3[i] = arr2[k];
//            k++;
//            i++;
//        }
//        else
//        {
//            arr3[i] = arr1[j];
//            j++;
//            i++;
//        }
//    }
//    if (j == n)
//    {
//        while (k < m)
//        {
//            arr3[i] = arr2[k];
//            k++;
//            i++;
//        }
//    }
//    else
//    {
//        while (j < n)
//        {
//            arr3[i] = arr1[j];
//            i++;
//            j++;
//        }
//    }
//    for (i = 0; i < (n + m); i++)
//    {
//        printf("%d ", arr3[i]);
//    }
//    return 0;
//}
//支持变长数组的写法：
//#include<stdio.h>
//int main()
//{
//    int n, m;
//    scanf("%d %d", &n, &m);
//    int arr1[n];
//    int arr2[m];
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr1[i]);
//    }
//    for (int i = 0; i < m; i++)
//    {
//        scanf("%d", &arr2[i]);
//    }
//    int j = 0;
//    int k = 0;
//    int i = 0;
//    int arr3[n + m];
//    while (j < n && k < m)
//    {
//        if (arr1[j] >= arr2[k])
//        {
//            arr3[i++] = arr2[k++];
//        }
//        else
//        {
//            arr3[i++] = arr1[j++];
//        }
//    }
//    if (j == n)
//    {
//        while (k < m)
//        {
//            arr3[i++] = arr2[k++];
//        }
//    }
//    else
//    {
//        while (j < n)
//        {
//            arr3[i++] = arr1[j++];
//        }
//    }
//    for (i = 0; i < (n + m); i++)
//    {
//        printf("%d ", arr3[i]);
//    }
//    return 0;
//}
//冒泡写法:
//#include <stdio.h>
//int main() {
//    int n, m;
//    scanf("%d %d", &n, &m);
//    int i, j, arr[10000], arr2[10000];
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (i = n; i < n + m; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (i = 0; i < n + m; i++)
//    {
//        for (j = 0; j < n + m - 1; j++)
//        {
//            if (arr[j] > arr[j + 1])
//            {
//                int tmp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = tmp;
//            }
//        }
//    }
//    for (i = 0; i < n + m; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}

//牛牛从键盘输入一个整数，请你判断这个整数能被 2 3 7 中哪几个数整除，并按升序输出。
//如果不能被 2 3 7 任意一个数整除则输出 n。
//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d", &a);
//    int arr[3] = { 2,3,7 };
//    for (int i = 0; i < 3; i++)
//    {
//        if (a % arr[i] == 0)
//        {
//            printf("%d ", arr[i]);
//            b++;
//        }
//    }
//    if (b == 0)
//    {
//        printf("n");
//    }
//    return 0;
//}

//输入10个整数，分别统计输出正数、负数的个数。
//#include <stdio.h>
//int main()
//{
//    int arr[10];
//    int z = 0;
//    int f = 0;
//    for (int i = 0; i < 10; i++)
//    {
//        scanf("%d", &arr[i]);
//        if (arr[i] >= 0)
//        {
//            z++;
//        }
//        else {
//            {
//                f++;
//            }
//        }
//    }
//    printf("positive:%d\n", z);
//    printf("negative:%d\n", f);
//    return 0;
//}

//KiKi非常喜欢网购，在一家店铺他看中了一件衣服，他了解到，
// 如果今天是“双11”（11月11日）则这件衣服打7折，“双12” （12月12日）则这件衣服打8折，
//如果有优惠券可以额外减50元（优惠券只能在双11或双12使用），求KiKi最终所花的钱数。
//#include <stdio.h>
//int main() {
//    float money = 0;
//    scanf("%f", &money);
//    int month;
//    scanf("%d", &month);
//    int day;
//    scanf("%d", &day);
//    int a;
//    scanf("%d", &a);
//    if (month == 11 && day == 11)
//    {
//        money = (money * 0.7) - 50 * a;
//    }
//    if (month == 12 && day == 12)
//    {
//        money = (money * 0.8) - 50 * a;
//    }
//    if (money < 0)
//    {
//        money = 0;
//    }
//    printf("%.2f", money);
//    return 0;
//}

//牛牛正在寄快递，他了解到快递在 1kg 以内的按起步价 20 元计算，超出部分按每 kg 1元计算，
//不足 1kg 部分按 1kg计算。如果加急的话要额外付五元，请问牛牛总共要支付多少快递费
//1.
//#include <stdio.h>
//int main() {
//    float a = 0;
//    int money = 20;
//    char b;
//    scanf("%f %c", &a, &b);
//    a -= 1;
//    int c = (int)a;
//    if (a <= 1)
//    {
//        if (b == 'y')
//        {
//            money += 5;
//        }
//    }
//    else
//    {
//        {
//            if (a - c == 0) {
//                money += c;
//            }
//            else {
//                c += 1;
//                money += c;
//            }
//            if (b == 'y') {
//                money += 5;
//            }
//        }
//    }
//    printf("%d", money);
//    return 0;
//}
//2.
//#include <stdio.h>
//int main() {
//    float a = 0;//货物重量
//    int money = 20;//钱
//    char b;//是否加急
//    scanf("%f %c", &a, &b);
//    a -= 1;//判断a是否大于1kg
//    int c = (int)a;//将a的值强制类型转换为int类型
//    if (a <= 1 && a > 0) //小于等于1kg
//    {
//    }
//    if (a > 1)
//    {
//        {
//            if (a - c == 0)
//            {
//                money += c;
//            }
//            else
//            {
//                c += 1;
//                money += c;
//            }
//        }
//    }
//    if (b == 'y')
//    {
//        money += 5;
//    }
//    printf("%d", money);
//    return 0;
//}

//牛牛商场促销活动：
//满100打9折；
//满500打8折；
//满2000打7折；
//满5000打6折
//牛阿姨算不清楚自己应该付多少钱，请你帮忙算一下
//#include<stdio.h>
//int main()
//{
//    float a;
//    scanf("%f", &a);
//    if (a >= 100 && a < 500)
//    {
//        a *= 0.9;
//    }
//    else if (a >= 500 && a < 2000)
//    {
//        a *= 0.8;
//    }
//    else if (a >= 2000 && a < 5000)
//    {
//        a *= 0.7;
//    }
//    else if (a >= 5000)
//    {
//        a *= 0.6;
//    }
//    printf("%.1f", a);
//    return 0;
//}

//牛牛的通勤路上有两种选择，要么走路，要么打车，牛牛走路的速度是 1m/s 。
//打车的速度的 10m/s ，但是打车需要等出租车 10 s，请你计算牛牛想尽快到公司应该选择打车还是走路。
// 1.
//#include <stdio.h>
//int main()
//{
//    int a;
//    scanf("%d", &a);
//    int walk = a * 1;
//    float taxi = 10 + a / 10;
//    if (walk < taxi)
//        printf("w");
//    else
//        printf("v");
//    return 0;
//}
//2.
//#include <stdio.h>
//int main()
//{
//    int a;
//    scanf("%d", &a);
//    int walk = a * 1;
//    float taxi = 10 + a / 10;
//    printf("%c", (walk < taxi ? 'w' : 'v'));
//    return 0;
//}

//牛牛尝试在蒙住眼睛的情况下拿到旁边的金币，假设的坐标是 (x,y) ，金币的坐标是 (x1,y1) ，金币一定在牛牛在周围
//即|x1−x|+|y1−y|=1请你判断牛牛应该往哪个方向伸手。
// 1.
//#include <stdio.h>
//int main()
//{
//    int x, y, x1, y1;
//    scanf("%d %d", &x, &y);
//    scanf("%d %d", &x1, &y1);
//    if (x1 - x == 0)
//        printf("%c", (y1 > y ? 'u' : 'd'));
//    if (y1 == y)
//        printf("%c", x1 > x ? 'r' : 'l');
//    return 0;
//}

//2.
//#include <stdio.h>
//int main()
//{
//    int x, y, x1, y1;
//    scanf("%d %d", &x, &y);
//    scanf("%d %d", &x1, &y1);
//    if (y1 - y == 1)
//        printf("u");
//    if (y1 - y == -1)
//        printf("d");
//    if (x1 - x == 1)
//        printf("r");
//    if (x1 - x == -1)
//        printf("l");
//    return 0;
//}