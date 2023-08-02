#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//将两个升序链表合并为一个新的 升序 链表并返回。新链表是通过拼接给定的两个链表的所有节点组成的。
////第二种写法:
///**
// * Definition for singly-linked list.
// * struct ListNode {
// *     int val;
// *     struct ListNode *next;
// * };
// */
//    struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2)
//{
//    if (list1 == NULL)
//        return list2;
//    if (list2 == NULL)
//        return list1;
//    struct ListNode* newnode = (struct ListNode*)malloc(sizeof(struct ListNode));
//    struct ListNode* tail = newnode;
//    while (list1 && list2)
//    {
//        if (list1->val < list2->val)
//        {
//            tail->next = list1;
//            tail = tail->next;
//            list1 = list1->next;
//        }
//        else
//        {
//            tail->next = list2;
//            tail = tail->next;
//            list2 = list2->next;
//        }
//    }
//    if (list1)
//    {
//        tail->next = list1;
//    }
//    if (list2)
//    {
//        tail->next = list2;
//    }
//    return newnode->next;
//}


//#include<stdio.h>
//#include<stdlib.h>
//struct ListNode
//{
//    int val;
//    struct ListNode* next;
//};
//
//struct ListNode* partition(struct ListNode* pHead, int x)
//{
//    struct ListNode* phead = (struct ListNode*)malloc(sizeof(struct ListNode));
//    struct ListNode* cur = phead;
//    struct ListNode* tail = phead;
//    while (pHead)
//    {
//        if (pHead->val < x)
//        {
//            cur->next = pHead;
//            cur = cur->next;
//            pHead = pHead->next;
//        }
//        else
//        {
//            while (tail->next)
//            {
//                tail = tail->next;
//            }
//            tail->next = pHead;
//            pHead = pHead->next;
//        }
//    }
//    while (tail->next)
//    {
//        tail = tail->next;
//    }
//    tail->next = NULL;
//    return phead->next;
//}
//struct ListNode* removeelements(struct ListNode* head, int val)
//{
//    if (head == NULL)
//        return NULL;
//    while (NULL != head && head->val == val)
//    {
//        head = head->next;
//    }
//    struct ListNode* pre = head;
//    struct ListNode* cur = head;
//    while (cur)
//    {
//        if (cur->val == val)
//        {
//            pre->next = cur->next;
//        }
//        else
//            pre = cur;
//        cur = cur->next;
//    }
//    return head;
//}
//
//
//int main()
//{
//    struct ListNode* n1 = (struct ListNode*)malloc(sizeof(struct ListNode));
//    struct ListNode* n2 = (struct ListNode*)malloc(sizeof(struct ListNode));
//    struct ListNode* n3 = (struct ListNode*)malloc(sizeof(struct ListNode));
//    struct ListNode* n4 = (struct ListNode*)malloc(sizeof(struct ListNode));
//    struct ListNode* n5 = (struct ListNode*)malloc(sizeof(struct ListNode));
//    n1->val = 1;
//    n2->val = 3;
//    n3->val = 1;
//    n4->val = 2;
//    n5->val = 5;
//    n1->next = n2;
//    n2->next = n3;
//    n3->next = n4;
//    n4->next = n5;
//    n5->next = NULL;
//    struct ListNode* phead = removeelements(n1, 7);
//    while (phead)
//    {
//        printf("%d ", phead->val);
//        phead = phead->next;
//    }    
//    phead=partition(phead, 3);
//
//    return 0;
//}