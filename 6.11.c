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

//ţţ��һ�������죬����һ�����ն�Ӧ��Ӣ����
//1������һ��Monday
//2�����ڶ���Tuesday
//3����������Wednesday
//4�������ģ�Thursday
//5�������壺Friday
//6����������Saturday
//7�������գ�Sunday
//ţţ֪�����������ڼ�������������Ӣ��
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


//KiKi������վ���õ�HTTP״̬�룬������֪��ʲô���壬BoBo��ʦ����������HTTP״̬�룺
//200��OK�������ѳɹ�����202��Accepted���������ѽ������󣬵���δ������
//400��Bad Request������������󣩣�403��Forbidden������ֹ����
//404��Not Found������ʧ�ܣ���500��Internal Server Error���������ڲ����󣩣�502��Bad Gateway���������أ���
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

//KiKi���ѧϰ���ź���ϵͳ�γ̣����ſ�����һ���ǳ���Ȥ�ĺ�������λ��Ծ����������һ�ֶ��巽ʽΪ��
// t>0���1,t=0���0.5,t<0���0
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


//ţţ��һ��ѧϰ�ƻ������ƻ��� y �� m �� d �տ�ʼѧϰ������֮ǰ���Ǿ����Ὺʼѧϰ�ģ�
//������һ����ʼѧϰ�Ͳ���ͣ�����������ж� y1 �� m1 �� d1 ��ţţӦ��ѧϰ��
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

//�Ӽ�������a, b, c��ֵ����̼��㲢���һԪ���η���ax2 + bx + c = 0�ĸ���
//��a = 0ʱ�������Not quadratic equation������a �� 0ʱ��
//���ݡ� = b2 - 4 * a * c������������㲢������̵ĸ���
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


//С���ֵİ༶������һ�����п��ԣ�����һ����3�ſ�Ŀ����ѧ�����ģ�Ӣ�
//С���ֵİ����ξ�����û��ͨ�����˵�ͬѧ�ҳ���һ�μҳ��ᣬ
//���˵ı�׼������ƽ���ֲ�����60�֣����������������æ��һ��С���ֻ᲻�ᱻ�мҳ���
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