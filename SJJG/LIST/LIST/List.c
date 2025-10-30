#define _CRT_SECURE_NO_WARNINGS 1
#include"List.h"

//创建动态结点
ListNode* BuyListNode(LTDataType x)
{
	ListNode* node = (ListNode*)malloc(sizeof(ListNode));
	if (node == NULL)
	{
		perror("malloc fail");
		exit(-1);
	}
	node->data = x;
	node->next = NULL;
	node->prev = NULL;
	return node;
}

//初始化链表
ListNode* ListInit()
{
	ListNode* phead = BuyListNode(0);//申请一个头节点，头节点不存储有效数据
	//起始时只有头节点，让它的前驱和后继都指向自己
	phead->next = phead;
	phead->prev = phead;
	return phead;//返回头结点
}

//打印链表
void ListPrint(ListNode* phead)
{
	assert(phead);
	struct ListNode* cur = phead->next;
	while (cur != phead)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
	printf("\n");
}

//尾插
void ListPushBack(ListNode* phead, LTDataType x)
{
	assert(phead);
	ListNode* newnode = BuyListNode(x);//申请一个结点
	ListNode* tail = phead->prev;//记录头结点的前一个结点的位置
	//建立新结点与头结点之间的双向关系
	phead->prev = newnode;
	newnode->next = phead;
	//建立新结点与tail结点之间的双向关系
	tail->next = newnode;
	newnode->prev = tail;
}

//尾删
void ListPopBack(ListNode* phead)
{
	assert(phead);
	assert(phead->next != phead);
	ListNode* tail = phead->prev;//记录头结点的前一个结点
	ListNode* newtail = tail->prev;//记录tail结点的前一个结点
	//建立头结点与newtail结点之间的双向关系
	phead->prev = newtail;
	newtail->next = phead;
	free(tail);//释放tail结点，不需要置空是因为tail是局部变量
}

//头插
void ListPushFront(ListNode* phead, LTDataType x)
{
	assert(phead);
	ListNode* newnode = BuyListNode(x);
	ListNode* tail = phead->next;//记录头结点的后一个结点位置
	newnode->next = phead->next;
	newnode->prev = phead;
	phead->next = newnode;
	tail->prev = newnode;

}

//头删
void ListPopFront(ListNode* phead)
{
	assert(phead);
	assert(phead->next != phead);
	ListNode* tail = phead->next;//记录头结点的后一个结点
	ListNode* newtail = tail->next;//记录tail结点的后一个结点
	phead->next = newtail;
	newtail->prev = phead;
	free(tail);
}

//获取链表中的元素个数
int ListSize(ListNode* phead)
{
	assert(phead);
	int count = 0;
	ListNode* cur = phead->next;
	while (cur != phead)
	{
		count++;
		cur = cur->next;
	}
	return count;
}

//查找元素
ListNode* ListFind(ListNode* phead, LTDataType x)
{
	assert(phead);
	ListNode* cur = phead->next;
	while (cur->next != phead)
	{
		if (cur->data == x)
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}

//在指定位置插入结点
void ListInsert(ListNode* pos, LTDataType x)
{
	assert(pos);
	ListNode* before = pos->prev;//记录pos指向结点的前一个结点
	ListNode* newnode = BuyListNode(x);
	newnode->next = pos;
	newnode->prev = before;
	before->next = newnode;
	pos->prev = newnode;
}

//删除指定位置结点
void ListErase(ListNode* pos)
{
	assert(pos);
	ListNode* before = pos->prev;
	ListNode* after = pos->next;
	before->next = after;
	after->prev = before;
	free(pos);
}

//销毁链表
void ListDestroy(ListNode* phead)
{
	assert(phead);
	ListNode* cur = phead->next;
	ListNode* next = cur->next;
	while (cur != phead)
	{
		free(cur);
		cur = next;
		next = next->next;
	}
	free(phead);
}

//链表判空
bool ListEmpty(ListNode* phead)
{
	assert(phead);
	//函数返回true表示链表为空，false表示链表非空
	return phead->next == phead;
}

