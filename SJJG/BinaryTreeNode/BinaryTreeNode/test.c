#define _CRT_SECURE_NO_WARNINGS 1

#include"tree.h"

BTNode* CreateTree()
{
	BTNode* node1 = BuyNode(1);
	BTNode* node2 = BuyNode(2);
	BTNode* node3 = BuyNode(3);
	BTNode* node4 = BuyNode(4);

	node1->left = node2;
	node1->right = node3;
	node2->left = node4;

	return node1;

}

int main()
{
	BTNode* node = CreateTree();
	BinaryPrevOrder(node);
	printf("\n");
	/*InOrder(node);
	printf("\n");
	PosOrder(node);*/

	/*printf("NodeSize:%d\n", BinaryTreeSize(node));
	printf("NodeSize:%d\n", BinaryTreeSize(node));
	printf("NodeSize:%d\n", BinaryTreeSize(node));

	printf("LeafSize：%d\n", BinaryTreeLeafSize(node));

	printf("%d\n", BinaryTreeLevelKSize(node, 3));

	printf("%d\n", BinaryTreeDepth(node));

	BTNode* find = BinaryFind(node, 22);
	printf("%s\n", find == NULL ? "没找到\n" : "找到了！\n");

	LevelBinaryTree(node);

	bool ret = BinaryTreeComplete(node);
	printf("%s\n", ret == false ? "不是完全二叉树\n" : "是完全二叉树\n");

	BinaryTreeDestroy(&node);*/

	return 0;
}