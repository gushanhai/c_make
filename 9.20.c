//��һ�����򣬶����û������һ����������ַ��������ݴ��ַ�������һ������������ָ�뷽ʽ�洢����
//�������µ���������ַ����� ABC##DE#G##F### ���С�#����ʾ���ǿո񣬿ո��ַ����������������˶������Ժ��ٶԶ������������������������������

//��һ��д����
//#include <stdio.h>
//#include<string.h>
//#include<stdlib.h>
//
//typedef struct tree
//{
//    char val;
//    struct tree* left;
//    struct tree* right;
//}tree;
//
//void creat(tree* ptr, int* i, char* str, int len)
//{
//    if (*i < len)
//    {
//        ptr->left = (tree*)malloc(sizeof(tree));
//        if (str[*i] == '#')
//        {
//            ptr->left = NULL;
//            (*i)++;
//        }
//        else
//        {
//            ptr->left->val = str[(*i)++];
//            creat(ptr->left, i, str, len);
//        }
//        ptr->right = (tree*)malloc(sizeof(tree));
//        if (str[(*i)] == '#')
//        {
//            ptr->right = NULL;
//            (*i)++;
//        }
//        else
//        {
//            ptr->right->val = str[(*i)++];
//            creat(ptr->right, i, str, len);
//        }
//    }
//}
//
//void inorder(tree* ptr)
//{
//    if (ptr == NULL)
//        return;
//    inorder(ptr->left);
//    printf("%c ", ptr->val);
//    inorder(ptr->right);
//}
//
//int main()
//{
//    char str[101];
//    scanf("%s", str);
//    int len = strlen(str);
//    tree* ptr = (tree*)malloc(sizeof(tree));
//    ptr->left = ptr->right = NULL;
//    int i = 0;
//    ptr->val = str[i++];
//    creat(ptr, &i, str, len);
//    inorder(ptr);
//    return 0;
//}

//�ڶ���д��:
#include <stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct tree
{
    char val;
    struct tree* left;
    struct tree* right;
}tree;

tree* creat(int* i, char* str)
{
    if (str[*i] == '#')
    {
        (*i)++;
        return NULL;
    }
    tree* ptr = (tree*)malloc(sizeof(tree));
    ptr->val = str[(*i)++];
    ptr->left = creat(i, str);
    ptr->right = creat(i, str);
    return ptr;
}

void inorder(tree* ptr)
{
    if (ptr == NULL)
        return;
    inorder(ptr->left);
    printf("%c ", ptr->val);
    inorder(ptr->right);
}

int main()
{
    char str[101];
    scanf("%s", str);
    int len = strlen(str);
    int i = 0;
    tree* ptr = creat(&i, str);
    inorder(ptr);
    return 0;
}