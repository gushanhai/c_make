#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)	
//����һ���ַ��� columnTitle ����ʾ Excel ����е������ơ����� �������ƶ�Ӧ������� ��
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

//����һ���������� nums �������һֵ�������г��� �������� ������ true �����������ÿ��Ԫ�ػ�����ͬ������ false ��
//����1��
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

//����2��
