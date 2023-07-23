#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//给定一个整数数组 nums，将数组中的元素向右轮转 k 个位置，其中 k 是非负数。
//输入: nums = [1, 2, 3, 4, 5, 6, 7], k = 3
//输出 : [5, 6, 7, 1, 2, 3, 4]
//解释 :
//	向右轮转 1 步 : [7, 1, 2, 3, 4, 5, 6]
//	向右轮转 2 步 : [6, 7, 1, 2, 3, 4, 5]
//	向右轮转 3 步 : [5, 6, 7, 1, 2, 3, 4]
//void reverse(int* left, int* right)
//{
//    while (left < right)
//    {
//        int tmp = *left;
//        *left = *right;
//        *right = tmp;
//        left++;
//        right--;
//    }
//}
//void rotate(int* nums, int numsSize, int k)
//{
//    k %= numsSize;
//    //左边逆序
//    reverse(nums, nums + numsSize - 1);
//    //右边逆序
//    reverse(nums, nums + k - 1);
//    //整体逆序
//    reverse(nums + k, nums + numsSize - 1);
//}

//数组nums包含从0到n的所有整数，但其中缺了一个。请编写代码找出那个缺失的整数。你有办法在O(n)时间内完成吗？
//int missingNumber(int* nums, int numsSize)
//{
//    int all = 0;
//    for (int i = 0; i < numsSize; i++)
//    {
//        all ^= *(nums + i);
//    }
//    for (int i = 0; i < numsSize + 1; i++)
//    {
//        all ^= i;
//    }
//    return all;
//}

//旋转字符串
//#include<stdio.h>
//#include<string.h>
//void revese1(char* left, char* right)
//{
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void revese(char* arr, int k)
//{
//	int len = strlen(arr);
//	revese1(arr, arr + k-1);
//	revese1(arr + k, arr + len - 1);
//	revese1(arr, arr + len - 1);
//}
//int main()
//{
//	char arr[] = "abcdefghij";
//	int k;
//	scanf("%d", &k);
//	revese(arr, k);
//	printf("%s", arr);
//	return 0;
//}

//判断字符串2是否为字符串旋转结果
#include<stdio.h>
#include<string.h>
int reve(char* str1, char* str2)
{
	int s1 = strlen(str1);
	int s2 = strlen(str2);
	if (s1 != s2)
		return 0;
	strncat(str1, str1, s1);
	if (strstr(str1, str2) == NULL)
		return 0;
	else
		return 1;
}
int main()
{
	char str1[36] = "abcdef";
	char str2[] = "fjkabcde";
	int ret = reve(str1, str2);
	if (ret == 0)
		printf("不是");
	else
		printf("是");
	return 0;
}