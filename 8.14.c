#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//����ת������дһ��������ȷ����Ҫ�ı伸��λ���ܽ�����Aת������B��
//int convertInteger(int A, int B)
//{
//    int tmp = A ^ B;
//    int count = 0;
//    for (int i = 0; i < 32; i++)
//    {
//        if (tmp & 1 == 1)
//            count++;
//        tmp >>= 1;
//    }
//    return count;
//}

//����һ������Ϊ n �ķǽ��������һ���Ǹ������� k ��Ҫ��ͳ�� k �������г��ֵĴ���
//* @param nums int����һά����
//* @param numsLen int nums���鳤��
//* @param k int����
//* @return int����
//* /
//int find(int* nums, int numsLen, double k)
//{
//    int left = 0;
//    int right = numsLen - 1;
//    while (left <= right)
//    {
//        int mid = (left + right) / 2;
//        if (nums[mid] < k)
//            left = mid + 1;
//        else if (nums[mid] > k)
//            right = mid - 1;
//        else
//            return mid;
//    }
//    return left;
//}
//
//int GetNumberOfK(int* nums, int numsLen, int k) {
//    // write code here
//    return find(nums, numsLen, k + 0.5) - find(nums, numsLen, k - 0.5);
//}

#include<stdio.h>
typedef struct tmp
{
	int a;
	char b;
	char arr[10];
}tmp;
int main()
{
	FILE* pf = fopen("data.txt", "rb");
	if (pf == NULL)
	{
		perror("open fail");
		exit(-1);
	}
	tmp t1 = { 0 };
	fread(&t1, sizeof(tmp), 1, pf);
	printf("%d %c %s", t1.a, t1.b, t1.arr);
	fclose(pf);
	pf = NULL;
	return 0;
}