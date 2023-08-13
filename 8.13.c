#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
#include<stdio.h>
//集合 s 包含从 1 到 n 的整数。不幸的是，因为数据错误，导致集合里面某一个数字复制了成了集合里面的另外一个数字的值，导致集合 丢失了一个数字 并且 有一个数字重复 。
//给定一个数组 nums 代表了集合 S 发生错误后的结果。
//请你找出重复出现的整数，再找到丢失的整数，将它们以数组的形式返回。
//int cmp(int* a, int* b)
//{
//    return *a - *b;
//}
///**
// * Note: The returned array must be malloced, assume caller calls free().
// */
//int* findErrorNums(int* nums, int numsSize, int* returnSize)
//{
//    *returnSize = 2;
//    int* ret = (int*)malloc(sizeof(int) * 2);
//    qsort(nums, numsSize, sizeof(int), cmp);
//    int miss = 0;
//    for (int i = 0; i < numsSize; i++)
//    {
//        int repeat = nums[i];
//        if (repeat == miss)
//            ret[0] = miss;
//        else if (repeat - miss > 1)
//            ret[1] = miss + 1;
//        miss = repeat;
//    }
//    if (nums[numsSize - 1] != numsSize)
//        ret[1] = numsSize;
//    return ret;
//}
 

//小明同学最近开发了一个网站，在用户注册账户的时候，需要设置账户的密码，为了加强账户的安全性，小明对密码强度有一定要求：
//1. 密码只能由大写字母，小写字母，数字构成；
//2. 密码不能以数字开头
//3. 密码中至少出现大写字母，小写字母和数字这三种字符类型中的两种；
//4. 密码长度至少为8
//现在小明受到了n个密码，他想请你写程序判断这些密码中哪些是合适的，哪些是不合法的。
//#include <ctype.h>
//#include <stdio.h>
//#include<string.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    while (n--)
//    {
//        int type_num = 0;
//        int type_upper = 0;
//        int type_lower = 0;
//        int other = 0;
//        char str[101] = { 0 };
//        scanf("%s", str);
//        char* tmp = str;
//        int length = strlen(str);
//        if (length < 8 || length>100)//判断字符串长度是否符合
//        {
//            printf("NO\n");
//            continue;
//        }
//        if (isdigit(*tmp))//首字符是否为数字
//        {
//            printf("NO\n");
//            continue;
//        }
//        while (*tmp)//遍历字符串
//        {
//            if (isdigit(*tmp))//字符串中数字的个数
//                type_num++;
//            else if (isupper(*tmp))//大写字母的个数
//                type_upper++;
//            else if (islower(*tmp))//小写字母的个数
//                type_lower++;
//            else//如果不是这三种构成
//                other++;
//            tmp++;
//        }
//        if (other > 0)
//            printf("NO\n");
//        if (type_lower + type_num + type_upper > 2)
//            printf("YES\n");
//    }
//    return 0;
//}