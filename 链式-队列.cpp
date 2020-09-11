#include<stdio.h>
#include <stdlib.h>//����ϵͳ��ͷ�ļ�

typedef struct QNode {
	int data;
	QNode * next;
}LinkNode;//����ڵ�����
typedef struct {
	LinkNode* front;
	LinkNode* rear;
}LinkQueue;

void InitQueue(LinkQueue& Q)
{
	//��ͷ���ĳ�ʼ������
	Q.front = Q.rear = (QNode*)malloc(sizeof(QNode));
	Q.front->next = NULL;
	
	//����ͷ���ĳ�ʼ������
	//Q.front->next = NULL;
	//Q.rear->next = NULL;

}
//��ͷ������Ӳ���
void enQueue1(LinkQueue& Q, int e)
{
	//��ͷ������Ӳ���
	LinkNode *s=(QNode*)malloc(sizeof(QNode));
	s->data = e;
	s->next = NULL;
	Q.rear->next = s;
	Q.rear = s;

	//����ͷ������Ӳ���
	/*LinkNode* s = (QNode*)malloc(sizeof(QNode));
	s->data = e;
	s->next = NULL;
	if (Q.front == NULL)//�ն����в����һ��Ԫ��
	{
		Q.front = s;  �޸Ķ�ͷ��β��ָ��
		Q.rear = s;
	}
	else {
		Q.rear->next = s;
		Q.rear = s;
	}*/

}

bool deQueue(LinkQueue& Q, int &x)
{
	//��ͷ���ĳ��Ӳ���
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

	//����ͷ���ĳ��Ӳ���
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