#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//输入n个整数的序列，要求对这个序列进行去重操作。所谓去重，
//是指对这个序列中每个重复出现的整数，只保留该数第一次出现的位置，删除其余位置。
//#include <stdio.h>
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int arr[n];
//    int arr2[n];
//    int num = 0;
//    for (int i = 0; i < n; i++)
//    {
//        int a = 0;
//        scanf("%d", &arr[i]);
//        for (int j = 0; j < i; j++)
//        {
//            if (arr2[j] == arr[i])
//            {
//                a = 1;
//                break;
//            }
//        }
//        if (a == 0)
//        {
//            arr2[num] = arr[i];
//            num++;
//        }
//    }
//    for (int i = 0; i < num; i++)
//    {
//        printf("%d ", arr2[i]);
//    }
//    return 0;
//}

//给定n个整数和一个整数x，小乐乐想从n个整数中判断x出现几次，请编程帮他实现。
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
//    int x;
//    scanf("%d", &x);
//    int count = 0;
//    for (int i = 0; i < n; i++)
//    {
//        if (arr[i] == x)
//            count++;
//    }
//    printf("%d", count);
//    return 0;
//}

//用筛选法求n以内的素数。筛选法求解过程为：将2~n之间的正整数放在数组内存储，
//将数组中2之后的所有能被2整除的数清0，再将3之后的所有能被3整除的数清0 ，以此类推，直到n为止。数组中不为0 的数即为素数。
//#include <stdio.h>
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int arr[n - 1];
//    int count = 0;
//    for (int i = 2; i <= n; i++)
//    {
//        arr[i] = i;
//    }
//    for (int i = 2; i <= n; i++)
//    {
//        for (int j = 2; j < i; j++)
//        {
//            if (i % j == 0)
//            {
//                count = 1;
//                arr[i] = 0;
//                break;
//            }
//        }
//        if (count == 0)
//        {
//            arr[i] = i;
//        }
//        count = 0;
//    }
//    for (int i = 2; i <= n; i++)
//    {
//        if (arr[i] != 0)
//        {
//            printf("%d ", arr[i]);
//        }
//        else {
//            count++;
//        }
//    }
//    printf("\n%d\n", count);
//    return 0;
//}

//输入一个班级5个学生各5科成绩，输出5个学生各5科成绩及总分。
//#include <stdio.h>
//int main()
//{
//    float arr[5][5];
//    float count = 0;
//    for (int i = 0; i < 5; i++)
//    {
//        for (int j = 0; j < 5; j++)
//        {
//            scanf("%f", &arr[i][j]);
//            printf("%.1f ", arr[i][j]);
//            count += arr[i][j];
//        }
//        printf("%.1f\n", count);
//        count = 0;
//    }
//    return 0;
//}

//KiKi得到了一个n行m列的矩阵，现在他想知道第x行第y列的值是多少，请你帮助他完成这个任务。
//#include <stdio.h>
//int main()
//{
//    int n, m;
//    scanf("%d %d", &n, &m);
//    int arr[n][m];
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    int x, y;
//    scanf("%d %d", &x, &y);
//    printf("%d", arr[x - 1][y - 1]);
//    return 0;
//}

//KiKi想从n行m列的方阵队列中找到身高最高的人的位置，请你帮助他完成这个任务。
//#include <stdio.h>
//int main()
//{
//    int n, m;
//    scanf("%d %d", &n, &m);
//    int arr[n][m];
//    int max = 0;
//    int x, y;
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//            if (arr[i][j] > max)
//            {
//                max = arr[i][j];
//                x = i + 1;
//                y = j + 1;
//            }
//        }
//    }
//    printf("%d %d", x, y);
//    return 0;
//}

//KiKi得到了两个n行m列的矩阵，他想知道两个矩阵是否相等，请你回答他。(当两个矩阵对应数组元素都相等时两个矩阵相等)。
//#include <stdio.h>
//int main()
//{
//    int a, b;
//    scanf("%d %d", &a, &b);
//    int arr[a][b];
//    int arr2[a][b];
//    int count = 0;
//    for (int i = 0; i < a; i++)
//    {
//        for (int j = 0; j < b; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    for (int i = 0; i < a; i++)
//    {
//        for (int j = 0; j < b; j++)
//        {
//            scanf("%d", &arr2[i][j]);
//            if (arr[i][j] == arr2[i][j])
//            {
//                count++;
//            }
//        }
//    }
//    if (count == a * b)
//        printf("Yes\n");
//    else
//        printf("No\n");
//    return 0;
//}

//输入NxM矩阵，矩阵元素均为整数，计算其中大于零的元素之和。
//#include <stdio.h>
//int main()
//{
//    int n, m;
//    scanf("%d %d", &n, &m);
//    int arr[n][m];
//    int count = 0;
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//            if (arr[i][j] > 0)
//                count += arr[i][j];
//        }
//    }
//    printf("%d", count);
//    return 0;
//}

//给你一个整数n，按要求输出n∗n的回型矩阵
#include <stdio.h>
int main() {
    int n = 0, arr[20][20];
    scanf("%d", &n);
    int left = 0, right = n - 1, up = 0, down = n - 1;  //左右上下起始边界
    int i = 0, j = 0, val = 1;  //val是数值
    while (val <= n * n) {
        for (int i = left; i <= right; i++)
            arr[up][i] = val++;
        up++;

        for (int i = up; i <= down; i++)
            arr[i][right] = val++;
        right--;

        for (int i = right; i >= left; i--)
            arr[down][i] = val++;
        down--;

        for (int i = down; i >= up; i--)
            arr[i][left] = val++;
        left++;
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);  //用萝卜填坑
        }
        printf("\n");
    }
    return 0;
}