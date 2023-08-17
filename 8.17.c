#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//给你一个整数数组 nums ，其中总是存在 唯一的 一个最大整数 。
//请你找出数组中的最大元素并检查它是否 至少是数组中每个其他数字的两倍 。如果是，则返回 最大元素的下标 ，否则返回 - 1 。
//int dominantIndex(int* nums, int numsSize)
//{
//    int max = -1;
//    int little = -1;
//    int index = 0;
//    for (int i = 0; i < numsSize; i++)
//    {
//        if (nums[i] > max)
//        {
//            little = max;
//            max = nums[i];
//            index = i;
//        }
//        else if (nums[i] > little)
//            little = nums[i];
//    }
//    return max >= little * 2 ? index : -1;
//}


//给定两个数组 nums1 和 nums2 ，返回 它们的交集 。输出结果中的每个元素一定是 唯一 的。我们可以 不考虑输出结果的顺序 。
///**
// * Note: The returned array must be malloced, assume caller calls free().
// */
//int cmp(const void* a, const void* b) {                  //按升序排序
//    return (*(int*)a - *(int*)b);
//}
//
//int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
//    int* ret = (int*)malloc(sizeof(int) * nums1Size);   //结果数组
//    *returnSize = 0;
//
//    qsort(nums1, nums1Size, sizeof(nums1[0]), cmp);     //num1排序
//    qsort(nums2, nums2Size, sizeof(nums2[0]), cmp);     //num2排序
//    for (int i = 0, j = 0; i < nums1Size; i++)
//    {
//        if (i != 0 && nums1[i] == nums1[i - 1])
//            continue;
//        int left = 0;
//        int right = nums2Size - 1;
//        while (left <= right)
//        {
//            int mid = (left + right) / 2;
//            if (nums1[i] == nums2[mid])
//            {
//                ret[j++] = nums1[i];
//                (*returnSize)++;
//                break;
//            }
//            else if (nums2[mid] < nums1[i])
//                left = mid + 1;
//            else
//                right = mid - 1;
//        }
//    }
//
//    return ret;
//}