#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//整数转换。编写一个函数，确定需要改变几个位才能将整数A转成整数B。
//int convertInteger(int A, int B)
//{
//    int tmp = A ^ B;
//    int count = 0;
//    for (int i = 0; i < 32; i++)
//    {
//        if (tmp & 1 == 1)
//            count++;
//        tmp >>= 1;
//    }
//    return count;
//}

//给定一个长度为 n 的非降序数组和一个非负数整数 k ，要求统计 k 在数组中出现的次数
//* @param nums int整型一维数组
//* @param numsLen int nums数组长度
//* @param k int整型
//* @return int整型
//* /
//int find(int* nums, int numsLen, double k)
//{
//    int left = 0;
//    int right = numsLen - 1;
//    while (left <= right)
//    {
//        int mid = (left + right) / 2;
//        if (nums[mid] < k)
//            left = mid + 1;
//        else if (nums[mid] > k)
//            right = mid - 1;
//        else
//            return mid;
//    }
//    return left;
//}
//
//int GetNumberOfK(int* nums, int numsLen, int k) {
//    // write code here
//    return find(nums, numsLen, k + 0.5) - find(nums, numsLen, k - 0.5);
//}

#include<stdio.h>
typedef struct tmp
{
	int a;
	char b;
	char arr[10];
}tmp;
int main()
{
	FILE* pf = fopen("data.txt", "rb");
	if (pf == NULL)
	{
		perror("open fail");
		exit(-1);
	}
	tmp t1 = { 0 };
	fread(&t1, sizeof(tmp), 1, pf);
	printf("%d %c %s", t1.a, t1.b, t1.arr);
	fclose(pf);
	pf = NULL;
	return 0;
}