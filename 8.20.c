#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//#include<stdio.h>
//#define size 5
//int main()
//{
//	FILE* pf = fopen("data.txt", "wb");
//	if (pf == NULL)
//	{
//		perror("open fail");
//		exit(-1);
//	}
//	int arr[size] = { 1,2,3,4,5 };
//	fwrite(arr, sizeof(*arr), size, pf);
//	fclose(pf);
//	pf = fopen("data.txt", "rb");
//	int arr2[size] = { 0 };
//	size_t ret_code = fread(arr2, sizeof(*arr2), size, pf);
//	if (ret_code == size) {
//		puts("Array read successfully, contents: ");
//		for (int n = 0; n < size; ++n) printf("%d ", arr2[n]);
//		putchar('\n');
//	}
//	else { // error handling
//		if (feof(pf))
//			printf("Error reading test.bin: unexpected end of file\n");
//		else if (ferror(pf)) {
//			perror("Error reading test.bin");
//		}
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//给定两个整数 left 和 right ，返回一个列表，列表的元素是范围[left, right] 内所有的 自除数 。
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

//bool is(int num)
//{
//    int tmp = num;
//    while (tmp > 0)
//    {
//        int ttmp = tmp % 10;
//        if (ttmp == 0 || num % ttmp != 0)
//            return false;
//        tmp /= 10;
//    }
//    return true;
//}
//int* selfDividingNumbers(int left, int right, int* returnSize)
//{
//    *returnSize = 0;
//    int* arr = (int*)malloc((left + right + 1) * sizeof(int));
//    for (int i = left; i <= right; i++)
//    {
//        if (is(i))
//        {
//            arr[(*returnSize)++] = i;
//        }
//    }
//    return arr;
//}


//给你一个整数数组 nums，返回 数组 answer ，其中 answer[i] 等于 nums 中除 nums[i] 之外其余各元素的乘积 。
//第一种方法：
//**
//* Note: The returned array must be malloced, assume caller calls free().
//* /
//int* productExceptSelf(int* nums, int numsSize, int* returnSize)
//{
//    *returnSize = 0;
//    int* ret = (int*)malloc(4 * numsSize);
//    int left[numsSize];
//    int right[numsSize];
//    left[0] = 1;
//    for (int i = 1; i < numsSize; i++)
//    {
//        left[i] = left[i - 1] * nums[i - 1];
//    }
//    right[numsSize - 1] = 1;
//    int sum = 1;
//    for (int i = numsSize - 2; i >= 0; i--)
//    {
//        right[i] = right[i + 1] * nums[i + 1];
//    }
//    for (int i = 0; i < numsSize; i++)
//    {
//        ret[(*returnSize)++] = left[i] * right[i];
//    }
//    return ret;
//}
 
//第二种方法：
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
//int* productExceptSelf(int* nums, int numsSize, int* returnSize)
//{
//    *returnSize = numsSize;
//    int* ret = (int*)malloc(4 * numsSize);
//
//    ret[0] = 1;
//    for (int i = 1; i < numsSize; i++)
//    {
//        ret[i] = ret[i - 1] * nums[i - 1];//计算前缀和并且存入返回数组中
//    }
//    int sum = 1;
//    for (int i = numsSize - 1; i >= 0; i--)
//    {
//        ret[i] = ret[i] * sum;//除自身外数组的乘机
//        sum *= nums[i];//后缀和
//    }
//    return ret;
//}