#include<stdio.h>
#include <stdlib.h>//����ϵͳ��ͷ�ļ�
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
bool QueueEmpty(sqQueue& Q)//p�ж��Ƿ�Ϊ�ն���
{
	if (Q.front == Q.rear)
		return false;
}

//��Ӳ���
bool enQueue(sqQueue& Q, int e)
{
	if ((Q.rear + 1) % MaxSize == Q.rear)//�ж϶���������
		return false;
	Q.data[Q.rear] = e;
	Q.rear = (Q.rear + 1) % MaxSize;//ʹ�ö�βָ���γ�һ����״
	return true;
}
//���Ӳ���
bool deQueue(sqQueue& Q, int& x)
{
	if (Q.front == Q.rear)
		return false;
	x = Q.data[Q.front];
	
	Q.front = (Q.front + 1) % MaxSize; //ʹ�ö�ͷָ���γ�һ����״
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