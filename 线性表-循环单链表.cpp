#include <stdlib.h>//引用系统的头文件
#include<stdio.h>

typedef struct LNode {
	int data;
	LNode* next;
}LNode, * LinkList;

bool InitLinkList(LinkList& L)//初始化带头结点的单链表
{
	L= (LNode*)malloc(sizeof(LNode));
	if (L == NULL)
		return false;
	L->next = L;//让头结点的下一个结点指向自己，实现循环
	return true;
}

int main11()
{

	LinkList L;
	InitLinkList(L);

	return 0;
}