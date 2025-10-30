#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;

	//输入数据
	scanf("%d%d", &num1, &num2);
	//计算求和
	sum = num1 + num2;
	//输出结果
	printf("sum = %d\n", sum);

	return 0;
}