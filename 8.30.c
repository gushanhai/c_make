#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//请实现一个函数，把字符串 s 中的每个空格替换成"%20"。
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

//输入一个链表的头节点，从尾到头反过来返回每个节点的值（用数组返回）。
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