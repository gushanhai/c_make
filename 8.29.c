#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//��һ������Ϊ n ������ nums ����������ֶ��� 0��n - 1 �ķ�Χ�ڡ�
// ������ĳЩ�������ظ��ģ�����֪���м��������ظ��ˣ�Ҳ��֪��ÿ�������ظ��˼��Ρ����ҳ�����������һ���ظ������֡�
//��һ�ַ�����
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

//�ڶ��ַ�����
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

//��һ�� n* m �Ķ�ά�����У�ÿһ�ж����մ����� �ǵݼ� ��˳������ÿһ�ж����մ��ϵ��� �ǵݼ� ��˳�����������һ����Ч�ĺ���������������һ����ά�����һ���������ж��������Ƿ��и�������
//��һ�ַ�����

/*
 * ���� **matrix �ǳ���Ϊ matrixSize ������ָ������飬����ÿ��Ԫ�أ�Ҳ��һ�����飩
 * �ĳ������ *matrixColSize ������Ϊ��һ���룬*matrixColSize ����ĳ���ҲΪ matrixSize
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

//�ڶ��ַ���:
/*
 * ���� **matrix �ǳ���Ϊ matrixSize ������ָ������飬����ÿ��Ԫ�أ�Ҳ��һ�����飩
 * �ĳ������ *matrixColSize ������Ϊ��һ���룬*matrixColSize ����ĳ���ҲΪ matrixSize
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