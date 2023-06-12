#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//每一本正式出版的图书都有一个ISBN号码与之对应，ISBN码包括9位数字、1位识别码和3位分隔符，
//其规定格式如“x - xxx - xxxxx - x”，其中符号“ - ”是分隔符（键盘上的减号），
//最后一位是识别码，例如0 - 670 - 82162 - 4就是一个标准的ISBN码。
//ISBN码的首位数字表示书籍的出版语言，例如0代表英语；第一个分隔符“ - ”之后的三位数字代表出版社，
//例如670代表维京出版社；第二个分隔之后的五位数字代表该书在出版社的编号；最后一位为识别码。
//识别码的计算方法如下：
//首位数字乘以1加上次位数字乘以2……以此类推，用所得的结果mod 11，所得的余数即为识别码，
//如果余数为10，则识别码为大写字母X。例如ISBN号码0 - 670 - 82162 - 4中的识别码4是这样得到的：对067082162这9个数字，
//从左至右，分别乘以1，2，…，9，再求和，即0×1 + 6×2 + …… + 2×9 = 158，然后取158 mod 11的结果4作为识别码。
//你的任务是编写程序判断输入的ISBN号码中识别码是否正确，如果正确，则仅输出“Right”；如果错误，则输出你认为是正确的ISBN号码。
//#include<stdio.h>
//int main()
//{
//    char arr[13];
//    int i, j;
//    scanf("%s", arr);
//    int s = 0;
//    for (i = 0, j = 1; i < 11; i++)
//    {
//        if (arr[i] != '-')
//        {
//            s += (arr[i] - '0') * j;
//            //arr[i]-'0'是因为我们使用字符类型保存的整型，
//            //将一个字符类型的数字（例如’5’）转换成对应的整型数值（例如5）。'0’的ASCII码值是48，
//            //因此将字符数字减去’0’的ASCII码值，就可以得到相应的整型数值。比如’5’减去’0’就等于5。
//            j++;
//        }
//    }
//    int m = s % 11;
//    if (m == arr[12] - '0' || (m == 10 && arr[12] == 'X'))
//    {
//        printf("Right\n");
//    }
//    else
//    {
//        if (m == 10)
//        {
//            for (i = 0; i < 12; i++)
//            {
//                printf("%c", arr[i]);
//            }
//            printf("X");
//        }
//        else
//        {
//            for (i = 0; i < 12; i++)
//            {
//                printf("%c", arr[i]);
//            }
//            printf("%d", m);
//        }
//    }
//    return 0;
//}


//KiKi实现一个简单计算器，实现两个数的“加减乘除”运算，用户从键盘输入算式“操作数1运算符操作数2”，
//计算并输出表达式的值，如果输入的运算符号不包括在（ + 、 - 、 * 、 / ）范围内，输出“Invalid operation!”。
//当运算符为除法运算，即“ / ”时。如果操作数2等于0.0，则输出“Wrong!Division by zero!”
//#include <stdio.h>
//int main()
//{
//    double a, b;
//    char x;
//    scanf("%lf %c %lf", &a, &x, &b);
//    if (x == '+' || x == '-' || x == '*' || x == '/')
//    {
//        if (x == '+')
//            printf("%.4lf%c%.4lf=%.4lf", a, x, b, a + b);
//        else if (x == '-')
//            printf("%.4lf%c%.4lf=%.4lf", a, x, b, a - b);
//        else if (x == '*')
//            printf("%.4lf%c%.4lf=%.4lf", a, x, b, a * b);
//        else
//        {
//            if (b == 0.0)
//                printf("Wrong!Division by zero!");
//            else
//                printf("%.4lf%c%.4lf=%.4lf", a, x, b, a / b);
//        }
//    }
//    else
//        printf("Invalid operation!");
//    return 0;
//}

