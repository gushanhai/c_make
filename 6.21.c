#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//ţţ�ո�ѧ�������Ķ��壺����ֵָ�ڴ���1����Ȼ���У�����1�����������ⲻ����������������Ȼ��
//ţţ��֪����[l, r] ��Χ��ȫ�������ĺ�
//#include <stdio.h>
//int main()
//{
//    int l, r;
//    scanf("%d %d", &l, &r);
//    int count = 0;
//    for (int i = l; i <= r; i++)
//    {
//        int x = 1;
//        if (i == 1)
//            count++;
//        for (int j = 2; j < i; j++)
//        {
//            if (i % j == 0)
//            {
//                x = 0;
//                break;
//            }
//        }
//        if (x != 0)
//        {
//            count += i;
//        }
//    }
//    printf("%d", count);
//    return 0;
//}

//ţţ��ѧ�����鲻�ã����õ��������� a �� b��ѯ�� b ����һ������������֮�������� a ֮����ӽ���
//����ж��������֮��ͬ���ӽ��������ʼ���������顣
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//    int n, m;
//    scanf("%d %d", &n, &m);
//    int count = 0;//����a����ֵ
//    int count2 = 0;//����b����ֵ
//    int left = 0;
//    int right = 1;
//    int c1, c2;
//    int arr1[n], arr2[m];
//    int b = 100;
//    int a;
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr1[i]);
//        count += arr1[i];
//    }
//    int min = count;
//    for (int i = 0; i < m; i++)
//    {
//        scanf("%d", &arr2[i]);
//    }
//    if (m == 1)
//    {
//        printf("%d", arr2[0]);
//    }
//    else
//    {
//        while (left < right && right < m)
//        {
//            count2 = 0;
//            for (int i = left; i <= right; i++)
//            {
//                count2 += arr2[i];
//            }
//            if (abs(count2 - count) < min)//�������2�ĺ�С������1�ĺ�
//            {
//                min = abs(count2 - count);//��Сֵ������2-����1�ľ���ֵ
//                c1 = left;
//                c2 = right;
//            }
//            if (count2 > count)//�������2�ĺʹ�������1�ĺ�
//            {
//                left++;//��left+1���˳�ѭ����
//            }
//            if (count2 < count)//�������2�ĺ�С������1�ĺ�
//            {
//                right++;//����һλԪ�ص�ֵ��ֱ��right��ֵС��m��ֵ��
//            }
//        }
//    }
//    for (int i = c1; i <= c2; i++)
//    {
//        printf("%d ", arr2[i]);
//    }
//    return 0;
//}

//���ڸ���һ����������������������㣺
//1��  ֻ��1 - 9��ɣ�����ÿ����ֻ����һ�Σ���13, 23, 1289��
//2��  λ���Ӹߵ���Ϊ�ݼ����������2459��87631��
//�����ж�һ�£���������Ļ������Ƿ�Ϊ������13�Ļ�������131, 127�Ļ�������12721����
//#include <stdio.h>
//#include<math.h>
//int main()
//{
//    long long a;
//    scanf("%lld", &a);
//    long long b = a;
//    long long  c = a;
//    long long j = 0;
//    while (c > 9)
//    {
//        c /= 10;
//        b = b * 10 + (c % 10);
//    }
//    for (j = 2; j <= sqrt(b); j++)
//    {
//        if (b % j == 0)
//        {
//            printf("noprime\n");
//            break;
//        }
//    }
//    if (j > sqrt(b))
//    {
//        printf("prime\n");
//    }
//    return 0;
//}