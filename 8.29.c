#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//在一个长度为 n 的数组 nums 里的所有数字都在 0～n - 1 的范围内。
// 数组中某些数字是重复的，但不知道有几个数字重复了，也不知道每个数字重复了几次。请找出数组中任意一个重复的数字。
//第一种方法：
//int findRepeatNumber(int* nums, int numsSize)
//{
//    for (int i = 0; i < numsSize; i++)
//    {
//        int arr[numsSize];
//        memset(arr, 0, numsSize * 4);
//        for (int i = 0; i < numsSize; i++)
//        {
//            arr[nums[i]]++;
//            if (arr[i] >= 2)
//                return i;
//        }
//    }
//    return -1;
//}

//第二种方法：
//int findRepeatNumber(int* nums, int numsSize)
//{
//    for (int i = 0; i < numsSize; i++)
//    {
//        for (int i = 0; i < numsSize; i++)
//        {
//            for (int j = i + 1; j < numsSize; j++)
//            {
//                if (nums[i] == nums[j])
//                    return nums[i];
//            }
//        }
//    }
//    return 0;
//}

//在一个 n* m 的二维数组中，每一行都按照从左到右 非递减 的顺序排序，每一列都按照从上到下 非递减 的顺序排序。请完成一个高效的函数，输入这样的一个二维数组和一个整数，判断数组中是否含有该整数。
//第一种方法：

/*
 * 输入 **matrix 是长度为 matrixSize 的数组指针的数组，其中每个元素（也是一个数组）
 * 的长度组成 *matrixColSize 数组作为另一输入，*matrixColSize 数组的长度也为 matrixSize
 */
//bool findNumberIn2DArray(int** matrix, int matrixSize, int* matrixColSize, int target)
//{
//    for (int i = 0; i < matrixSize; i++)
//    {
//        for (int j = 0; j < *matrixColSize; j++)
//        {
//            if (matrix[i][j] == target)
//                return true;
//        }
//    }
//    return false;
//}

//第二种方法:
/*
 * 输入 **matrix 是长度为 matrixSize 的数组指针的数组，其中每个元素（也是一个数组）
 * 的长度组成 *matrixColSize 数组作为另一输入，*matrixColSize 数组的长度也为 matrixSize
 */
//bool is_t(int* arr, int sz, int num)
//{
//    int left = 0;
//    int right = sz - 1;
//    while (left <= right)
//    {
//        int mid = (left + right) / 2;
//        if (arr[mid] < num)
//            left = mid + 1;
//        else if (arr[mid] > num)
//            right = mid - 1;
//        else
//            return true;
//    }
//    return false;
//}
//bool findNumberIn2DArray(int** matrix, int matrixSize, int* matrixColSize, int target)
//{
//    for (int i = 0; i < matrixSize; i++)
//    {
//        if (is_t(*(matrix + i), *matrixColSize, target))
//            return true;
//    }
//    return false;
//}