//2020年来到了，KiKi要对他的n位好朋友说n遍”Happy new year!Good luck!”的祝福语
//#include <stdio.h>
//int main()
//{
//    int a;
//    scanf("%d", &a);
//    for (int x = 0; x < a; x++)
//    {
//        printf("Happy new year!Good luck!\n");
//    }
//    return 0;
//}

//任意输入一个正整数N，统计1~N之间奇数的个数和偶数的个数，并输出。
//#include <stdio.h>
//int main()
//{
//    int N;
//    int count = 0;
//    scanf("%d", &N);
//    for (int i = 1; i <= N; i++)
//    {
//        if (i % 2 == 0)
//        {
//            count++;
//        }
//    }
//    printf("%d %d", N - count, count);
//    return 0;
//}

//KiKi知道了什么是质数（只能被1和他自身整除的数），他现在想知道所有三位整数中，有多少个质数。
//#include <stdio.h>
//int main()
//{
//    int a = 100;
//    int count = 0;
//    int i;
//    for (a = 100; a < 1000; a++)
//    {
//        for (i = 2; i < a; i++)
//        {
//            if (a % i == 0)
//            {
//                break;
//            }
//        }
//        if (i == a)
//        {
//            count++;
//        }
//    }
//    printf("%d", count);
//    return 0;
//}

//输出九九乘法表，输出格式见样例。
//#include <stdio.h>
//int main()
//{
//    int a, i, k;
//    scanf("%d", &a);
//    for (i = 1; i <= a; i++)
//    {
//        for (k = 1; k <= i; k++)
//        {
//            printf("%d * %d =%2d ", k, i, i * k);
//        }
//        printf("\n");
//    }
//    return 0;
//}

//牛牛开始学习数列啦
//现在他想知道1 - 2 + 3 - 4... + n的值
//#include <stdio.h>
//int main()
//{
//    int a;
//    scanf("%d", &a);
//    int count1 = 0, count2 = 0;
//    for (int i = 1; i <= a; i++)
//    {
//        if (i % 2 == 0)
//        {
//            count1 += i;
//        }
//        else
//        {
//            count2 += i;
//        }
//    }
//    printf("%d", count2 - count1);
//    return 0;
//}

//这次牛牛又换了个数列，他想计算：1 + 1 / 2 + 1 / 3 + … + 1 / N的值。(保留6位小数)
//#include <stdio.h>
//int main()
//{
//    int a;
//    scanf("%d", &a);
//    double count = 0;
//    for (int i = 1; i <= a; i++)
//    {
//        count += 1.0 / i;
//    }
//    printf("%.6lf\n", count);
//    return 0;
//}

//牛牛准备继续进阶，计算更难的数列
//输入一个整数n, 计算 1 + 1 / （1 - 3） + 1 / （1 - 3 + 5） + ... + 1 / (1 - 3 + 5 - ...((-1) ^ (n - 1)) * (2n - 1))的值
//#include <stdio.h>
//int main()
//{
//    int a;
//    scanf("%d", &a);
//    float count = 0;
//    int c = 0;
//    int b = 1;
//    for (int i = 1; i <= a; i++)
//    {
//        c += b * (2 * i - 1);
//        count += 1.0 / c;
//        b = -b;
//    }
//    printf("%.3lf", count);
//    return 0;
//}

//帮助牛牛计算 1 + （1 + 2） + （1 + 2 + 3） + ... + (1 + 2 + 3 + ... + n)
// 1.
//#include <stdio.h>
//int main()
//{
//    int a;
//    scanf("%d", &a);
//    int count = 0;
//    for (int i = 1; i <= a; i++)
//    {
//        for (int j = 1; j <= i; j++)
//        {
//            count += j;
//        }
//    }
//    printf("%d", count);
//    return 0;
//}
//2.
//#include <stdio.h>
//int main()
//{
//    int a;
//    scanf("%d", &a);
//    int count = 0, count1 = 0;
//    for (int i = 1; i <= a; i++)
//    {
//        count += i;
//        count1 += count;
//    }
//    printf("%d", count1);
//    return 0;
//}