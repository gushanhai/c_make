#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//给你一个含 n 个整数的数组 nums ，其中 nums[i] 在区间[1, n] 内。请你找出所有在[1, n] 范围内但没有出现在 nums 中的数字，并以数组的形式返回结果。
//int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize)
//{
//    int* ret = (int*)malloc(4 * (numsSize + 1));
//    for (int i = 0; i < numsSize; i++)
//    {
//        ret[nums[i]] = 1;
//    }
//    *returnSize = 0;
//    for (int i = 1; i <= numsSize; i++)
//    {
//        if (ret[i] != 1)
//        {
//            ret[(*returnSize)++] = i;
//        }
//    }
//    return ret;
//}

//写一个函数，求两个整数之和，要求在函数体内不得使用 + 、 - 、 * 、 / 四则运算符号。
//int Add(int num1, int num2)
//{
//    while (num2)
//    {
//        int t = (num1 & num2) << 1;
//        num1 ^= num2;
//        num2 = t;
//    }
//    return num1;
//}