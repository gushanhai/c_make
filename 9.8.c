#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)	
//给你一个字符串 columnTitle ，表示 Excel 表格中的列名称。返回 该列名称对应的列序号 。
//int titleToNumber(char* columnTitle) {
//    int len = strlen(columnTitle);
//    int ret = 0;
//
//    for (int i = 0; i < len; i++) {
//        ret *= 26;
//        ret += columnTitle[i] - 'A' + 1;
//    }
//
//    return ret;
//}

//给你一个整数数组 nums 。如果任一值在数组中出现 至少两次 ，返回 true ；如果数组中每个元素互不相同，返回 false 。
//方法1：
//int cmp(const void* a, const void* b)
//{
//    return *((int*)a) - *((int*)b);
//}
//bool containsDuplicate(int* nums, int numsSize)
//{
//    qsort(nums, numsSize, sizeof(int), cmp);
//    for (int i = 1; i < numsSize; i++)
//    {
//        if (nums[i] == nums[i - 1])
//            return true;
//    }
//    return false;
//}

//方法2：
