#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//int findMaxConsecutiveOnes(int* nums, int numsSize)
//{
//    int count=0;
//    int sum=0;
//    for(int i=0;i<numsSize;i++)
//    {
//        if(nums[i])
//        {
//            count++;
//        }
//        else
//        {
//            sum=fmax(sum,count);
//            count=0;
//        }
//    }
//    return fmax(sum,count);
//}


//��ȫ����Perfect number�����ֳ����������걸������һЩ�������Ȼ����
//�����е������ӣ����������������Լ�����ĺͣ������Ӻ�������ǡ�õ���������
//���磺28������Լ��1��2��4��7��14��28����ȥ������28�⣬����5������ӣ�1 + 2 + 4 + 7 + 14 = 28��
//����n�������n����(��n)��ȫ���ĸ�����
//#include <stdio.h>
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int x = 0;
//    for (int i = 1; i <= n; i++)
//    {
//        int sum = 0;
//        for (int j = 1; j < i; j++)
//        {
//            if (i % j == 0)
//                sum += j;
//        }
//        if (sum == i)
//            x++;
//    }
//    printf("%d", x);
//    return 0;
//} 