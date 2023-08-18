#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//#include<stdio.h>
//int main()
//{
//	FILE* pf = fopen("data.txt", "rb");
//	if (pf == NULL)
//	{
//		perror("open fail");
//		exit(-1);
//	}
//	int a = fgetc(pf);
//	printf("%c\n", a);
//	a = fgetc(pf);
//	printf("%c\n", a);
//	a = fgetc(pf);
//	printf("%c\n", a);
//	int b = ftell(pf);
//	printf("%d\n", b);
//	rewind(pf);
//	b = ftell(pf);
//	printf("%d\n", b);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int x = 10000;
//	FILE* pf = fopen("data.txt", "rb");
//	//fwrite(&x, sizeof(x), 1, pf);
//	int a = fgetc(pf);
//	printf("%d", a);
//	fclose(pf);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int num = 10000;
//	FILE* pf = fopen("data.txt", "w");
//	fprintf(pf,"%d",num);
//	fclose(pf);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a;
//	FILE* pf = fopen("data.txt", "r");
//	fscanf(pf, "%d", &a);
//	printf("%d", a);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	FILE* pf = fopen("data.txt", "r");
//	int a = fgetc(pf);
//	printf("%c\n", a);
//	a = fgetc(pf);
//	printf("%c\n", a);
//	a = fgetc(pf);
//	printf("%c\n", a);
//	a = fgetc(pf);
//	printf("%c\n", a);
//	a = fgetc(pf);
//	printf("%c\n", a);
//	fclose(pf);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	FILE* pf = fopen("data.txt", "rb");
//	int x = 0;
//	fread(&x, 4, 1, pf);
//	printf("%d", x);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//Lily上课时使用字母数字图片教小朋友们学习英语单词，每次都需要把这些图片按照大小（ASCII码值从小到大）排列收好。请大家给Lily帮忙，通过代码解决。
//Lily使用的图片使用字符"A"到"Z"、"a"到"z"、"0"到"9"表示。
//#include <stdio.h>
//#include<string.h>
//#include<stdlib.h>
//int cmp(const void* a, const void* b)
//{
//    return *((char*)a) - *((char*)b);
//}
//int main()
//{
//    char str[1000];
//    scanf("%s", str);
//    qsort(str, strlen(str), sizeof(char), cmp);
//    printf("%s", str);
//    return 0;
//}


//从数组的0下标处开始向后逐下标统计，计算当前下标左边之和，和右边之和，进行判断，相等则为中心下标，如
//果数组循环结束都没有找到中心下标，则返回 - 1，表示没有中心下标。
//int pivotIndex(int* nums, int numsSize) {
//    int sum = 0;
//    for (int i = 0; i < numsSize; i++)
//    {
//        sum += nums[i];
//    }
//    int left = 0;
//    for (int i = 0; i < numsSize; i++)
//    {
//        if (2 * left + nums[i] == sum)
//            return i;
//        left += nums[i];
//    }
//    return -1;
//}