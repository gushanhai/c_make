#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//ÿһ����ʽ�����ͼ�鶼��һ��ISBN������֮��Ӧ��ISBN�����9λ���֡�1λʶ�����3λ�ָ�����
//��涨��ʽ�硰x - xxx - xxxxx - x�������з��š� - ���Ƿָ����������ϵļ��ţ���
//���һλ��ʶ���룬����0 - 670 - 82162 - 4����һ����׼��ISBN�롣
//ISBN�����λ���ֱ�ʾ�鼮�ĳ������ԣ�����0����Ӣ���һ���ָ����� - ��֮�����λ���ִ�������磬
//����670����ά�������磻�ڶ����ָ�֮�����λ���ִ�������ڳ�����ı�ţ����һλΪʶ���롣
//ʶ����ļ��㷽�����£�
//��λ���ֳ���1���ϴ�λ���ֳ���2�����Դ����ƣ������õĽ��mod 11�����õ�������Ϊʶ���룬
//�������Ϊ10����ʶ����Ϊ��д��ĸX������ISBN����0 - 670 - 82162 - 4�е�ʶ����4�������õ��ģ���067082162��9�����֣�
//�������ң��ֱ����1��2������9������ͣ���0��1 + 6��2 + ���� + 2��9 = 158��Ȼ��ȡ158 mod 11�Ľ��4��Ϊʶ���롣
//��������Ǳ�д�����ж������ISBN������ʶ�����Ƿ���ȷ�������ȷ����������Right��������������������Ϊ����ȷ��ISBN���롣
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
//            //arr[i]-'0'����Ϊ����ʹ���ַ����ͱ�������ͣ�
//            //��һ���ַ����͵����֣����硯5����ת���ɶ�Ӧ��������ֵ������5����'0����ASCII��ֵ��48��
//            //��˽��ַ����ּ�ȥ��0����ASCII��ֵ���Ϳ��Եõ���Ӧ��������ֵ�����硯5����ȥ��0���͵���5��
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


//KiKiʵ��һ���򵥼�������ʵ���������ġ��Ӽ��˳������㣬�û��Ӽ���������ʽ��������1�����������2����
//���㲢������ʽ��ֵ����������������Ų������ڣ� + �� - �� * �� / ����Χ�ڣ������Invalid operation!����
//�������Ϊ�������㣬���� / ��ʱ�����������2����0.0���������Wrong!Division by zero!��
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

//2020�������ˣ�KiKiҪ������nλ������˵n�顱Happy new year!Good luck!����ף����
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

//��������һ��������N��ͳ��1~N֮�������ĸ�����ż���ĸ������������
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

//KiKi֪����ʲô��������ֻ�ܱ�1����������������������������֪��������λ�����У��ж��ٸ�������
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

//����žų˷��������ʽ��������
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

//ţţ��ʼѧϰ������
//��������֪��1 - 2 + 3 - 4... + n��ֵ
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

//���ţţ�ֻ��˸����У�������㣺1 + 1 / 2 + 1 / 3 + �� + 1 / N��ֵ��(����6λС��)
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

//ţţ׼���������ף�������ѵ�����
//����һ������n, ���� 1 + 1 / ��1 - 3�� + 1 / ��1 - 3 + 5�� + ... + 1 / (1 - 3 + 5 - ...((-1) ^ (n - 1)) * (2n - 1))��ֵ
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

//����ţţ���� 1 + ��1 + 2�� + ��1 + 2 + 3�� + ... + (1 + 2 + 3 + ... + n)
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