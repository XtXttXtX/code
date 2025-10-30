#define _CRT_SECURE_NO_WARNINGS 1
#include "Heap.h"

int main()
{
	//int a[] = { 65,100,70,32,50,60 };
	//HP hp;
	//HeapInit(&hp);
	//for (int i = 0; i < sizeof(a) / sizeof(int); i++)
	//{
	//	HeapPush(&hp, a[i]);
	//}
	//HeapPrint(&hp);

	//HP hp;
	//HPDateType array[] = { 27,15,19,18,28,34,14 };
	//HeapUpCreate(&hp, array, sizeof(array) / sizeof(HPDateType)); //根据array数组创建堆
	//HeapPrint(&hp);
	//HeapDestroy(&hp); //不再使用销毁堆

	//HP hp;
	//HPDateType array[] = { 27,15,19,18,28,34,14 };
	//HeapDownCreate(&hp, array, sizeof(array) / sizeof(HPDateType)); //根据array数组创建堆
	//HeapPrint(&hp);
	//HeapDestroy(&hp); //不再使用就销毁堆

	int a[] = { 65,100,70,32,50,60 };
	HP hp;
	HeapInit(&hp);
	for (int i = 0; i < sizeof(a) / sizeof(int); i++)
	{
		HeapPush(&hp, a[i]);
	}
	HeapSort(&hp);
	HeapPrint(&hp);
	HeapDestroy(&hp);
	return 0;
}
