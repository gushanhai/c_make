#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)	
//编写一个函数来查找字符串数组中的最长公共前缀。
//如果不存在公共前缀，返回空字符串 ""。
//char* longestCommonPrefix(char** strs, int strsSize)
//{
//	if (strsSize == 0)
//		return "";
//	char* ret = *strs;
//	for (int i = 1; i < strsSize; i++)
//	{
//		int j = 0;
//		while (*(ret + j) && *(*(strs + i) + j) && *(ret + j) == *(*(strs + i) + j))
//			j++;
//		*(ret + j) = '\0';
//	}
//	return ret;
//}

//给定一个排序数组和一个目标值，在数组中找到目标值，并返回其索引。如果目标值不存在于数组中，返回它将会被按顺序插入的位置。
//int find_num(int* nums, int numsSize, int target)
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
//        {
//            return mid;
//        }
//    }
//    return left;
//}
//int searchInsert(int* nums, int numsSize, int target)
//{
//    int ret = find_num(nums, numsSize, target);
//    return ret;
//}
