#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//#include<stdio.h>
//#include<windows.h>
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("open fail");
//		exit(-1);
//	}
//	fputs("asdfgadf", pf);//��������
//	printf("˯��10��\n");
//	Sleep(10000);//˯��10��
//	printf("ˢ�»�����\n");
//	fflush(pf);//ˢ�»�����
//	printf("˯��10��\n");
//	Sleep(10000);
//	fclose(pf);
//	pf = NULL;
//}

//���ַ����е����е��ʽ��е��š�
//˵����
//1�����ɵ��ʵ��ַ�ֻ��26����д��СдӢ����ĸ��
//2���ǹ��ɵ��ʵ��ַ�����Ϊ���ʼ������
//3��Ҫ���ź�ĵ��ʼ������һ���ո��ʾ�����ԭ�ַ��������ڵ��ʼ��ж�������ʱ������ת����Ҳֻ�������һ���ո�������
//4��ÿ�������20����ĸ��
//#include <stdio.h>
//int main()
//{
//    char c;
//    char str[100][21] = { '\0' };
//    int x = 0;
//    int y = 0;
//    while ((c = getchar()) != EOF)
//    {
//        if (c <= 'Z' && c >= 'A' || c <= 'z' && c >= 'a')
//        {
//            str[x][y++] = c;
//        }
//        else
//        {
//            x++;
//            y = 0;
//        }
//    }
//    for (int i = x - 1; i >= 0; i--)
//    {
//        printf("%s ", str[i]);
//    }
//    return 0;
//}

//����һ��������������������ַ�������ʽ�������
//���򲻿��Ǹ���������������ֺ���0����������ʽҲ����0��������Ϊ100�������Ϊ001
//#include <stdio.h>
//#include<string.h>
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    char str[1000];
//    sprintf(str, "%d", n);
//    int len = strlen(str);
//    for (int i = len - 1; i >= 0; i--)
//    {
//        printf("%c", str[i]);
//    }
//    return 0;
//}