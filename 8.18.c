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


//Lily�Ͽ�ʱʹ����ĸ����ͼƬ��С������ѧϰӢ�ﵥ�ʣ�ÿ�ζ���Ҫ����ЩͼƬ���մ�С��ASCII��ֵ��С���������պá����Ҹ�Lily��æ��ͨ����������
//Lilyʹ�õ�ͼƬʹ���ַ�"A"��"Z"��"a"��"z"��"0"��"9"��ʾ��
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


//�������0�±괦��ʼ������±�ͳ�ƣ����㵱ǰ�±����֮�ͣ����ұ�֮�ͣ������жϣ������Ϊ�����±꣬��
//������ѭ��������û���ҵ������±꣬�򷵻� - 1����ʾû�������±ꡣ
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