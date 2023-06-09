#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//将浮点数转换为整数类型，要求四舍五入。
//#include<stdio.h>
//int main() {
//    float a = 0;
//    while (scanf("%f", &a) != EOF)
//    {
//        printf("%.0f", a);
//    }
//}
// 

//输入3科成绩，然后把三科成绩输出，成绩为整数形式。
//一行，3科成绩，用空格分隔，范围（0~100）。
//#include <stdio.h>
//int main() {
//    int a, b, c;
//    scanf("%d %d %d", &a, &b, &c);
//    printf("score1=%d,score2=%d,score3=%d", a, b, c);
//    return 0;
//}

//依次输入一个学生的学号，以及3科（C语言，数学，英语）成绩
//在屏幕上输出该学生的学号，3科成绩（注：输出成绩时需进行四舍五入且保留2位小数）。
//#include <stdio.h>
//int main() {
//    int a;
//    float b, c, d;
//    scanf("%d;%f,%f,%f", &a, &b, &c, &d);
//    printf("The each subject score of No. %d is %.2f, %.2f, %.2f.", a, b, c, d);
//    return 0;
//}

//输入一个人的出生日期（包括年月日），将该生日中的年、月、日分别输出。
//三行，第一行为出生年份，第二行为出生月份，第三行为出生日期。输出时如果月份或天数为1位数，需要在1位数前面补0。
//#include <stdio.h>
//int main() {
//    int a, b, c;
//    scanf("%4d%2d%2d", &a, &b, &c);
//    printf("year=%d\nmonth=%02d\ndate=%02d\n", a, b, c);
//    return 0;
//}

//输入两个整数，范围-231~231-1，交换两个数并输出。
//#include <stdio.h>
//int main() {
//    int a, b;
//    scanf("a=%d,b=%d", &a, &b);
//    a = a ^ b;
//    b = a ^ b;
//    a = a ^ b;
//    printf("a=%d,b=%d", a, b);
//    return 0;
//}

//实现字母的大小写转换。多组输入输出
//#include <stdio.h>
//int main()
//{
//    char a;
//    while (scanf("%c", &a) != EOF)
//    {
//        getchar();
//        putchar(a + 32);
//        printf("\n");
//    }
//    return 0;
//}

//实现字符串的大小写字母的转换
//#include<stdio.h>
//int main()
//{
//	char ch[20];
//	gets(ch);
//	int i = 0;
//	while (ch[i])
//	{
//		if (ch[i] >= 'A' && ch[i] <= 'Z')
//		{
//			ch[i] += 32;
//		}
//		else if (ch[i] >= 'a' && ch[i] <= 'z')
//		{
//			ch[i] -= 32;
//		}
//		i++;
//	}
//	printf("%s", ch);
//	return 0;
//}

//判断一个整数n是否是闰年
//#include <stdio.h>
//int main() {
//    int a;
//    scanf("%d", &a);
//    if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0))
//        printf("yes");
//    else
//        printf("no");
//    return 0;
//}

//从键盘任意输入一个字符，编程判断是否是字母（包括大小写）。
//#include <stdio.h>
//
//int main() {
//    char a;
//    scanf("%c", &a);
//    if (a >= 'A' && a <= 'Z' || a >= 'a' && a <= 'z')
//        printf("YES");
//    else
//        printf("NO");
//    return 0;
//}

//BMI指数（即身体质量指数）是用体重公斤数除以身高米数平方得出的数字，
//是目前国际上常用的衡量人体胖瘦程度以及是否健康的一个标准。
//例如：一个人的身高为1.75米，体重为68千克，他的BMI=68/(1.75^2)=22.2（千克/米^2）。
//当BMI指数为18.5～23.9时属正常，否则表示身体存在健康风险。编程判断人体健康情况。
//#include <stdio.h>
//#include<math.h>
//int main() {
//    float a, b;
//    scanf("%f %f", &a, &b);
//    float BMI = a / pow(b, 2);
//    if (BMI >= 18.5 && BMI <= 23.9)
//        printf("Normal");
//    else
//        printf("Abnormal");
//    return 0;
//}