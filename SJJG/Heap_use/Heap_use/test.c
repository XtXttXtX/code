#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//void Swap(int* a, int* b)
//{
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//
////堆的向下调整(大堆)
//void AdjustDown(int* arr, int n, int parent)
//{
//	int child = parent * 2 + 1;//左孩子
//	while (child < n)
//	{
//		if (child + 1 < n && arr[child + 1] > arr[child])
//		{
//			child = child + 1;
//		}
//		if (arr[child] > arr[parent])
//		{
//			Swap(&arr[child], &arr[parent]);
//			parent = child;
//			child = 2 * parent + 1;
//		}
//		else
//		{
//			break;
//		}
//	}
//}
//
//int* getBiggestNumbers(int* arr, int arrSize, int k, int* returnSize)
//{
//	*returnSize = k;
//	int i = 0;
//	//建大堆
//	for (i = (arrSize - 1 - 1) / 2; i >= 0; i--)
//	{
//		AdjustDown(arr, arrSize, i);
//	}
//
//	//将最大的k个数存入数组
//	int* retArr = (int*)malloc(sizeof(int) * k);
//	int end = arrSize - 1;
//	for (i = 0; i < k; i++)
//	{
//		retArr[i] = arr[0];//取堆顶的数据
//		Swap(&arr[0], &arr[end]);//交换堆顶数据与最后一个数据
//		//进行一次向下调整，不把最后一个数据看作待调整的数据，所以待调整的数据为end=arrSize-1
//		AdjustDown(arr, end, 0);
//		end--;
//	}
//	return retArr;
//}


void Swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

//堆的向下调整(小堆)
void AdjustDown(int* arr, int n, int parent)
{
	int child = parent * 2 + 1;//左孩子
	while (child < n)
	{
		if (child + 1 < n && arr[child + 1] > arr[child])
		{
			child = child + 1;
		}
		if (arr[child] < arr[parent])
		{
			Swap(&arr[child], &arr[parent]);
			parent = child;
			child = 2 * parent + 1;
		}
		else
		{
			break;
		}
	}
}

int* getBiggestNumbers(int* arr, int arrSize, int k, int* returnSize)
{
	*returnSize = k;
	if (k == 0)
	{
		return NULL;
	}
	//用数组的前k个数建小堆
	int* retArr = (int*)malloc(sizeof(int) * k);
	int i = 0;
	for (i = 0; i < k; i++)
	{
		retArr[i] = arr[i];
	}
	for (i = (k - 1 - 1) / 2; i >= 0; i--)
	{
		AdjustDown(retArr, k, i);
	}
	//剩下的N-K个数依次与堆顶数据比较
	for (i = k; i < arrSize; i++)
	{
		if (retArr[0] < arr[i])
		{
			retArr[0] = arr[i];
		}
		AdjustDown(retArr, k, 0);
	}
	return retArr;

}
