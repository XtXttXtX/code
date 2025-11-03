#define _CRT_SECURE_NO_WARNINGS 1
#include"tree.h"
#include"Queue.h"



//申请结点
BTNode* BuyNode(BTDataType x)
{
	BTNode* newnode = (BTNode*)malloc(sizeof(BTNode));
	if (newnode == NULL)
	{
		perror("malloc faile!");
		exit(1);
	}
	newnode->data = x;
	newnode->left = newnode->right = NULL;
	return newnode;
}

//前序遍历
void BinaryPrevOrder(BTNode* root)
{
	if (root == NULL)
	{
		return;
	}
	printf("%d ", root->data);
	BinaryPrevOrder(root->left);
	BinaryPrevOrder(root->right);
}

//中序遍历
void BinaryInOrder(BTNode* root)
{
	if (root == NULL)
	{
		return;
	}
	BinaryPrevOrder(root->left);
	printf("%d ", root->data);
	BinaryPrevOrder(root->right);
}

//后序遍历
void BinaryPostOrder(BTNode* root)
{
	if (root == NULL)
	{
		return;
	}
	BinaryPrevOrder(root->left);
	BinaryPrevOrder(root->right);
	printf("%d ", root->data);
}

//层序遍历
void BinaryLevelOrder(BTNode* root)
{
	Queue q;
	QueueInit(&q);//初始化队列
	if (root != NULL)
	{
		QueuePush(&q, root);
	}
	//当队列不为空时，循环继续
	while (!QueueEmpty(&q))
	{
		BTNode* front = QueueFront(&q);//读取队头元素
		QueuePop(&q);
		if (front->left)
		{
			QueuePush(&q,front->left);
		}
		if (front->right)
		{
			QueuePush(&q, front->right);
		}
	}
	QueueDestroy(&q);
}

//结点个数
int BinaryTreeSize(BTNode* root)
{
	if (root == NULL)
	{
		return 0;
	}
	return BinaryTreeSize(root->left) + BinaryTreeSize(root->right) + 1;
}

//叶子结点的个数
int BinaryTreeLeafSize(BTNode* root)
{
	if (root == NULL)
	{
		return NULL;
	}
	if (root->left == NULL && root->right == NULL)
	{
		return NULL;
	}
	return BinaryTreeLeafSize(root->left) + BinaryTreeLeafSize(root->right);
}

//第K层结点的个数
int BinaryTreeKLevelSize(BTNode* root, int k)
{
	//空树或输入k值不合法
	if (k < 1 || root == NULL)
	{
		return 0;
	}
	//第一层结点个数
	if (k == 1)
	{
		return 0;
	}
	//相对于父结点的第k层的结点个数 = 相对于两个孩子结点的第k-1层的结点个数之和
	return BinaryTreeKLevelSize(root->left, k - 1) + BinaryTreeKLevelSize(root->right, k - 1);
}

//查找值为X的结点
BTNode* BinaryTreeFind(BTNode* root, BTDataType x)
{
	if (root == NULL)
	{
		return NULL;
	}
	if (*root->data == x)
	{
		return root;
	}
	BTNode* lret = BinaryTreeFind(root->left,x);
	if (lret)
	{
		return lret;
	}
		
	BTNode* rret = BinaryTreeFind(root->right, x);
	if (rret)
	{
		return rret;
	}
	return NULL;//根结点和左右子树中均没有找到
}