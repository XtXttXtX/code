#define _CRT_SECURE_NO_WARNINGS 1
#include"Queue.h"

void QueueTest()
{
	Queue pq;
	QueueInit(&pq);
	QueuePush(&pq, 1);
	QueuePush(&pq, 2);
	QueuePush(&pq, 3);
	QueuePush(&pq, 4);
	while (!QueueEmpty(&pq))
	{
		printf("%d ", QueueFront(&pq));
		QueuePop(&pq);
	}
	printf("\n");
	QueueDestroy(&pq);
}

int main()
{
	QueueTest();
	return 0;
}