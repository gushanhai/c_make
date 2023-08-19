#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//给定一个大小为 n 的数组 nums ，返回其中的多数元素。多数元素是指在数组中出现次数 大于 [ n / 2 ] 的元素。
//你可以假设数组是非空的，并且给定的数组总是存在多数元素。
//int cmp(const void* a, const void* b)
//{
//    return *((int*)a) - *((int*)b);
//}
//int majorityElement(int* nums, int numsSize)
//{
//    qsort(nums, numsSize, sizeof(int), cmp);
//    return nums[numsSize / 2];
//}

//编写一个函数，计算字符串中含有的不同字符的个数。字符在 ASCII 码范围内(0~127 ，包括 0 和 127)，换行表示结束符，不算在字符里。不在范围内的不作统计。多个相同的字符只计算一次
//例如，对于字符串 abaca 而言，有 a、b、c 三种不同的字符，因此输出 3 。
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