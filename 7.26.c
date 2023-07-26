#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//给你两个按 非递减顺序 排列的整数数组 nums1 和 nums2，另有两个整数 m 和 n ，分别表示 nums1 和 nums2 中的元素数目。
//void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n)
//{
//    int end = m + n - 1;
//    int src1 = m - 1;
//    int src2 = n - 1;
//    while (src1 >= 0 && src2 >= 0)
//    {
//        if (nums1[src1] < nums2[src2])
//            nums1[end--] = nums2[src2--];
//        else
//        {
//            nums1[end--] = nums1[src1--];
//        }
//    }
//    while (src2 >= 0)
//    {
//        nums1[end--] = nums2[src2--];
//    }
//} 

//给你一个 升序排列 的数组 nums ，请你 原地 删除重复出现的元素，使每个元素 只出现一次 ，返回删除后数组的新长度。元素的 相对顺序 应该保持 一致 。然后返回 nums 中唯一元素的个数。
//int removeDuplicates(int* nums, int numsSize)
//{
//    int end = 1;
//    int str = 1;
//    while (str < numsSize)
//    {
//        if (nums[str] != nums[str - 1])
//        {
//            nums[end++] = nums[str];
//        }
//        str++;
//    }
//    return end;
//}

//给你一个数组 nums 和一个值 val，你需要 原地 移除所有数值等于 val 的元素，并返回移除后数组的新长度。
//int removeElement(int* nums, int numsSize, int val)
//{
//    int end = 0;
//    int str = 0;
//    while (str < numsSize)
//    {
//        if (nums[str] != val)
//        {
//            nums[end++] = nums[str];
//        }
//        str++;
//    }
//    return end;
//}
