#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//��һ�����ӣ��ӳ������3������ÿ���¶���һֻ���ӣ�С���ӳ����������º�ÿ��������һֻ���ӡ�
//���ӣ�����һֻ���ӵ�3���³�������ô����5���¿�ʼ��ÿ������һֻ���ӡ�
//һ�µ�ʱ����һֻ���ӣ��������Ӷ��������ʵ�n���µ���������Ϊ���٣�
//��һ�ֽⷨ��
//#include <stdio.h>
//int ret(int n)
//{
//    if (n == 1 || n == 2)
//        return 1;
//    else
//        return ret(n - 1) + ret(n - 2);
//}
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int count = ret(n);
//    printf("%d", count);
//    return 0;
//}

//�ڶ��ֽⷨ��
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int num1 = 1;
//	int num2 = 1;
//	int num = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		if (i < 3)
//		{
//			num = 1;
//		}
//		else
//		{
//		num = num1 + num2;
//		num1 = num2;
//		num2 = num;
//		}
//	}
//	printf("%d", num);
//	return 0;
//}


//���еĶ������£����еĵ�һ��Ϊn���Ժ����Ϊǰһ���ƽ�����������е�ǰm��ĺ͡�
//#include <stdio.h>
//#include<math.h>
//int main()
//{
//    double n;
//    int m;
//    double count;
//    while (scanf("%lf %d", &n, &m) != EOF)
//    {
//        count = 0;
//        while (m--)
//        {
//            count += n;
//            n = sqrt(n);
//        }
//        printf("%.2lf\n", count);
//    }
//    return 0;
//}