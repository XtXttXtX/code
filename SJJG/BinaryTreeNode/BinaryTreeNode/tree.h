#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>

//创建链式结构二叉树的结构->二叉链
typedef int BTDataType;
typedef struct BinaryTreeNode
{
	BTDataType* data;
	struct BinaryTreeNode* left;//指定当前结点的左孩子
	struct BinaryTreeNode* right;//指定当前结点的右孩子
}BTNode;


//申请结点
BTNode* BuyNode(BTDataType x);

//前序遍历
void BinaryPrevOrder(BTNode* root);

//中序遍历
void BinaryInOrder(BTNode* root);

//后序遍历
void BinaryPostOrder(BTNode* root);

//层序遍历
void BinaryLevelOrder(BTNode* root);

//结点个数
int BinaryTreeSize(BTNode* root);

//叶子结点的个数
int BinaryTreeLeafSize(BTNode* root);

//第K层结点的个数
int BinaryTreeKLevelSize(BTNode* root, int k);

//查找值为X的结点
BTNode* BinaryTreeFind(BTNode* root,BTDataType x);