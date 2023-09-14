#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

#define datatype int

typedef struct TreeNode
{
	struct TreeNode* left;
	datatype val;
	struct TreeNode* right;
}TNode;

TNode* upTree(int x)
{
	TNode* node = (TNode*)malloc(sizeof(TNode));
	if (node == NULL)
	{
		perror("malloc fail");
		exit(-1);
	}
	node->val = x;
	node->left = NULL;
	node->right = NULL;
	return node;
}

void perorder(TNode* php)//前序
{
	if (php == NULL)
	{
		printf("NULL ");
		return;
	}
	printf("%d ", php->val);
	perorder(php->left);
	perorder(php->right);
}

void inorder(TNode* php)//中序
{
	if (php == NULL)
	{
		printf("NULL ");
		return;
	}
	perorder(php->left);
	printf("%d ", php->val);
	perorder(php->right);
}

void postorder(TNode* php)//后序
{
	if (php == NULL)
	{
		printf("NULL ");
		return;
	}
	perorder(php->left);
	perorder(php->right);
	printf("%d ", php->val);
}

int TreeSize(TNode* php)//统计所有结点个数
{
	if (php == NULL)
		return 0;
	else
		return 1 + TreeSize(php->left) + TreeSize(php->right);
}

int TreeLeafSize(TNode* php)//计算树中的叶子节点
{
	if (php == NULL)
		return 0;
	if (php->left == NULL && php->right == NULL)
		return 1;
	return TreeLeafSize(php->left) + TreeLeafSize(php->right);
}

int TreeLevelSize(TNode* php, int k)//统计第k层的结点个数
{
	assert(k>0);
	if (php == NULL)
		return 0;
	if (k == 1)
		return 1;
	return TreeLevelSize(php->left, k - 1) + TreeLevelSize(php->right, k - 1);
}

int main()
{
	TNode* node1 = upTree(1);
	TNode* node2 = upTree(2);
	TNode* node3 = upTree(3);
	TNode* node4 = upTree(4);
	TNode* node5 = upTree(5);
	TNode* node6 = upTree(6);
	node1->left = node2;
	node2->left = node3;
	node1->right = node4;
	node4->left = node5;
	node4->right = node6;
	perorder(node1);
	printf("\n");
	inorder(node1);
	printf("\n");
	postorder(node1);
	printf("\n");
	printf("%d\n",TreeSize(node1));
	printf("%d\n", TreeLeafSize(node1));
	printf("%d\n", TreeLevelSize(node1,2));
	return 0;
}