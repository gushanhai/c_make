#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//����һ���������� nums���������е�Ԫ��������ת k ��λ�ã����� k �ǷǸ�����
//����: nums = [1, 2, 3, 4, 5, 6, 7], k = 3
//��� : [5, 6, 7, 1, 2, 3, 4]
//���� :
//	������ת 1 �� : [7, 1, 2, 3, 4, 5, 6]
//	������ת 2 �� : [6, 7, 1, 2, 3, 4, 5]
//	������ת 3 �� : [5, 6, 7, 1, 2, 3, 4]
//void reverse(int* left, int* right)
//{
//    while (left < right)
//    {
//        int tmp = *left;
//        *left = *right;
//        *right = tmp;
//        left++;
//        right--;
//    }
//}
//void rotate(int* nums, int numsSize, int k)
//{
//    k %= numsSize;
//    //�������
//    reverse(nums, nums + numsSize - 1);
//    //�ұ�����
//    reverse(nums, nums + k - 1);
//    //��������
//    reverse(nums + k, nums + numsSize - 1);
//}

//����nums������0��n������������������ȱ��һ�������д�����ҳ��Ǹ�ȱʧ�����������а취��O(n)ʱ���������
//int missingNumber(int* nums, int numsSize)
//{
//    int all = 0;
//    for (int i = 0; i < numsSize; i++)
//    {
//        all ^= *(nums + i);
//    }
//    for (int i = 0; i < numsSize + 1; i++)
//    {
//        all ^= i;
//    }
//    return all;
//}

//��ת�ַ���
//#include<stdio.h>
//#include<string.h>
//void revese1(char* left, char* right)
//{
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void revese(char* arr, int k)
//{
//	int len = strlen(arr);
//	revese1(arr, arr + k-1);
//	revese1(arr + k, arr + len - 1);
//	revese1(arr, arr + len - 1);
//}
//int main()
//{
//	char arr[] = "abcdefghij";
//	int k;
//	scanf("%d", &k);
//	revese(arr, k);
//	printf("%s", arr);
//	return 0;
//}

//�ж��ַ���2�Ƿ�Ϊ�ַ�����ת���
#include<stdio.h>
#include<string.h>
int reve(char* str1, char* str2)
{
	int s1 = strlen(str1);
	int s2 = strlen(str2);
	if (s1 != s2)
		return 0;
	strncat(str1, str1, s1);
	if (strstr(str1, str2) == NULL)
		return 0;
	else
		return 1;
}
int main()
{
	char str1[36] = "abcdef";
	char str2[] = "fjkabcde";
	int ret = reve(str1, str2);
	if (ret == 0)
		printf("����");
	else
		printf("��");
	return 0;
}