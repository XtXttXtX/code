#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>

typedef int STDataType;//栈中存储的元素类型(以整形为例)

typedef struct Stack
{
	STDataType* a;//栈
	int top;//栈顶
	int capacity;//容量，方便增容
}Stack;


//初始化栈
void StackInit(Stack* ps);

//销毁栈
void StackDestroy(Stack* ps);

//入栈
void StackPush(Stack* ps,STDataType x);

//检测栈是否为空
bool StackEmpty(Stack* ps);

//出栈
void StackPop(Stack* ps);

//获取栈顶元素
STDataType StackTop(Stack* ps);