#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//����һ�������ͷ�ڵ� head ���ж��������Ƿ��л���
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
 

//���������������ͷ�ڵ� headA �� headB �������ҳ������������������ཻ����ʼ�ڵ㡣����������������ཻ�ڵ㣬���� null ��
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