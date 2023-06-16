#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//试计算在区间1 到n 的所有整数中，数字x（0 ≤ x ≤ 9）共出现了多少次？
//例如，在1到11 中，即在1、2、3、4、5、6、7、8、9、10、11 中，数字1 出现了4 次。
//#include <stdio.h>
//int main()
//{
//    int a, b;
//    int count = 0;
//    scanf("%d %d", &a, &b);
//    for (int i = 1; i <= a; i++)
//    {
//        int c = i;
//        while (c)
//        {
//            if (c % 10 == b)
//                count++;
//            c /= 10;
//        }
//    }
//    printf("%d", count);
//    return 0;
//}

//输入10个整数，要求按输入时的逆序把这10个数打印出来。逆序输出，就是按照输入相反的顺序打印这10个数。
//1.
//#include <stdio.h>
//int main()
//{
//    int arr[10];
//    for (int i = 0; i < 10; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (int i = 9; i >= 0; i--)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}

//2.
// #include<stdio.h>
//void ret_a(int arr[0])
//{
//    int a = 0;
//    int b = 9;
//    for (int i = 0; i < 5; i++)
//    {
//        int tmp = arr[a];
//        arr[a] = arr[b];
//        arr[b] = tmp;
//        a++;
//        b--;
//    }
//}
//int main()
//{
//    int arr[10];
//    for (int i = 0; i < 10; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    ret_a(arr);
//    for (int i = 0; i < 10; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}

//输入数字N，然后输入N个数，计算这N个数的和。
// 1.
//#include <stdio.h>
//int main()
//{
//    int n;
//    int sum = 0;
//    scanf("%d", &n);
//    int arr[n];
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//        sum += arr[i];
//    }
//    printf("%d", sum);
//    return 0;
//}
//2.
//#include <stdio.h>
//int main()
//{
//    int n;
//    int sum = 0;
//    scanf("%d", &n);
//    while (n--)
//    {
//        int num;
//        scanf("%d", &num);
//        sum += num;
//    }
//    printf("%d", sum);
//    return 0;
//}

//输入n个成绩，换行输出n个成绩中最高分数和最低分数的差。
//1.
//#include <stdio.h>
//int main()
//{
//    int a;
//    scanf("%d", &a);
//    int max = 0;
//    int sex = 100;
//    while (a--)
//    {
//        int num;
//        scanf("%d", &num);
//        if (num > max)
//            max = num;
//        if (num < sex)
//            sex = num;
//    }
//    printf("%d", max - sex);
//    return 0;
//}

//2.
//#include <stdio.h>
//int main()
//{
//    int a;
//    scanf("%d", &a);
//    int arr[a];
//    for (int i = 0; i < a; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (int i = 0; i < a - 1; i++)
//    {
//        for (int j = 0; j < a - i - 1; j++)
//        {
//            if (arr[j] > arr[j + 1])
//            {
//                int tmp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = tmp;
//            }
//        }
//    }
//    printf("%d", arr[a - 1] - arr[0]);
//    return 0;
//}

//期中考试开始了，大家都想取得好成绩，争夺前五名。从键盘输入 n 个学生成绩，输出每组排在前五高的成绩。
//#include <stdio.h>
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int arr[n];
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (int i = 0; i < n - 1; i++)
//    {
//        for (int j = 0; j < n - 1 - i; j++)
//        {
//            if (arr[j] < arr[j + 1])
//            {
//                int tmp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = tmp;
//            }
//        }
//    }
//    for (int i = 0; i < 5; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}

//输入两个升序排列的序列，将两个序列合并为一个有序序列并输出。
// 1.
//#include<stdio.h>
//int main()
//{
//    int n, m;
//    scanf("%d %d", &n, &m);
//    int arr[n + m];
//    for (int i = 0; i < n + m; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (int i = 0; i < n + m - 1; i++)
//    {
//        for (int j = 0; j < m + n - 1 - i; j++)
//        {
//            if (arr[j] > arr[j + 1])
//            {
//                int tmp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = tmp;
//            }
//        }
//    }
//    for (int i = 0; i < n + m; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}

//2.
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
//        if (arr1[j] > arr2[k])
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

//输入一个整数序列，判断是否是有序序列，有序，指序列中的整数从小到大排序或者从大到小排序(相同元素也视为有序)。
//#include<stdio.h>
//int main()
//{
//    int a;
//    scanf("%d", &a);
//    int arr[a];
//    int b = 0;
//    int c = 0;
//    for (int i = 0; i < a; i++)
//    {
//        scanf("%d", &arr[i]);
//        if (i >= 1)
//        {
//            if (arr[i] <= arr[i - 1])
//            {
//                b++;
//            }
//            else if (arr[i] >= arr[i - 1])
//            {
//                c++;
//            }
//        }
//    }
//    if (b == a - 1 || c == a - 1)
//    {
//        printf("sorted");
//    }
//    else {
//        printf("unsorted");
//    }
//    return 0;
//}

//有一个有序数字序列，从小到大排序，将一个新输入的数插入到序列中，保证插入新数后，序列仍然是升序。
//#include <stdio.h>
//int main()
//{
//    int a;
//    scanf("%d", &a);
//    int arr[a + 1];
//    for (int i = 0; i < a; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    scanf("%d", &arr[a]);
//    for (int i = 0; i < a + 1; i++)
//    {
//        if (arr[i] > arr[a])
//        {
//            int tmp = arr[a];
//            arr[a] = arr[i];
//            arr[i] = tmp;
//        }
//        printf("%d ", arr[i]);
//
//    }
//    return 0;
//}

//有一个整数序列（可能有重复的整数），现删除指定的某一个整数，
//输出删除指定数字之后的序列，序列中未被删除数字的前后位置没有发生改变。
//#include <stdio.h>
//int main()
//{
//    int a;
//    scanf("%d", &a);
//    int arr[a];
//    for (int i = 0; i < a; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    int b;
//    scanf("%d", &b);
//    for (int i = 0; i < a; i++)
//    {
//        if (b == arr[i])
//            continue;
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}