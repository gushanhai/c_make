#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//����һ���� n ������������ nums ������ nums[i] ������[1, n] �ڡ������ҳ�������[1, n] ��Χ�ڵ�û�г����� nums �е����֣������������ʽ���ؽ����
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

//дһ������������������֮�ͣ�Ҫ���ں������ڲ���ʹ�� + �� - �� * �� / ����������š�
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