#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)	
//��дһ�������������ַ��������е������ǰ׺��
//��������ڹ���ǰ׺�����ؿ��ַ��� ""��
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

//����һ�����������һ��Ŀ��ֵ�����������ҵ�Ŀ��ֵ�������������������Ŀ��ֵ�������������У����������ᱻ��˳������λ�á�
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
