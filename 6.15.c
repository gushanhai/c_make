#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//KiKiѧϰ��ѭ����BoBo��ʦ��������һϵ�д�ӡͼ������ϰ���������Ǵ�ӡ�á�* ����ɵļ���ͼ����
//#include <stdio.h>
//int main()
//{
//    int a;
//    while ((scanf("%d", &a)) != EOF)
//    {
//        for (int i = 0; i <= a; i++)
//        {
//            for (int j = i; j < a; j++)
//            {
//                printf("  ");
//            }
//            for (int j = 0; j <= i; j++)
//            {
//                printf("*");
//            }
//            printf("\n");
//        }
//        for (int i = 0; i < a; i++)
//        {
//            for (int j = 0; j <= i; j++)
//            {
//                printf("  ");
//            }
//            for (int j = i; j < a; j++)
//            {
//                printf("*");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//KiKiѧϰ��ѭ����BoBo��ʦ��������һϵ�д�ӡͼ������ϰ���������Ǵ�ӡ�á�* ����ɵķ�б����ͼ����
//#include <stdio.h>
//int main()
//{
//    int a;
//    while ((scanf("%d", &a)) != EOF)
//    {
//        for (int i = 0; i < a; i++)
//        {
//            for (int j = 0; j < i; j++)
//            {
//                printf(" ");
//            }
//            printf("*\n");
//        }
//    }
//    return 0;
//}

//KiKiѧϰ��ѭ����BoBo��ʦ��������һϵ�д�ӡͼ������ϰ���������Ǵ�ӡ�á�* ����ɵ���б����ͼ����
//#include <stdio.h>
//int main()
//{
//    int a;
//    while ((scanf("%d", &a)) != EOF)
//    {
//        for (int i = 0; i < a; i++)
//        {
//            for (int j = i + 1; j < a; j++)
//            {
//                printf(" ");
//            }
//            printf("*\n");
//        }
//    }
//    return 0;
//}

//KiKiѧϰ��ѭ����BoBo��ʦ��������һϵ�д�ӡͼ������ϰ���������Ǵ�ӡ�á�* ����ɵ�X��ͼ����
//#include<stdio.h>
//int main()
//{
//    int a;
//    while ((scanf("%d", &a)) != EOF)
//    {
//        for (int i = 0; i < a; i++)
//        {
//            for (int j = 0; j < a; j++)
//            {
//                if (j == i || j == a - i - 1)
//                    printf("*");
//                else
//                    printf(" ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//KiKiѧϰ��ѭ����BoBo��ʦ��������һϵ�д�ӡͼ������ϰ���������Ǵ�ӡ�á�* ����ɵġ����ġ�������ͼ����
//#include <stdio.h>
//int main()
//{
//    int a;
//    while ((scanf("%d", &a)) != EOF)
//    {
//        for (int i = 0; i < a; i++)
//        {
//            for (int j = 0; j < a; j++)
//            {
//                if (i == a - 1 || i == 0)
//                {
//                    printf("* ");
//                }
//                else
//                {
//                    if (j == 0 || j == a - 1)
//                    {
//                        printf("* ");
//                    }
//                    else
//                        printf("  ");
//                }
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//KiKiѧϰ��ѭ����BoBo��ʦ��������һϵ�д�ӡͼ������ϰ���������Ǵ�ӡ�á�* ����ɵġ����ġ�������ͼ����
//#include <stdio.h>
//int main()
//{
//    int a;
//    while ((scanf("%d", &a)) != EOF)
//    {
//        for (int i = 0; i < a; i++)
//        {
//            for (int j = 0; j <= i; j++)
//            {
//                if (i == a - 1 || i == j || j == 0)
//                    printf("* ");
//                else
//                    printf("  ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//KiKiѧϰ��ѭ����BoBo��ʦ��������һϵ�д�ӡͼ������ϰ���������Ǵ�ӡ��������ɵ�����������ͼ����
//#include <stdio.h>
//int main()
//{
//    int a;
//    while ((scanf("%d", &a)) != EOF)
//    {
//        for (int i = 0; i < a; i++)
//        {
//            int c = 1;
//            for (int j = 0; j <= i; j++)
//            {
//                printf("%d ", c++);
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//������ʥ���ڣ�ţţҪ��ӡһ��Ư����ʥ�����͸������е�Ů���ѣ����������ʵ�����롣
//#include <stdio.h>
//int main()
//{
//    int a, i, j;
//    scanf("%d", &a);
//    int d = 3 * a;     //dΪ��ʼ��ǰ��Ŀո���
//    for (int i = 0; i < a; i++)
//    {
//
//        //��һ��
//        for (int j = d - 1; j > 0; j--)
//        {
//            printf(" ");
//        }
//        for (int j = 0; j < i + 1; j++)
//        {
//            printf("*     ");
//        }
//        printf("\n");
//
//        //�ڶ���
//        for (int j = d - 2; j > 0; j--)
//        {
//            printf(" ");
//        }
//        for (int j = 0; j < i + 1; j++)
//        {
//            printf("* *   ");
//        }
//        printf("\n");
//
//        //������
//        for (int j = d - 3; j > 0; j--)
//        {
//            printf(" ");
//        }
//        for (int j = 0; j < i + 1; j++)
//        {
//            printf("* * * ");
//        }
//        printf("\n");
//        d -= 3;
//    }
//    for (int i = 0; i < a; i++)
//    {
//        for (int j = 1; j < (2 * a) + a; j++)
//        {
//            printf(" ");
//        }
//        printf("*\n");
//    }
//    return 0;
//}

//������ʥ���ڣ�ţţҪ��ӡһ��Ư����ʥ�����͸������е�Ů���ѣ����������ʵ�����롣
//#include <stdio.h>
//int arr[500][800] = { {0, 0, 1, 0, 0}, {0, 1, 0, 1, 0}, {1, 0, 1, 0, 1} };
//
//int main() {
//    int length = 3;
//    int width = 5;
//    int n = 0;
//    int i = 0;
//    int j = 0;
//    int k = 0;
//    scanf("%d", &n);
//
//    for (i = 1; i < n; i++) { //��x����ʼ������Ϊһ��
//        //����һ��
//        for (j = length; j < length * 2; j++) {
//            for (k = 0; k < width; k++) {
//                arr[j][k] = arr[j - length][k];
//                arr[j][k + width + 1] = arr[j - length][k];
//            }
//        }
//
//        //���ڵ�һ��Ϊ����������λ�ò��ԣ�����λ��
//        for (j = 0; j < length; j++) {
//            for (k = 0; k < width; k++) {
//                arr[j][k] = 0;
//            }
//        }
//
//        for (j = 0; j < length; j++) {
//            for (k = length; k < length + width; k++) {
//                arr[j][k] = arr[j + length][k - length];
//            }
//        }
//        length *= 2;
//        width *= 2;
//        width++;
//    }
//    //��ӡ��Ҷ
//    for (i = 0; i < length; i++) {
//        for (j = 0; j < width; j++) {
//            if (arr[i][j] == 0)
//                printf(" ");
//            else
//                printf("*");
//        }
//        printf("\n");
//    }
//
//    //��ӡ����
//    for (i = 0; i < n; i++) {
//        for (j = 0; j < width / 2; j++) {
//            printf(" ");
//        }
//        printf("*\n");
//    }
//    return 0;
//}