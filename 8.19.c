#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//����һ����СΪ n ������ nums ���������еĶ���Ԫ�ء�����Ԫ����ָ�������г��ִ��� ���� [ n / 2 ] ��Ԫ�ء�
//����Լ��������Ƿǿյģ����Ҹ������������Ǵ��ڶ���Ԫ�ء�
//int cmp(const void* a, const void* b)
//{
//    return *((int*)a) - *((int*)b);
//}
//int majorityElement(int* nums, int numsSize)
//{
//    qsort(nums, numsSize, sizeof(int), cmp);
//    return nums[numsSize / 2];
//}

//��дһ�������������ַ����к��еĲ�ͬ�ַ��ĸ������ַ��� ASCII �뷶Χ��(0~127 ������ 0 �� 127)�����б�ʾ���������������ַ�����ڷ�Χ�ڵĲ���ͳ�ơ������ͬ���ַ�ֻ����һ��
//���磬�����ַ��� abaca ���ԣ��� a��b��c ���ֲ�ͬ���ַ��������� 3 ��
//#include <stdio.h>
//#include<string.h>
//#include<stdlib.h>
//int main()
//{
//    char str[500] = { 0 };
//    char tmp[128] = { 0 };
//    gets(str);
//    int count = 0;
//    int len = strlen(str);
//    for (int i = 0; i < len; i++)
//    {
//        if (tmp[str[i]] == 0)
//        {
//            count++;
//            tmp[str[i]] = 1;
//        }
//    }
//    printf("%d", count);
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//	FILE* pf = fopen("data.txt", "w");
//	if (pf == NULL)
//	{
//		perror("open fail");
//		exit(-1);
//	}
//	int a = 10000;
//	char buffer[20];
//	sprintf(buffer, &a);
//	fputs(buffer, pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}