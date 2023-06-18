#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[20][20];
    int  m = 1;
    int i = 0, j = 0, flag = 0;
    while (m <= n * n)
    {
        while (i >= 0 && (m <= n * n) && j <= n - 1)
        {
            arr[i--][j++] = m++;
        }
        flag++;
        if (flag < n)
        {
            i++;
        }
        else
        {
            i += 2;
            j--;
        }
        while (j >= 0 && (m <= n * n) && i <= n - 1)
        {
            arr[i++][j--] = m++;
        }
        flag++;
        if (flag < n)
            j++;
        else
        {
            j += 2;
            i--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}