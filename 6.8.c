#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//���ÿ�����룬���������������Odd������ż����Even����
//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    while (scanf("%d", &a) != EOF)
//    {
//        if ((a % 2) == 0)
//            printf("Even\n");
//        else
//            printf("Odd\n");
//    }
//    return 0;
//}


//���ÿ�����룬�����Pass����Fail����
//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    while (scanf("%d", &a) != EOF)
//    {
//        if (a >= 60)
//        {
//            printf("Pass\n");
//        }
//        else
//        {
//            printf("Fail\n");
//        }
//    }
//    return 0;
//}


//���⣺KiKi����5���ˣ��Ѿ��ܹ���ʶ100���ڵķǸ����������Ҳ����ܹ����� 100 ���ڵķǸ������ļӷ����㡣
// ������BoBo��ʦ����KiKi�ڽ��д��ڵ���100���������ļ���ʱ���������£�
//1.       ֻ���������������λ�����磺��KiKi��˵1234�ȼ���34��
//2.       ������������ڵ��� 100�� ��ôKIKIҲ�������������������λ���������λ��ʮλΪ0����ֻ������λ��
//���磺45 + 80 = 25
//Ҫ������Ǹ����� a�� b��ģ��KiKi������������� a + b ��ֵ��
//#include<stdio.h>
//int main()
//{
//    int a, b;
//    scanf("%d %d", &a, &b);
//    printf("%d", (a + b) % 100);
//    return 0;
//}


//ţţ��һ���߶η��ڶ�ά����ϵ�У���֪�߶������������ (x1,y1)��(x2,y2) ��ţţ��֪������߶εĳ��ȵ�ƽ��,
//��Ϊ����������ƽ�������ֻ�����(x1-x2)��ƽ��+(y1-y2)��ƽ��
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int x1, x2, y1, y2;
//    scanf("%d %d", &x1, &y1);
//    scanf("%d %d", &x2, &y2);
//    printf("%d\n", (int)pow((x1 - x2), 2) + (int)pow((y1 - y2), 2));
//    return 0;
//}
//ţţ�Ӽ����������� x �����ұ߽� l �� r �����������������ж� x �Ƿ��� l �� r ֮��
#include<stdio.h>
int main()
{
    int x, l, r;
    scanf("%d %d %d", &x, &l, &r);
    if (x <= r && x >= l)
        printf("true\n");
    else
        printf("false\n");
    return 0;
}