#include<stdio.h>
#include <stdlib.h>

typedef struct DNode
{
	int data;
	struct DNode* prior, * next;
}DNode,*DLinklist;


bool InitDLinkList(DLinklist &L)
{
	L = (DNode*)malloc(sizeof(DNode));
	if (L == NULL)
		return false;
	L->prior = NULL;
	L->next = NULL;
	return true;
}

//������������ڵ�
void add(DLinklist& L,int e)
{
	DNode* s,*p=L;
	s = (DNode*)malloc(sizeof(DNode));
	while (p->next != NULL)
	{
		p = p->next;
	}
	s ->data = e;
	s->next = p->next;
	if(p->next!=NULL)//���p�к�̽ڵ�
	   p->next->prior = s;
	s->prior = p;
	p->next = s;
}


//�������
void printList(DLinklist& L)
{
	DNode* p = L;
	while (p->next != NULL)
	{
		p = p->next;
		printf("%d\n", p->data);

	}
}

int main10()
{
	DLinklist L=NULL;
	InitDLinkList(L);

	add(L, 1);
	add(L, 3);
	add(L, 5);
	add(L, 7);
	add(L, 9);
	printList(L);
	return 0;
}