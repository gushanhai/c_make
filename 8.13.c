#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
#include<stdio.h>
//���� s ������ 1 �� n �����������ҵ��ǣ���Ϊ���ݴ��󣬵��¼�������ĳһ�����ָ����˳��˼������������һ�����ֵ�ֵ�����¼��� ��ʧ��һ������ ���� ��һ�������ظ� ��
//����һ������ nums �����˼��� S ���������Ľ����
//�����ҳ��ظ����ֵ����������ҵ���ʧ�����������������������ʽ���ء�
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
 

//С��ͬѧ���������һ����վ�����û�ע���˻���ʱ����Ҫ�����˻������룬Ϊ�˼�ǿ�˻��İ�ȫ�ԣ�С��������ǿ����һ��Ҫ��
//1. ����ֻ���ɴ�д��ĸ��Сд��ĸ�����ֹ��ɣ�
//2. ���벻�������ֿ�ͷ
//3. ���������ٳ��ִ�д��ĸ��Сд��ĸ�������������ַ������е����֣�
//4. ���볤������Ϊ8
//����С���ܵ���n�����룬��������д�����ж���Щ��������Щ�Ǻ��ʵģ���Щ�ǲ��Ϸ��ġ�
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
//        if (length < 8 || length>100)//�ж��ַ��������Ƿ����
//        {
//            printf("NO\n");
//            continue;
//        }
//        if (isdigit(*tmp))//���ַ��Ƿ�Ϊ����
//        {
//            printf("NO\n");
//            continue;
//        }
//        while (*tmp)//�����ַ���
//        {
//            if (isdigit(*tmp))//�ַ��������ֵĸ���
//                type_num++;
//            else if (isupper(*tmp))//��д��ĸ�ĸ���
//                type_upper++;
//            else if (islower(*tmp))//Сд��ĸ�ĸ���
//                type_lower++;
//            else//������������ֹ���
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