#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//#include<stdio.h>
//#define size 5
//int main()
//{
//	FILE* pf = fopen("data.txt", "wb");
//	if (pf == NULL)
//	{
//		perror("open fail");
//		exit(-1);
//	}
//	int arr[size] = { 1,2,3,4,5 };
//	fwrite(arr, sizeof(*arr), size, pf);
//	fclose(pf);
//	pf = fopen("data.txt", "rb");
//	int arr2[size] = { 0 };
//	size_t ret_code = fread(arr2, sizeof(*arr2), size, pf);
//	if (ret_code == size) {
//		puts("Array read successfully, contents: ");
//		for (int n = 0; n < size; ++n) printf("%d ", arr2[n]);
//		putchar('\n');
//	}
//	else { // error handling
//		if (feof(pf))
//			printf("Error reading test.bin: unexpected end of file\n");
//		else if (ferror(pf)) {
//			perror("Error reading test.bin");
//		}
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//������������ left �� right ������һ���б��б��Ԫ���Ƿ�Χ[left, right] �����е� �Գ��� ��
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

//bool is(int num)
//{
//    int tmp = num;
//    while (tmp > 0)
//    {
//        int ttmp = tmp % 10;
//        if (ttmp == 0 || num % ttmp != 0)
//            return false;
//        tmp /= 10;
//    }
//    return true;
//}
//int* selfDividingNumbers(int left, int right, int* returnSize)
//{
//    *returnSize = 0;
//    int* arr = (int*)malloc((left + right + 1) * sizeof(int));
//    for (int i = left; i <= right; i++)
//    {
//        if (is(i))
//        {
//            arr[(*returnSize)++] = i;
//        }
//    }
//    return arr;
//}


//����һ���������� nums������ ���� answer ������ answer[i] ���� nums �г� nums[i] ֮�������Ԫ�صĳ˻� ��
//��һ�ַ�����
//**
//* Note: The returned array must be malloced, assume caller calls free().
//* /
//int* productExceptSelf(int* nums, int numsSize, int* returnSize)
//{
//    *returnSize = 0;
//    int* ret = (int*)malloc(4 * numsSize);
//    int left[numsSize];
//    int right[numsSize];
//    left[0] = 1;
//    for (int i = 1; i < numsSize; i++)
//    {
//        left[i] = left[i - 1] * nums[i - 1];
//    }
//    right[numsSize - 1] = 1;
//    int sum = 1;
//    for (int i = numsSize - 2; i >= 0; i--)
//    {
//        right[i] = right[i + 1] * nums[i + 1];
//    }
//    for (int i = 0; i < numsSize; i++)
//    {
//        ret[(*returnSize)++] = left[i] * right[i];
//    }
//    return ret;
//}
 
//�ڶ��ַ�����
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
//int* productExceptSelf(int* nums, int numsSize, int* returnSize)
//{
//    *returnSize = numsSize;
//    int* ret = (int*)malloc(4 * numsSize);
//
//    ret[0] = 1;
//    for (int i = 1; i < numsSize; i++)
//    {
//        ret[i] = ret[i - 1] * nums[i - 1];//����ǰ׺�Ͳ��Ҵ��뷵��������
//    }
//    int sum = 1;
//    for (int i = numsSize - 1; i >= 0; i--)
//    {
//        ret[i] = ret[i] * sum;//������������ĳ˻�
//        sum *= nums[i];//��׺��
//    }
//    return ret;
//}