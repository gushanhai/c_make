#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//���������� �ǵݼ�˳�� ���е��������� nums1 �� nums2�������������� m �� n ���ֱ��ʾ nums1 �� nums2 �е�Ԫ����Ŀ��
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

//����һ�� �������� ������ nums ������ ԭ�� ɾ���ظ����ֵ�Ԫ�أ�ʹÿ��Ԫ�� ֻ����һ�� ������ɾ����������³��ȡ�Ԫ�ص� ���˳�� Ӧ�ñ��� һ�� ��Ȼ�󷵻� nums ��ΨһԪ�صĸ�����
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

//����һ������ nums ��һ��ֵ val������Ҫ ԭ�� �Ƴ�������ֵ���� val ��Ԫ�أ��������Ƴ���������³��ȡ�
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
