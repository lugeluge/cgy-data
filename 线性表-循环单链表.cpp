#include <stdlib.h>//����ϵͳ��ͷ�ļ�
#include<stdio.h>

typedef struct LNode {
	int data;
	LNode* next;
}LNode, * LinkList;

bool InitLinkList(LinkList& L)//��ʼ����ͷ���ĵ�����
{
	L= (LNode*)malloc(sizeof(LNode));
	if (L == NULL)
		return false;
	L->next = L;//��ͷ������һ�����ָ���Լ���ʵ��ѭ��
	return true;
}

int main11()
{

	LinkList L;
	InitLinkList(L);

	return 0;
}