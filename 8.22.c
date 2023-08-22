#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//int findMaxConsecutiveOnes(int* nums, int numsSize)
//{
//    int count=0;
//    int sum=0;
//    for(int i=0;i<numsSize;i++)
//    {
//        if(nums[i])
//        {
//            count++;
//        }
//        else
//        {
//            sum=fmax(sum,count);
//            count=0;
//        }
//    }
//    return fmax(sum,count);
//}


//完全数（Perfect number），又称完美数或完备数，是一些特殊的自然数。
//它所有的真因子（即除了自身以外的约数）的和（即因子函数），恰好等于它本身。
//例如：28，它有约数1、2、4、7、14、28，除去它本身28外，其余5个数相加，1 + 2 + 4 + 7 + 14 = 28。
//输入n，请输出n以内(含n)完全数的个数。
//#include <stdio.h>
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int x = 0;
//    for (int i = 1; i <= n; i++)
//    {
//        int sum = 0;
//        for (int j = 1; j < i; j++)
//        {
//            if (i % j == 0)
//                sum += j;
//        }
//        if (sum == i)
//            x++;
//    }
//    printf("%d", x);
//    return 0;
//} 