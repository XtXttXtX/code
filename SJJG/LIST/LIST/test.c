#define _CRT_SECURE_NO_WARNINGS 1
#include"List.h"

void TestList1()
{
	ListNode* plist = ListInit();
	ListPushBack(plist, 1);
	ListPushBack(plist, 2);
	ListPushBack(plist, 3);
	ListPushBack(plist, 4);
	ListPushBack(plist, 5);
	ListPrint(plist);

	ListPopBack(plist);
	ListPrint(plist);

	ListPushFront(plist, 20);
	ListPrint(plist);
}

void TestList2()
{
	ListNode* plist = ListInit();
	ListPushBack(plist, 1);
	ListPushBack(plist, 2);
	ListPushBack(plist, 3);
	ListPushBack(plist, 4);
	ListPushBack(plist, 5);
	ListPrint(plist);

	ListPopFront(plist);
	ListPrint(plist);

	ListSize(plist);
	printf("链表中的元素个数: %d\n", ListSize(plist));
}

void TestList3()
{
	ListNode* plist = ListInit();
	ListPushBack(plist, 1);
	ListPushBack(plist, 2);
	ListPushBack(plist, 3);
	ListPushBack(plist, 4);
	ListPushBack(plist, 5);
	ListPrint(plist);
	ListNode* pos = ListFind(plist, 3);
	ListInsert(pos, 20);
	ListPrint(plist);
}

void TestList4()
{
	ListNode* plist = ListInit();
	ListPushBack(plist, 1);
	ListPushBack(plist, 2);
	ListPushBack(plist, 3);
	ListPushBack(plist, 4);
	ListPushBack(plist, 5);
	ListPrint(plist);
	ListNode* pos = ListFind(plist, 3);
	ListErase(pos);
	ListPrint(plist);
}


int main()
{
	TestList4();
	return 0;
}
