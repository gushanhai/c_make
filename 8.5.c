#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//���������������ͷ�ڵ� headA �� headB �������ҳ������������������ཻ����ʼ�ڵ㡣����������������ཻ�ڵ㣬���� null ��
///**
// * Definition for singly-linked list.
// * struct ListNode {
// *     int val;
// *     struct ListNode *next;
// * };
// */
//struct ListNode* getIntersectionNode(struct ListNode* headA, struct ListNode* headB)
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
//    int sz = abs(sz1 - sz2);
//    struct ListNode* longList = headA;
//    struct ListNode* shortList = headB;
//    if (sz1 < sz2)
//    {
//        longList = headB;
//        shortList = headA;
//    }
//    while (sz--)
//        longList = longList->next;
//    while (longList && shortList)
//    {
//        if (longList == shortList)
//            return longList;
//        longList = longList->next;
//        shortList = shortList->next;
//    }
//    return NULL;
//}

//����һ������Ϊ n ������ÿ���ڵ����һ���������ӵ����ָ�� random ����ָ�����ָ�������е��κνڵ��սڵ㡣
///**
// * Definition for a Node.
// * struct Node {
// *     int val;
// *     struct Node *next;
// *     struct Node *random;
// * };
// */
//
//    struct Node* copyRandomList(struct Node* head)
//{
//    if (head == NULL)
//        return NULL;
//    struct Node* list = head;
//    while (list)
//    {
//        struct Node* next = list->next;
//        struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
//        list->next = newnode;
//        newnode->val = list->val;
//        newnode->next = next;
//        list = next;
//    }
//    list = head;
//    struct Node* newnode = list->next;
//    while (list)
//    {
//        if (list->random == NULL)
//            list->next->random = NULL;
//        else
//        {
//            list->next->random = list->random->next;
//        }
//        list = list->next->next;
//    }
//    list = head;
//    struct Node* nhead = newnode;
//    while (nhead->next)
//    {
//        struct Node* next = nhead->next;
//        nhead->next = next->next;
//        nhead = next->next;
//        list->next = next;
//        list = next;
//    }
//    list->next = NULL;
//    return newnode;
//}