//����һ���������ĸ��ڵ� root ������ ���� ���� ���� ��
///**
// * Definition for a binary tree node.
// * struct TreeNode {
// *     int val;
// *     struct TreeNode *left;
// *     struct TreeNode *right;
// * };
// */
// /**
//  * Note: The returned array must be malloced, assume caller calls free().
//  */
 

 
//    int inorder(struct TreeNode* root)
//{
//    if (root == NULL)
//        return 0;
//    return inorder(root->left) + inorder(root->right) + 1;
//}
//
//void inordernum(struct TreeNode* root, int* num, int* ret)
//{
//    if (root == NULL)
//        return;
//    if (root->left)
//        inordernum(root->left, num, ret);
//    ret[(*num)++] = root->val;
//    if (root->right)
//        inordernum(root->right, num, ret);
//}
//
//int* inorderTraversal(struct TreeNode* root, int* returnSize)
//{
//    int num = inorder(root);
//    int* ret = (int*)malloc(sizeof(int) * num);
//    int i = 0;
//    inordernum(root, &i, ret);
//    *returnSize = num;
//    return ret;
//}

//����һ�ö������ĸ��ڵ� root ��������ڵ�ֵ�� ������� ��
///**
// * Definition for a binary tree node.
// * struct TreeNode {
// *     int val;
// *     struct TreeNode *left;
// *     struct TreeNode *right;
// * };
// */
//
// /**
//  * Note: The returned array must be malloced, assume caller calls free().
//  */
//
//    int Size(struct TreeNode* root)
//{
//    return root == NULL ? 0 : Size(root->left) + Size(root->right) + 1;
//}
//
//void postorder(struct TreeNode* root, int* i, int* ret)
//{
//    if (root == NULL)
//        return;
//    if (root->left)
//        postorder(root->left, i, ret);
//    if (root->right)
//        postorder(root->right, i, ret);
//    ret[(*i)++] = root->val;
//
//}
//
//int* postorderTraversal(struct TreeNode* root, int* returnSize)
//{
//    int n = Size(root);
//    *returnSize = n;
//    int* ret = (int*)malloc(sizeof(int) * n);
//    int i = 0;
//    postorder(root, &i, ret);
//    return ret;
//}


//����������ĸ��ڵ� root ���������ڵ�ֵ�� ǰ�� ������
//
///**
// * Definition for a binary tree node.
// * struct TreeNode {
// *     int val;
// *     struct TreeNode *left;
// *     struct TreeNode *right;
// * };
// */
// /**
//  * Note: The returned array must be malloced, assume caller calls free().
//  */
//
//    int Size(struct TreeNode* root)
//{
//    return root == NULL ? 0 : Size(root->left) + Size(root->right) + 1;
//}
//
//void perTree(struct TreeNode* root, int* i, int* ret)
//{
//    if (root == NULL)
//        return;
//    ret[(*i)++] = root->val;
//    if (root->left)
//        perTree(root->left, i, ret);
//    if (root->right)
//        perTree(root->right, i, ret);
//}
//
//int* preorderTraversal(struct TreeNode* root, int* returnSize)
//{
//    int n = Size(root);
//    int* ret = (int*)malloc(sizeof(int) * n);
//    int i = 0;
//    perTree(root, &i, ret);
//    *returnSize = n;
//    return ret;
//}

//����һ���������ĸ��ڵ� root �� ������Ƿ���Գơ�
///**
// * Definition for a binary tree node.
// * struct TreeNode {
// *     int val;
// *     struct TreeNode *left;
// *     struct TreeNode *right;
// * };
// */
//
//    bool _isSymmetric(struct TreeNode* rootleft, struct TreeNode* rootright)
//{
//    if (rootleft == NULL && rootright == NULL)
//        return true;
//    if (rootleft == NULL || rootright == NULL)
//        return false;
//    if (rootleft->val != rootright->val)
//        return false;
//    return _isSymmetric(rootleft->left, rootright->right) && _isSymmetric(rootleft->right, rootright->left);
//}
//
//bool isSymmetric(struct TreeNode* root)
//{
//    return _isSymmetric(root->left, root->right);
//}