#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//����һ���������е����� nums ,����ԭ��ɾ���ظ����ֵ�Ԫ�أ�ʹÿ��Ԫ�� ֻ����һ�� ������ɾ����������³��ȡ�Ԫ�ص����˳��Ӧ�ñ���һ�� ��
//Ȼ�󷵻�nums��ΨһԪ�صĸ�����
 
//��һ�ַ���:
//#include<stdio.h>
//int removeDuplicates(int* nums, int numsSize)
//{
//    int src = 1;
//    int dst = 1;
//    while (dst < numsSize)
//    {
//        if (nums[src-1] != nums[dst])
//        {
//            nums[src++] = nums[dst];
//        }
//        dst++;
//    }
//    return src;
//}
//int main()
//{
//    int nuns[10] = { 0,0,1,1,2,2,3,3,4,4 };
//    int nums1[10] = { 0,1,2,3,4 };
//    removeDuplicates(&nuns, 10);
//    for (int i = 0; i < 5; i++)
//    {
//        printf("%d\n", nuns[i]);
//    }
//    return 0;
//}

//�ڶ��ַ���
//#include<stdio.h>
//int removeDuplicates(int* nums, int numsSize)
//{
//    int src = 1;
//    int dst = 1;
//    while (src < numsSize)
//    {
//        if (nums[src] != nums[src - 1])
//        {
//            nums[dst++] = nums[src];
//        }
//        src++;
//    }
//    return dst;
//}
//int main()
//{
//    int nuns[10] = { 0,0,1,1,1,2,2,3,3,4 };
//    int nums1[10] = { 0,1,2,3,4 };
//    removeDuplicates(&nuns, 10);
//    for (int i = 0; i < 5; i++)
//    {
//        printf("%d\n", nuns[i]);
//    }
//    return 0;
//}

//���㵥�����ͷ�ڵ� head �����㷴ת���������ط�ת�������

 //Definition for singly-linked list.
// struct ListNode 
// {
//    int val;
//    struct ListNode *next;
// };
//
//
//struct ListNode* reverseList(struct ListNode* head)
//{
//    struct ListNode* n1, * n2, * n3;
//    n1 = NULL;
//    n2 = head;
//    if (n2)
//        n3 = n2->next;
//    while (n2)
//    {
//        n2->next = n1;
//        n1 = n2;
//        n2 = n3;
//        if (n3)
//            n3 = n3->next;
//    }
//    return n1;
//}

