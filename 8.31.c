#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
//����һ���������ͷ�ڵ� head �������жϸ������Ƿ�Ϊ������������ǣ����� true �����򣬷��� false ��
//��һ�ַ���:
///**
// * Definition for singly-linked list.
// * struct ListNode {
// *     int val;
// *     struct ListNode *next;
// * };
// */
//    bool isPalindrome(struct ListNode* head) {
//    struct ListNode* tmp = head;
//    int n = 0;
//    int arr[700000];
//    while (tmp)
//    {
//        arr[n++] = tmp->val;
//        tmp = tmp->next;
//    }
//    for (int i = 0; i < n; i++)
//    {
//        if (arr[i] != arr[n - 1 - i])
//            return false;
//    }
//    return true;
//}


//�ڶ��ַ�����
///**
// * Definition for singly-linked list.
// * struct ListNode {
// *     int val;
// *     struct ListNode *next;
// * };
// */
//bool isPalindrome(struct ListNode* head) {
//    if (head->next == NULL || head == NULL)
//        return true;
//    struct ListNode* fast, * slow;
//    fast = head->next->next;
//    slow = head->next;
//    while (fast && fast->next)
//    {
//        fast = fast->next->next;
//        slow = slow->next;
//    }
//    struct ListNode* per, * next;
//    per = next = NULL;
//    while (head != slow)
//    {
//        next = head->next;
//        head->next = per;
//        per = head;
//        head = next;
//    }
//    if (fast && fast->next == NULL)
//        slow = slow->next;
//    while (per != NULL)
//    {
//        if (per->val != slow->val)
//            return false;
//        per = per->next;
//        slow = slow->next;
//    }
//    return true;
//}

//���������ַ��� haystack �� needle �������� haystack �ַ������ҳ� needle �ַ����ĵ�һ��ƥ������±꣨�±�� 0 ��ʼ������� needle ���� haystack ��һ���֣��򷵻� - 1 ��\
//int strStr(char* haystack, char* needle) {
//    int i = 0;
//    int x = 0;
//    while (*haystack)
//    {
//        if (*haystack == *needle)
//        {
//            i = 0;
//            char* tmp = haystack;
//            char* n = needle;
//            while (*n)
//            {
//                if (*n++ == *tmp++)
//                {
//                    i++;
//                }
//                else
//                    break;
//            }
//            if (i == strlen(needle))
//                return x;
//        }
//        haystack++;
//        x++;
//    }
//    return -1;
//}