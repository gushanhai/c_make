#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//#include<stdio.h>
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//
//	c = Add(a, b);
//	printf("%d", c);
//	return 0;
//}

//牛牛的一周有七天，从周一到周日对应的英文是
//1、星期一：Monday
//2、星期二：Tuesday
//3、星期三：Wednesday
//4、星期四：Thursday
//5、星期五：Friday
//6、星期六：Saturday
//7、星期日：Sunday
//牛牛知道今天是星期几，请输出这天的英文
//#include <stdio.h>
//int main()
//{
//    int a;
//    scanf("%d", &a);
//    switch (a)
//    {
//    case 1:
//        printf("Monday");
//        break;
//    case 2:
//        printf("Tuesday");
//        break;
//    case 3:
//        printf("Wednesday");
//        break;
//    case 4:
//        printf("Thursday");
//        break;
//    case 5:
//        printf("Friday");
//        break;
//    case 6:
//        printf("Saturday");
//        break;
//    case 7:
//        printf("Sunday");
//        break;
//    }
//    return 0;
//}


//KiKi访问网站，得到HTTP状态码，但他不知道什么含义，BoBo老师告诉他常见HTTP状态码：
//200（OK，请求已成功），202（Accepted，服务器已接受请求，但尚未处理。）
//400（Bad Request，请求参数有误），403（Forbidden，被禁止），
//404（Not Found，请求失败），500（Internal Server Error，服务器内部错误），502（Bad Gateway，错误网关）。
//#include <stdio.h>
//int main()
//{
//    int Http;
//    while (scanf("%d", &Http) != EOF)
//    {
//        switch (Http)
//        {
//        case 200:
//            printf("OK\n");
//            break;
//        case 202:
//            printf("Accepted\n");
//            break;
//        case 400:
//            printf("Bad Request\n");
//            break;
//        case 403:
//            printf("Forbidden\n");
//            break;
//        case 404:
//            printf("Not Found\n");
//            break;
//        case 500:
//            printf("Internal Server Error\n");
//            break;
//        case 502:
//            printf("Bad Gateway\n");
//            break;
//        }
//    }
//    return 0;
//}

//KiKi最近学习了信号与系统课程，这门课里有一个非常有趣的函数，单位阶跃函数，其中一种定义方式为：
// t>0输出1,t=0输出0.5,t<0输出0
//#include <stdio.h>
//int main()
//{
//    int t;
//    while (scanf("%d", &t) != EOF)
//    {
//        if (t > 0)
//            printf("1\n");
//        else if (t == 0)
//            printf("0.5\n");
//        else
//            printf("0\n");
//    }
//    return 0;
//}


//牛牛有一个学习计划，他计划在 y 年 m 月 d 日开始学习，但在之前他是绝不会开始学习的，
//但是他一旦开始学习就不会停下来，请你判断 y1 年 m1 月 d1 日牛牛应该学习吗。
//#include <stdio.h>
//int main()
//{
//    int year, month, day, year1, month1, day1;
//    scanf("%d %d %d\n %d %d %d", &year, &month, &day, &year1, &month1, &day1);
//    if (year <= year1 && month <= month1 && day <= day1)
//        printf("yes");
//    else if (year < year1)
//        printf("yes");
//    else
//        printf("no");
//    return 0;
//}

//从键盘输入a, b, c的值，编程计算并输出一元二次方程ax2 + bx + c = 0的根，
//当a = 0时，输出“Not quadratic equation”，当a ≠ 0时，
//根据△ = b2 - 4 * a * c的三种情况计算并输出方程的根。
//#include<stdio.h>
//#include <math.h>
//int main()
//{
//    float a = 0.0;
//    float b = 0.0;
//    float c = 0.0;
//    while (scanf("%f %f %f", &a, &b, &c) == 3)
//    {
//        if (a == 0)
//        {
//            printf("Not quadratic equation\n");
//        }
//        else
//        {
//            float deta = b * b - 4 * a * c;
//            if (deta >= 0)
//            {
//                float result1 = (-b + sqrt(deta)) / (2 * a);
//                float result2 = (-b - sqrt(deta)) / (2 * a);
//                if (deta > 0)
//                {
//                    printf("x1=%.2f;x2=%.2f\n", result2, result1);
//                }
//                else
//                {
//                    if (result1 == 0)
//                    {
//                        printf("x1=x2=0.00\n");
//                    }
//                    else
//                    {
//                        printf("x1=x2=%.2f\n", result1);
//                    }
//                }
//            }
//            else
//            {
//                float shibu = (-b) / (2.0 * a);
//                float xubu = (sqrt(-deta)) / (2.0 * a);
//                if (xubu < 0)
//                {
//                    xubu = -xubu;
//                    printf("x1=%.2f-%.2fi;x2=%.2f+%.2fi\n", shibu, xubu, shibu, xubu);
//                }
//                else
//                {
//                    printf("x1=%.2f-%.2fi;x2=%.2f+%.2fi\n", shibu, xubu, shibu, xubu);
//                }
//            }
//        }
//    }
//    return 0;
//}


//小乐乐的班级进行了一次期中考试，考试一共有3门科目：数学，语文，英语，
//小乐乐的班主任决定给没有通过考核的同学家长开一次家长会，
//考核的标准是三科平均分不低于60分，所以现在想请你帮忙算一算小乐乐会不会被叫家长。
//#include <stdio.h>
//int main()
//{
//    int a, b, c;
//    scanf("%d %d %d", &a, &b, &c);
//    if (((a + b + c) / 3) >= 60)
//    {
//        printf("NO");
//    }
//    else {
//        printf("YES");
//    }
//    return 0;
//}