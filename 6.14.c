#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//�����������Ϊ���ʣ����Ÿ��ҳϵ���ʿ����һ�죬��ʿ�յ�һö��ң�
//֮�����죨�ڶ���͵����죩��ÿ���յ���ö��ң�֮�����죨���ġ��塢���죩��
//ÿ���յ���ö��ң�֮�����죨���ߡ��ˡ��š�ʮ�죩��ÿ���յ���ö��ҡ�����
//���ֹ��ʷ���ģʽ��һֱ����������ȥ��������N��ÿ���յ�Nö��Һ���ʿ����֮�������N + 1���ÿ���յ�N + 1ö��ҡ�
//�������ǰK�����ʿһ������˶��ٽ�ҡ�
//#include<stdio.h>
//int main()
//{
//    int k;//�ܹ�������
//    scanf("%d", &k);
//    int count = 0;//�յ��Ľ��
//    int day = 0;//����
//    for (int i = 1; day < k; i++)
//    {
//        for (int j = 0; j < i; j++)//
//        {
//            count += i;//���ѭ�������յ��ļ�ö���
//            day++;
//            if (day == k)
//                break;
//        }
//    }
//    printf("%d", count);
//    return 0;
//}

//����ţţѧ���˻��Ĵ������������������һ��ģ�����������
//�����������Ŷ��뵹�Ŷ���һ������������1221��343�ǻ�������433���ǻ������������������n�Ļ�������
//#include <stdio.h>
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    for (int i = 1; i < n; i++)
//    {
//        int sum = 0;
//        int a = i;
//        while (a)
//        {
//            sum = sum * 10 + a % 10;
//            a /= 10;
//        }
//        if (sum == i)
//            printf("%d\n", i);
//    }
//    return 0;
//}


//KiKiѧϰ��ѭ����BoBo��ʦ��������һϵ�д�ӡͼ������ϰ���������Ǵ�ӡ�á�* ����ɵ��߶�ͼ����
//#include <stdio.h>
//int main()
//{
//    int a;
//    while (scanf("%d", &a) != EOF)
//    {
//        for (int i = 0; i < a; i++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//    return 0;
//}

//KiKiѧϰ��ѭ����BoBo��ʦ��������һϵ�д�ӡͼ������ϰ���������Ǵ�ӡ�á�* ����ɵ�������ͼ����
//#include <stdio.h>
//int main()
//{
//    int a;
//    while (scanf("%d", &a) != EOF)
//    {
//        for (int i = 0; i < a; i++)
//        {
//            for (int j = 0; j < a; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//KiKiѧϰ��ѭ����BoBo��ʦ��������һϵ�д�ӡͼ������ϰ���������Ǵ�ӡ�á�* ����ɵ�ֱ��������ͼ����
//#include <stdio.h>
//int main()
//{
//    int a;
//    while (scanf("%d", &a) != EOF)
//    {
//        for (int i = 0; i < a; i++)
//        {
//            for (int j = 0; j <= i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//KiKiѧϰ��ѭ����BoBo��ʦ��������һϵ�д�ӡͼ������ϰ���������Ǵ�ӡ�á�* ����ɵķ�תֱ��������ͼ����
//#include <stdio.h>
//int main()
//{
//    int a;
//    while (scanf("%d", &a) != EOF)
//    {
//        for (int i = a; i > 0; i--)
//        {
//            for (int j = i; j > 0; j--)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//KiKiѧϰ��ѭ����BoBo��ʦ��������һϵ�д�ӡͼ������ϰ���������Ǵ�ӡ�á�* ����ɵĴ��ո�ֱ��������ͼ����
//#include<stdio.h>
//int main()
//{
//    int a;
//    while (scanf("%d", &a) != EOF)
//    {
//        for (int i = 0; i < a; i++)
//        {
//            for (int j = 0; j < (a - i - 1); j++)
//            {
//                printf("  ");
//            }
//            for (int j = 0; j <= i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//KiKiѧϰ��ѭ����BoBo��ʦ��������һϵ�д�ӡͼ������ϰ���������Ǵ�ӡ�á�* ����ɵĽ�����ͼ����
//#include <stdio.h>
//int main()
//{
//    int a;
//    while (scanf("%d", &a) != EOF)
//    {
//        for (int i = 0; i < a; i++)
//        {
//            for (int j = 0; j < a - 1 - i; j++)
//            {
//                printf(" ");
//            }
//            for (int j = 0; j <= i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//KiKiѧϰ��ѭ����BoBo��ʦ��������һϵ�д�ӡͼ������ϰ���������Ǵ�ӡ�á�* ����ɵķ�ת������ͼ��
//#include <stdio.h>
//int main()
//{
//    int a;
//    while (scanf("%d", &a) != EOF)
//    {
//        for (int i = 0; i < a; i++)
//        {
//            for (int j = 0; j < i; j++)
//            {
//                if (j != i)
//                    printf(" ");
//            }
//            for (int j = 0; j < a - i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//KiKiѧϰ��ѭ����BoBo��ʦ��������һϵ�д�ӡͼ������ϰ���������Ǵ�ӡ�á�* ����ɵ�����ͼ����
//#include <stdio.h>
//int main()
//{
//    int a;
//    while (scanf("%d", &a) != EOF)
//    {
//        for (int i = 0; i <= a; i++)
//        {
//            //�ϰ벿��
//            for (int j = i; j < a; j++)
//            {
//                printf(" ");
//            }
//            for (int j = 0; j <= i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//        for (int i = 0; i < a; i++)
//        {
//            for (int j = 0; j <= i; j++)
//            {
//                printf(" ");
//            }
//            for (int j = i; j < a; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//KiKiѧϰ��ѭ����BoBo��ʦ��������һϵ�д�ӡͼ������ϰ���������Ǵ�ӡ�á�* ����ɵ�K��ͼ����
//#include <stdio.h>
//int main()
//{
//    int a;
//    while ((scanf("%d", &a) != EOF))
//    {
//        for (int i = 0; i <= a; i++)
//        {
//            for (int j = i; j <= a; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//
//        }
//        for (int i = 1; i <= a; i++)
//        {
//            for (int j = 0; j <= i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}