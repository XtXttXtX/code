#pragma once

#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>

typedef int HPDateType;//堆中存储数据的类型
typedef struct Heap
{
	HPDateType* a;//用于存储数据的数组
	int size;//记录堆中已有元素个数
	int capacity;//记录堆的容量
}HP;

//交换函数
void swap(HPDateType* p1, HPDateType* p2);

//向下调整
void AdjustDown(HPDateType* a, int n, int parent);

//向上调整
void AdjustUp(HPDateType* a, int child);

//初始化
void HeapInit(HP* php);

//销毁
void HeapDestroy(HP* php);

//打印
void HeapPrint(HP* php);

//插入
void HeapPush(HP* php, HPDateType x);

//判断是否为空
bool HeapEmpty(HP* php);

//删除
void HeapPop(HP* php);

//获得堆顶元素
HPDateType HeapTop(HP* php);

//获取堆中数据个数
int HeapSize(HP* php);

//堆的创建，向上调整
void HeapUpCreate(HP *php, HPDateType* a, int n);

//堆的创建，向下调整
void HeapDownCreate(HP* php, HPDateType* a, int n);

//堆的排序，升序
void HeapSort(HP* php);


//TOP-K问题
int* getLeastNumbers(int* arr, int arrSize, int k, int* returnSize);

