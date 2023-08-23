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
//	fputs("asdfgadf", pf);//输入数据
//	printf("睡眠10秒\n");
//	Sleep(10000);//睡眠10秒
//	printf("刷新缓冲区\n");
//	fflush(pf);//刷新缓冲区
//	printf("睡眠10秒\n");
//	Sleep(10000);
//	fclose(pf);
//	pf = NULL;
//}

//对字符串中的所有单词进行倒排。
//说明：
//1、构成单词的字符只有26个大写或小写英文字母；
//2、非构成单词的字符均视为单词间隔符；
//3、要求倒排后的单词间隔符以一个空格表示；如果原字符串中相邻单词间有多个间隔符时，倒排转换后也只允许出现一个空格间隔符；
//4、每个单词最长20个字母；
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

//输入一个整数，将这个整数以字符串的形式逆序输出
//程序不考虑负数的情况，若数字含有0，则逆序形式也含有0，如输入为100，则输出为001
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