#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//��һ��������������λ֮��
//#include <stdio.h>
//int main()
//{
//    int a;
//    scanf("%d", &a);
//    int sum = 0;
//    int b;
//    while (a > 9)
//    {
//        b = a % 10;
//        a /= 10;
//        sum += b;
//    }
//    sum += a;
//    printf("%d", sum);
//    return 0;
//}

//��һ������ħ��������һ��������n�����nΪż�����ͽ�����Ϊn / 2, ���nΪ�������ͽ�����Ϊ��3��1
//�����ظ����������㣬�������޲�֮��һ�����Եõ�1
//ţţΪ����֤���ħ����������һ�����������㼸���ܱ��1
//#include <stdio.h>
//int main()
//{
//    int a;
//    scanf("%d", &a);
//    int count = 0;
//    while (a != 1)
//    {
//        if (a % 2 == 0)
//        {
//            a /= 2;
//        }
//        else
//        {
//            a = a * 3 + 1;
//        }
//        count++;
//    }
//    printf("%d", count);
//    return 0;
//}

//������2019�꣬KiKi��֪��1~2019���ж��ٸ���������9�������������ֵ�����ָ��ĳһλ�ǡ�9�����������硰2019������199���ȡ�
//#include <stdio.h>
//int main()
//{
//    int a, b, c;
//    int count = 0;
//    for (a = 1; a < 2020; a++)
//    {
//        c = a;
//        while (c > 0)
//        {
//            if (c % 10 == 9)
//            {
//                count++;
//                break;
//            }
//            else
//            {
//                c /= 10;
//            }
//        }
//    }
//    printf("%d", count);
//    return 0;
//}

//С���ֵİ�������ͳ��һ�°༶��һ���ж�������Ҫ����ҳ���
//�����ɼ������ģ���ѧ�����ƽ���ֵ���60�Ľ�����ҳ���С�������̰�����������һ���ж���ͬѧ���мҳ���
//#include <stdio.h>
//int main()
//{
//    int a, b, c, d;
//    int x = 0;
//    scanf("%d", &a);
//    for (int i = 0; i < a; i++)
//    {
//        scanf("%d %d %d", &b, &c, &d);
//        if ((b + c + d) / 3 < 60)
//            x++;
//    }
//    printf("%d", x);
//    return 0;
//}


//�������ʻ��ļ��ڣ�ˮ�ɻ��������������˵Ĵ�����ѧ���и�ˮ�ɻ�����������������ģ� ��ˮ�ɻ�������ָһ����λ����
//���ĸ�λ���ֵ������͵����䱾�����磺153 = 1 ^ 3 + 5 ^ 3 + 3 ^ 3�� ����Ҫ�����������m��n��Χ�ڵ�ˮ�ɻ�����
//#include <stdio.h>
//#include<math.h>
//int main()
//{
//    int m, n;
//    int count = 0;
//    int x = 0;
//    while (scanf("%d %d", &m, &n) != EOF)
//    {
//        for (int i = m; i <= n; i++)
//        {
//            int a = i % 10;
//            int b = i / 10 % 10;
//            int c = i / 100;
//            if (pow(a, 3) + pow(b, 3) + pow(c, 3) == i)
//            {
//                x++;
//                printf("%d ", i);
//            }
//        }
//        if (x == 0)
//            printf("no\n");
//        else
//            printf("\n");
//    }
//    return 0;
//}
//
//����ˮ�ɻ��� - Lily Number������������֣����м��ֳ��������֣�
//����1461 ���Բ�ֳɣ�1��461��, ��14��61��, ��146��1), 
//������в�ֺ�ĳ˻�֮�͵�����������һ��Lily Number��
//#include<stdio.h>
//int main()
//{
//    int i = 0;
//    for (i = 10000; i <= 99999; i++)
//    {
//        int a = i / 10000;//�õ���һλ
//        int a1 = i % 10000;//�õ�����λ
//        int b = i / 1000;
//        int b1 = i % 1000;
//        int c = i / 100;
//        int c1 = i % 100;
//        int d = i / 10;
//        int d1 = i % 10;
//        if ((a1 * a) + (b * b1) + (c * c1) + (d * d1) == i)
//        {
//            printf("%d ", i);
//        }
//    }
//    return 0;
//}

//����Ա�����ֳ���֡���7λ���٣��Ӽ�������������ɼ���
//ÿ��7���������ٷ��ƣ���ȥ��һ����߷ֺ�һ����ͷ֣����ÿ���ƽ���ɼ���
//��ע�������ж������룩
//#include <stdio.h>
//int main()
//{
//    int a;
//    int sum = 0;
//    int max = 0;
//    int small = 100;
//    int i = 0;
//    while (scanf("%d ", &a) != EOF)
//    {
//        if (a > max)
//            max = a;
//        if (a < small)
//            small = a;
//        sum += a;
//        i++;
//        if (i == 7)
//        {
//            printf("%.2f\n", (sum - max - small) / 5.0);
//            sum = 0;
//            max = 0;
//            small = 100;
//            i = 0;
//        }
//    }
//    return 0;
//}

//��һ����λ�������������
//#include <stdio.h>
//int main()
//{
//    int a;
//    scanf("%d", &a);
//    while (a)
//    {
//        printf("%d", a % 10);
//        a /= 10;
//    }
//    return 0;
//}

//С�����ڿ���ѧϰ�˶����ư˽�����ʮ�����ƺ󣬶Խ���ת��������Ũ�����Ȥ��
//��Ϊ��������������6����������֪��һ������ʾΪ�����ƺ�Ľ����������������������⡣
//1.
//#include <stdio.h>
//int main()
//{
//    int a;
//    int b[10];
//    int i = 0;
//    int count = 0;
//    scanf("%d", &a);
//    if (a < 6)
//        printf("%d", a);
//    else
//    {
//        while (a)
//        {
//            b[i++] = a % 6;
//            a /= 6;
//            count++;
//        }
//        for (int j = count; j > 0; j--)
//        {
//            printf("%d", b[j - 1]);
//        }
//    }
//    return 0;
//}
//2.
//#include<stdio.h>
//void six(int a)
//{
//    if (a >= 6)
//        six(a / 6);
//    printf("%d", a % 6);
//}
//int main()
//{
//    int a;
//    scanf("%d", &a);
//    six(a);
//    return 0;
//}