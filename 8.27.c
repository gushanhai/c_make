#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//����һ������Ϊn������nums�������ҵ���ֵ��������������������ܰ��������ֵ������������£������κ�һ������λ�ü��ɡ�
//1.��ֵԪ����ָ��ֵ�ϸ������������ֵ��Ԫ�ء��ϸ���ڼ������е���
//2.���� nums[-1] = nums[n] 
//3.����������Ч�� i ���� nums[i] != nums[i + 1]
//4.�����ʹ��O(logN)��ʱ�临�Ӷ�ʵ�ִ�������
///**
// * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
// *
// *
// * @param nums int����һά����
// * @param numsLen int nums���鳤��
// * @return int����
// */
//    int findPeakElement(int* nums, int numsLen) {
//    // write code here
//    int left = 0;
//    int right = numsLen - 1;
//    while (left < right)
//    {
//        int mid = (left + right) / 2;
//        if (nums[mid] < nums[mid + 1])
//            left = mid + 1;
//        else
//            right = mid;
//    }
//    return right;
//}

//������һ������Ϊ n �����������У�����ֻ��һ����ֵ�����������Σ�������ֵ������ż���Σ������ҳ��Ǹ����������ε���ֵ��
//#include <stdio.h>
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int arr[n];
//    int a = 0;
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//        a ^= arr[i];
//    }
//    printf("%d", a);
//    return 0;
//}

#include<stdio.h>
extern int ADD(int x,int y);
int main()
{
	int sum = ADD(4, 5);
	printf("%d", sum);
	return 0;
}