#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//首先输入要输入的整数个数n，然后输入n个整数。输出为n个整数中负数的个数，和所有正整数的平均值，结果保留一位小数。
//0即不是正整数，也不是负数，不计入计算。如果没有正数，则平均值为0。
//#include <stdio.h>
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int negative = 0;//负数个数
//    float sum = 0;//平均值
//    int i, b;
//    int positive = 0;//正数个数
//    b = n;
//    while (b--)
//    {
//        scanf("%d", &i);
//        if (i > 0)
//        {
//            positive++;
//            sum += i;
//        }
//        if (i < 0)
//            negative++;
//    }
//    sum /= positive;
//    printf("%d ", negative);
//    if (positive == 0)
//        printf("0.0");
//    else
//        printf("%.1f", sum);
//    return 0;
// }
 

////给定一个 n 个元素有序的（升序）整型数组 nums 和一个目标值 target  ，写一个函数搜索 nums 中的 target，如果目标值存在返回下标，否则返回 - 1。
//int search(int* nums, int numsSize, int target)
//{
//    int left = 0;
//    int right = numsSize - 1;
//    while (left <= right)
//    {
//        int mid = (left + right) / 2;
//        if (nums[mid] < target)
//            left = mid + 1;
//        else if (nums[mid] > target)
//            right = mid - 1;
//        else if (nums[mid] == target)
//            return mid;
//    }
//    return -1;
//}

//有一个长度为 n 的非降序数组，比如[1, 2, 3, 4, 5]，将它进行旋转，即把一个数组最开始的若干个元素搬到数组的末尾，变成一个旋转数组，
//比如变成了[3, 4, 5, 1, 2]，或者[4, 5, 1, 2, 3]这样的。请问，给定这样一个旋转数组，求数组中的最小值
/**
 * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
 *
 *
 * @param nums int整型一维数组
 * @param numsLen int nums数组长度
 * @return int整型
 */
//int minNumberInRotateArray(int* nums, int numsLen)
//{
//    // write code here
//    int left = 0;
//    int right = numsLen - 1;
//    while (left < right)
//    {
//        int mid = (left + right) / 2;
//        if (nums[mid] > nums[right])
//            left = mid + 1;
//        else if (nums[mid] < nums[right])
//            right = mid;
//        else
//            right -= 1;
//
//    }
//    return nums[left];
//}

typedef struct tmp
{
	int a;
	float c;
	char e[10];
}tmp;
#include<stdio.h>
int main()
{
	char arr[30] = { 0 };
	tmp t1 = { 10,2.3f,"asdfg" };
	sprintf(arr, "%d %f %s", t1.a, t1.c, t1.e);
	printf("%s\n", arr);
	tmp t2 = { 0 };
	sscanf(arr, "%d %f %s", &(t2.a), &(t2.c), t2.e);
	printf("%d %f %s", t2.a, t2.c, t2.e);
	return 0;
}