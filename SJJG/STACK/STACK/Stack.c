#define _CRT_SECURE_NO_WARNINGS 1

#include"Stack.h"

//初始化栈
void StackInit(Stack* ps)
{
	assert(ps);
	ps->a = (STDataType*)malloc(sizeof(STDataType) * 4);//初始化栈可存储4个元素
	ps->top = 0;//初始化时栈中无元素，栈顶为0
	ps->capacity = 4;//容量为4
}

//销毁栈
void StackDestroy(Stack* ps)
{
	assert(ps);
	free(ps->a);//释放栈
	ps->a = NULL;//及时置空
	ps->top = 0;//栈顶置0
	ps->capacity = 0;//容量置0
}

//入栈
void StackPush(Stack* ps, STDataType x)
{
	assert(ps);
	if (ps->top == ps->capacity)
	{
		STDataType* tmp = (STDataType*)realloc(ps->a, sizeof(STDataType) * ps->capacity * 2);
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		ps->a = tmp;
		ps->capacity *= 2;
	}
	ps->a[ps->top] = x;//栈顶位置存放元素x
	ps->top++;
}


//检测栈是否为空
bool StackEmpty(Stack* ps)
{
	assert(ps);
	return ps->top == 0;//如果top为0，返回true(栈空)；否则返回false(栈非空)
}

//出栈
void StackPop(Stack* ps)
{
	assert(ps);
	//assert(expression) 的工作方式：
	//如果 expression 为 true，断言通过，程序继续执行
	//如果 expression 为 false，断言失败，程序终止并输出错误信息
	assert(!StackEmpty(ps));
	ps->top--;
}

//获取栈顶元素
STDataType StackTop(Stack* ps)
{
	assert(ps);
	assert(!StackEmpty(ps));
	return ps->a[ps->top - 1];//返回栈顶元素
}

//获取栈中有效元素个数
int StackSize(Stack* ps)
{
	assert(ps);

	return ps->top;//top的值便是栈中有效元素的个数
}
