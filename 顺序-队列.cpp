#include<stdio.h>
#include <stdlib.h>//引用系统的头文件
#define MaxSize 10
typedef struct{
	int data[MaxSize];
	int front;
	int rear;
}sqQueue;

void InitQueue(sqQueue& Q)
{
	Q.front = Q.rear = 0;
}
bool QueueEmpty(sqQueue& Q)//p判断是否为空队列
{
	if (Q.front == Q.rear)
		return false;
}

//入队操作
bool enQueue(sqQueue& Q, int e)
{
	if ((Q.rear + 1) % MaxSize == Q.rear)//判断队满的条件
		return false;
	Q.data[Q.rear] = e;
	Q.rear = (Q.rear + 1) % MaxSize;//使得队尾指针形成一个环状
	return true;
}
//出队操作
bool deQueue(sqQueue& Q, int& x)
{
	if (Q.front == Q.rear)
		return false;
	x = Q.data[Q.front];
	
	Q.front = (Q.front + 1) % MaxSize; //使得队头指针形成一个环状
	return true;
}

int main14()
{
	sqQueue Q;
	InitQueue(Q);
	QueueEmpty(Q);
	enQueue(Q, 1);
	enQueue(Q, 2);
	enQueue(Q, 3);
	enQueue(Q, 4);

	int x;
	deQueue(Q, x);
	printf("%d", x);
	return 0;
}