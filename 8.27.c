#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//给定一个长度为n的数组nums，请你找到峰值并返回其索引。数组可能包含多个峰值，在这种情况下，返回任何一个所在位置即可。
//1.峰值元素是指其值严格大于左右相邻值的元素。严格大于即不能有等于
//2.假设 nums[-1] = nums[n] 
//3.对于所有有效的 i 都有 nums[i] != nums[i + 1]
//4.你可以使用O(logN)的时间复杂度实现此问题吗
///**
// * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
// *
// *
// * @param nums int整型一维数组
// * @param numsLen int nums数组长度
// * @return int整型
// */
//    int findPeakElement(int* nums, int numsLen) {
//    // write code here
//    int left = 0;
//    int right = numsLen - 1;
//    while (left < right)
//    {
//        int mid = (left + right) / 2;
//        if (nums[mid] < nums[mid + 1])
//            left = mid + 1;
//        else
//            right = mid;
//    }
//    return right;
//}

//现在有一个长度为 n 的正整数序列，其中只有一种数值出现了奇数次，其他数值均出现偶数次，请你找出那个出现奇数次的数值。
//#include <stdio.h>
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int arr[n];
//    int a = 0;
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//        a ^= arr[i];
//    }
//    printf("%d", a);
//    return 0;
//}

#include<stdio.h>
extern int ADD(int x,int y);
int main()
{
	int sum = ADD(4, 5);
	printf("%d", sum);
	return 0;
}