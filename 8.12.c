#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//��������Ҫ�������������n��Ȼ������n�����������Ϊn�������и����ĸ�������������������ƽ��ֵ���������һλС����
//0��������������Ҳ���Ǹ�������������㡣���û����������ƽ��ֵΪ0��
//#include <stdio.h>
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int negative = 0;//��������
//    float sum = 0;//ƽ��ֵ
//    int i, b;
//    int positive = 0;//��������
//    b = n;
//    while (b--)
//    {
//        scanf("%d", &i);
//        if (i > 0)
//        {
//            positive++;
//            sum += i;
//        }
//        if (i < 0)
//            negative++;
//    }
//    sum /= positive;
//    printf("%d ", negative);
//    if (positive == 0)
//        printf("0.0");
//    else
//        printf("%.1f", sum);
//    return 0;
// }
 

////����һ�� n ��Ԫ������ģ������������� nums ��һ��Ŀ��ֵ target  ��дһ���������� nums �е� target�����Ŀ��ֵ���ڷ����±꣬���򷵻� - 1��
//int search(int* nums, int numsSize, int target)
//{
//    int left = 0;
//    int right = numsSize - 1;
//    while (left <= right)
//    {
//        int mid = (left + right) / 2;
//        if (nums[mid] < target)
//            left = mid + 1;
//        else if (nums[mid] > target)
//            right = mid - 1;
//        else if (nums[mid] == target)
//            return mid;
//    }
//    return -1;
//}

//��һ������Ϊ n �ķǽ������飬����[1, 2, 3, 4, 5]������������ת������һ�������ʼ�����ɸ�Ԫ�ذᵽ�����ĩβ�����һ����ת���飬
//��������[3, 4, 5, 1, 2]������[4, 5, 1, 2, 3]�����ġ����ʣ���������һ����ת���飬�������е���Сֵ
/**
 * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
 *
 *
 * @param nums int����һά����
 * @param numsLen int nums���鳤��
 * @return int����
 */
//int minNumberInRotateArray(int* nums, int numsLen)
//{
//    // write code here
//    int left = 0;
//    int right = numsLen - 1;
//    while (left < right)
//    {
//        int mid = (left + right) / 2;
//        if (nums[mid] > nums[right])
//            left = mid + 1;
//        else if (nums[mid] < nums[right])
//            right = mid;
//        else
//            right -= 1;
//
//    }
//    return nums[left];
//}

typedef struct tmp
{
	int a;
	float c;
	char e[10];
}tmp;
#include<stdio.h>
int main()
{
	char arr[30] = { 0 };
	tmp t1 = { 10,2.3f,"asdfg" };
	sprintf(arr, "%d %f %s", t1.a, t1.c, t1.e);
	printf("%s\n", arr);
	tmp t2 = { 0 };
	sscanf(arr, "%d %f %s", &(t2.a), &(t2.c), t2.e);
	printf("%d %f %s", t2.a, t2.c, t2.e);
	return 0;
}