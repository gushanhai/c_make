#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//��ʵ��һ�����������ַ��� s �е�ÿ���ո��滻��"%20"��
//char* replaceSpace(char* s) {
//    int n = 0;
//    char* tmp = (char*)malloc(strlen(s) * 3 + 1);
//    char* ret = tmp;
//    while (*s)
//    {
//        if (*s == ' ')
//        {
//            *tmp++ = '%';
//            *tmp++ = '2';
//            *tmp++ = '0';
//        }
//        else
//        {
//            *tmp++ = *s;
//        }
//        s++;
//    }
//    *tmp = '\0';
//    return ret;
//}

//����һ�������ͷ�ڵ㣬��β��ͷ����������ÿ���ڵ��ֵ�������鷵�أ���
///**
// * Definition for singly-linked list.
// * struct ListNode {
// *     int val;
// *     struct ListNode *next;
// * };
//  * Note: The returned array must be malloced, assume caller calls free().
//  */
//    int* reversePrint(struct ListNode* head, int* returnSize)
//{
//    int n = 0;
//    struct ListNode* tmp = head;
//    while (tmp)
//    {
//        n++;
//        tmp = tmp->next;
//    }
//    *returnSize = n;
//    tmp = head;
//    int* ret = (int*)malloc(4 * n);
//    n -= 1;
//    while (tmp)
//    {
//        *(ret + n--) = tmp->val;
//        tmp = tmp->next;
//    }
//    return ret;
//}

//����һ��������������ͷ head �� ɾ�������ظ���Ԫ�أ�ʹÿ��Ԫ��ֻ����һ�� ������ ����������� ��
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
//    struct ListNode* deleteDuplicates(struct ListNode* head)
//{
//    if (head == NULL)
//        return head;
//    struct ListNode* tmp = head;
//    while (tmp->next)
//    {
//        struct ListNode* next = tmp->next;
//        if (tmp->val == next->val)
//        {
//            tmp->next = next->next;
//            //free(next);
//        }
//        else
//            tmp = tmp->next;
//    }
//    return head;
//}