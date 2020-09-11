#include<stdio.h>
#include <stdlib.h>//引用系统的头文件

typedef struct QNode {
	int data;
	QNode * next;
}LinkNode;//定义节点类型
typedef struct {
	LinkNode* front;
	LinkNode* rear;
}LinkQueue;

void InitQueue(LinkQueue& Q)
{
	//带头结点的初始化操作
	Q.front = Q.rear = (QNode*)malloc(sizeof(QNode));
	Q.front->next = NULL;
	
	//不带头结点的初始化操作
	//Q.front->next = NULL;
	//Q.rear->next = NULL;

}
//带头结点的入队操作
void enQueue1(LinkQueue& Q, int e)
{
	//带头结点的入队操作
	LinkNode *s=(QNode*)malloc(sizeof(QNode));
	s->data = e;
	s->next = NULL;
	Q.rear->next = s;
	Q.rear = s;

	//不带头结点的入队操作
	/*LinkNode* s = (QNode*)malloc(sizeof(QNode));
	s->data = e;
	s->next = NULL;
	if (Q.front == NULL)//空队列中插入第一个元素
	{
		Q.front = s;  修改队头队尾的指针
		Q.rear = s;
	}
	else {
		Q.rear->next = s;
		Q.rear = s;
	}*/

}

bool deQueue(LinkQueue& Q, int &x)
{
	//带头结点的出队操作
	if (Q.front == Q.rear)
		return false;
	LinkNode* s = (QNode*)malloc(sizeof(QNode));
	s = Q.front->next;
	x = s->data;
	Q.front->next = s->next;
	if (Q.rear == s)
	{
		Q.rear = Q.front;
	}
	free(s);
	return true;

	//不带头结点的出队操作
	/*if (Q.front == Q.rear)
		return false;
	LinkNode* s = (QNode*)malloc(sizeof(QNode));
	s = Q.front;
	s->data = x;
	Q.front = s->next;
	if (Q.rear = s)
	{
		Q.rear = NULL;
		Q.front = NULL;
	}
	free(s);
	return true;*/
}
int main15()
{
	LinkQueue Q;
	InitQueue(Q);

	enQueue1(Q,3);
	enQueue1(Q, 1);
	enQueue1(Q, 1);

	int x;
	deQueue(Q, x);
	printf("%d", x);
	return 0;



}