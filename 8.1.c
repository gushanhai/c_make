#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//给你一个链表的头节点 head 和一个整数 val ，请你删除链表中所有满足 Node.val == val 的节点，并返回 新的头节点 。
//Definition for singly-linked list.
//第一种:
//#include<stdio.h>
//#include<stdlib.h>
//struct ListNode
//{
//    int val;
//    struct ListNode* next;
//};

//struct ListNode* removeElements(struct ListNode* head, int val)
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

//int main()
//{
//    struct ListNode* n1 = (struct ListNode*)malloc(sizeof(struct ListNode));
//    struct ListNode* n2 = (struct ListNode*)malloc(sizeof(struct ListNode));
//    struct ListNode* n3 = (struct ListNode*)malloc(sizeof(struct ListNode));
//    struct ListNode* n4 = (struct ListNode*)malloc(sizeof(struct ListNode));
//    struct ListNode* n5 = (struct ListNode*)malloc(sizeof(struct ListNode));
//    n1->val = 7;
//    n2->val = 7;
//    n3->val = 7;
//    n4->val = 7;
//    n5->val = 7;
//    n1->next = n2;
//    n2->next = n3;
//    n3->next = n4;
//    n4->next = n5;
//    n5->next = NULL;
//    while (n1)
//    {
//        printf("%d ", n1->val);
//        n1 = n1->next;
//    }
//    struct ListNode* phead = removeElements(n1, 7);
//    while (phead)
//    {
//        printf("%d", phead->val);
//        phead = phead->next;
//    }
//    return 0;
//}

//尾插版本：
//struct ListNode* removeElements(struct ListNode* head, int val)
//{
//    if (head == NULL)
//        return head;
//    while (head != NULL && head->val == val)
//    {
//        head = head->next;
//    }
//    struct ListNode* newnode = NULL;
//    struct ListNode* tail = newnode;
//    while (head)
//    {
//        if (head->val == val)
//        {
//            struct ListNode* del = head;
//            head = head->next;
//            free(del);
//        }
//        else
//        {
//            //尾插  
//            if (newnode == NULL)
//            {
//                newnode = head;
//                tail = head;
//            }
//            else
//            {
//                tail->next = head;
//                tail = tail->next;
//            }
//            head = head->next;
//        }
//        tail->next = NULL;
//    }
//    return newnode;
//}

//给你单链表的头结点 head ，请你找出并返回链表的中间结点。
//如果有两个中间结点，则返回第二个中间结点。
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

//第一种方法：遍历
//struct ListNode* middleNode(struct ListNode* head)
//{
//    struct ListNode* cur = head;
//    int lhong = 0;
//    while (cur)
//    {
//        lhong++;
//        cur = cur->next;
//    }
//    cur = head;
//    int llhong = lhong / 2;
//    while (llhong--)
//    {
//        cur = cur->next;
//    }
//    return cur;
//}

//第二种：快慢指针
//struct ListNode* middleNode(struct ListNode* head)
//{
//    if (head == NULL)
//        return head;
//    struct ListNode* fast = head;
//    struct ListNode* slow = head;
//    while (fast && fast->next)
//    {
//        slow = slow->next;
//        fast = fast->next->next;
//    }
//    return slow;
//}

//5.将两个有序链表合并为一个新的有序链表并返回。新链表是通过拼接给定的两个链表的所有节点组成的
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
//struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2)
//{
//    if (list1 == NULL)
//        return list2;
//    if (list2 == NULL)
//        return list1;
//    struct ListNode* head = NULL;
//    struct ListNode* tail = NULL;
//    while (list1 && list2)
//    {
//        if (list1->val < list2->val)
//        {
//            if (tail == NULL)
//                tail = head = list1;
//            else
//            {
//                head->next = list1;
//                head = head->next;
//            }
//            list1 = list1->next;
//        }
//        else
//        {
//            if (tail == NULL)
//                tail = head = list2;
//            else
//            {
//                head->next = list2;
//                head = head->next;
//            }
//            list2 = list2->next;
//        }
//    }
//    if (list1)
//    {
//        head->next = list1;
//    }
//    if (list2)
//    {
//        head->next = list2;
//    }
//    return tail;
//}

//输入一个链表，输出该链表中倒数第k个结点。
/**
 * struct ListNode {
 *  int val;
 *  struct ListNode *next;
 * };
 */

 /**
  *
  * @param pListHead ListNode类
  * @param k int整型
  * @return ListNode类
  */
//    struct ListNode* FindKthToTail(struct ListNode* pListHead, int k) {
//    // write code here
//    struct ListNode* fast = pListHead;
//    struct ListNode* slow = pListHead;
//    while (k--)
//    {
//		  //如果fast为空说明链表没有k步长
//        if (fast == NULL)
//            return NULL;
//        fast = fast->next;
//    }
//    while (fast)
//    {
//        fast = fast->next;
//        slow = slow->next;
//    }
//    return slow;
//}	

//2.反转一个单链表
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

//第二种办法的第一种写法：
//struct ListNode* reverseList(struct ListNode* head)
//{
//    struct ListNode* tail = NULL;
//    struct ListNode* list = NULL;
//    while (head)
//    {
//        if (tail == NULL)
//        {
//            tail = list = head;
//            head = head->next;
//            list->next = NULL;
//        }
//        else
//        {
//            tail = head;
//            head = head->next;
//            tail->next = list;
//            list = tail;
//        }
//    }
//    return tail;
//}

//第二种方法的第二种写法:
struct ListNode* reverseList(struct ListNode* head)
{
    struct ListNode* newnode = NULL;
    struct ListNode* cur = head;
    while (cur)
    {
        struct ListNode* next = cur->next;
        cur->next = newnode;
        newnode = cur;
        cur = next;
    }
    return newnode;
}