#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//给你一个升序排列的数组 nums ,请你原地删除重复出现的元素，使每个元素 只出现一次 ，返回删除后数组的新长度。元素的相对顺序应该保持一致 。
//然后返回nums中唯一元素的个数。
 
//第一种方法:
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

//第二种方法
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

//给你单链表的头节点 head ，请你反转链表，并返回反转后的链表。

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

