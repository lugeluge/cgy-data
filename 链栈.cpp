#include <stdlib.h>//引用系统的头文件
#include<stdio.h>

typedef struct Linknode{
	int data;
	Linknode* next;
}* LiStack;

bool InitLinkList(LiStack& L)//初始化带头结点的单链表
{
	L = (Linknode*)malloc(sizeof(Linknode));
	if (L == NULL)
		return false;
	L->next = NULL;
	return true;
}

void push(LiStack& L, int e)
{
	Linknode* p,*s;
	p = L;
	while (p->next != NULL)
	{
		p = p->next;
	}
	s= (Linknode*)malloc(sizeof(Linknode));
	s->data = e;
	s->next = NULL;
	p->next = s;
}
void printList(LiStack& L)
{
	Linknode* p = L;
	while (p->next != NULL)
	{
		p = p->next;
		printf("%d\n", p->data);
	}
}
int main13()
{
	LiStack L;
	InitLinkList(L);
	push(L, 1);
	push(L, 2);
	push(L, 3);
	push(L, 4);
	printList(L);

	return 0;

}