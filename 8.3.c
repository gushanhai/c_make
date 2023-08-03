#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//给你一个链表的头节点 head ，判断链表中是否有环。
///**
// * Definition for singly-linked list.
// * struct ListNode {
// *     int val;
// *     struct ListNode *next;
// * };
// */
//bool hasCycle(struct ListNode* head)
//{
//    struct ListNode* fast = head;
//    struct ListNode* slow = head;
//    while (fast && fast->next)
//    {
//        fast = fast->next->next;
//        slow = slow->next;
//        if (fast == slow)
//            return true;
//    }
//    return false;
//}
 

//给你两个单链表的头节点 headA 和 headB ，请你找出并返回两个单链表相交的起始节点。如果两个链表不存在相交节点，返回 null 。
///**
// * Definition for singly-linked list.
// * struct ListNode {
// *     int val;
// *     struct ListNode *next;
// * };
// */
//    struct ListNode* getIntersectionNode(struct ListNode* headA, struct ListNode* headB)
//{
//    int sz1 = 0;
//    int sz2 = 0;
//    struct ListNode* head1 = headA;
//    struct ListNode* head2 = headB;
//    while (head1)
//    {
//        sz1++;
//        head1 = head1->next;
//    }
//    while (head2)
//    {
//        sz2++;
//        head2 = head2->next;
//    }
//    head1 = headA;
//    head2 = headB;
//    int sz = 0;
//    if (sz1 < sz2)
//    {
//        sz = sz2 - sz1;
//        while (sz--)
//        {
//            head2 = head2->next;
//        }
//    }
//    else
//    {
//        sz = sz1 - sz2;
//        while (sz--)
//        {
//            head1 = head1->next;
//        }
//    }
//    while (head1 && head2)
//    {
//        if (head1 == head2)
//            return head1;
//        head1 = head1->next;
//        head2 = head2->next;
//    }
//    return NULL;
//}