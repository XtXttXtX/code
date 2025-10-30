#define _CRT_SECURE_NO_WARNINGS 1

#include "Heap.h"

//交换函数
void swap(HPDateType* p1, HPDateType* p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

//向下调整(小堆)
void AdjustDown(HPDateType* a, int n, int parent)
{
	//child记录左右孩子中值较小的孩子的下标
	int child = parent * 2 + 1;//假设左孩子的值较小
	while (child < n)
	{
		//右孩子存在并且右孩子比左孩子小
		if (child + 1 < n && a[child + 1] < a[child])
		{
			child++;//较小的孩子改为右孩子
		}
		//较小的孩子的值比父结点的值小
		if (a[child] < a[parent])
		{
			//将父结点与较小的子结点交换
			swap(&a[child], &a[parent]);
			//继续向下调整
			parent = child;
			child = parent * 2 + 1;
		}
		//已成堆
		else
		{
			break;
		}
	}
}

//向上调整(小堆)
void AdjustUp(HPDateType* a, int child)
{
	int parent = (child - 1) / 2;
	//调整到根节点的位置截止
	while (child > 0)
	{
		//孩子结点的值小于父结点的值
		if (a[child] < a[parent])
		{
			//将父结点与孩子结点进行交换
			swap(&a[child], &a[parent]);
			//继续向上进行调整
			child = parent;
			parent = (child - 1) / 2;
		}
		//已成堆
		else
		{
			break;
		}
	}
}

//初始化
void HeapInit(HP* php)
{
	assert(php);
	php->a = NULL;
	php->size = 0;
	php->capacity = 0;
}

//销毁
void HeapDestroy(HP* php)
{
	assert(php);
	free(php->a);//释放动态开辟的数组
	php->a = NULL;//及时置空
	php->size = 0;//元素个数置0
	php->capacity = 0;//容量置0
}


//打印
void HeapPrint(HP* php)
{
	assert(php);

	//按照物理结构进行打印
	int i = 0;
	for (i = 0; i < php->size; i++)
	{
		printf("%d ", php->a[i]);
	}
	printf("\n");


}

//插入
void HeapPush(HP* php, HPDateType x)
{
	assert(php);
	if (php->size == php->capacity)
	{
		HPDateType* tmp = (HPDateType*)realloc(php->a, 2 * php->capacity * sizeof(HPDateType));
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		php->a = tmp;
		php->capacity *= 2;
	}
	php->a[php->size] = x;
	php->size++;
	//向上调整
	AdjustUp(php->a, php->size - 1);
}

//判断是否为空
bool HeapEmpty(HP* php)
{
	assert(php);
	return php->size == 0;
}

//删除
void HeapPop(HP* php)
{
	assert(php);
	assert(!HeapEmpty(php));
	swap(&php->a[0], &php->a[php->size - 1]);//交换堆顶和最后一个结点的位置
	php->size--;//删除最后一个结点(也就是删除原来堆顶的元素)
	AdjustDown(php->a, php->size, 0);//向下调整
}

//获得堆顶元素
HPDateType HeapTop(HP* php)
{
	assert(php);
	assert(!HeapEmpty(php));
	return php->a[0];
}

//获取堆中数据个数
int HeapSize(HP* php)
{
	assert(php);
	return php->size;
}

//堆的创建，向上调整
void HeapUpCreate(HP* php, HPDateType* a, int n)
{
	assert(php);
	assert(a);
	HeapInit(php);//初始化堆
	for (int i = 0; i < n; i++)
	{
		//i==0，相当于直接插入a[0]
		//i>0，向堆的末端插入a[i]，然后进行向上调整
		HeapPush(php, a[i]);
	}
}

//堆的创建，向下调整
void HeapDownCreate(HP* php, HPDateType* a, int n)
{
	assert(php);
	assert(a);
	HeapInit(php);//初始化堆

	//将数组的n个元素拷贝到堆中
	if (php->capacity < n)//容量不足先扩容
	{
		HPDateType* tmp = realloc(php->a, n * sizeof(HPDateType));
		if (tmp)
			php->a = tmp;
		else
			exit(-1);

		php->capacity = n;
	}
	memcpy(php->a, a, sizeof(HPDateType) * n);
	php->size = n;

	//从后往前逐元素向下调整建堆
	//n-1最后一个叶子结点的下标
	//(n-1-1)/2最后一个叶子结点的父结点的下标，即第一个非叶子结点
	for (int i = (n - 1 - 1) / 2; i >= 0; i--)
	{
		AdjustDown(php->a, n, i);
	}
}

//堆的排序，升序
void HeapSort(HP* php)
{
	//先使用向下调整建大堆
	for (int i = (php->size - 1 - 1) / 2; i >= 0; i--)
	{
		AdjustDown(php->a, php->size, i);
	}
	for (int i = php->size - 1; i > 0; i--)
	{
		swap(&php->a[i], &php->a[0]);//交换堆顶元素和堆尾元素
		AdjustDown(php->a, i, 0);//堆顶元素向下调整
	}
}

//TOP-K问题
int* getLeastNumbers(int* arr, int arrSize, int k, int* returnSize)
{
	*returnSize = k;

}