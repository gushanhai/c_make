#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//����һ���������� nums ���������Ǵ��� Ψһ�� һ��������� ��
//�����ҳ������е����Ԫ�ز�������Ƿ� ������������ÿ���������ֵ����� ������ǣ��򷵻� ���Ԫ�ص��±� �����򷵻� - 1 ��
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


//������������ nums1 �� nums2 ������ ���ǵĽ��� ���������е�ÿ��Ԫ��һ���� Ψһ �ġ����ǿ��� ��������������˳�� ��
///**
// * Note: The returned array must be malloced, assume caller calls free().
// */
//int cmp(const void* a, const void* b) {                  //����������
//    return (*(int*)a - *(int*)b);
//}
//
//int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
//    int* ret = (int*)malloc(sizeof(int) * nums1Size);   //�������
//    *returnSize = 0;
//
//    qsort(nums1, nums1Size, sizeof(nums1[0]), cmp);     //num1����
//    qsort(nums2, nums2Size, sizeof(nums2[0]), cmp);     //num2����
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