#include <stdlib.h>//引用系统的头文件
#include<stdio.h>

typedef struct LNode {
	int data;
	LNode *next;
}LNode,*LinkList;
//bool InitLinkList1(LinkList &L1)//初始化不带头结点的单链表
//{
//	L1 = NULL;
//	return true;
//}
bool InitLinkList2(LinkList& L2)//初始化带头结点的单链表
{
	L2 = (LNode*)malloc(sizeof(LNode));
	if (L2 == NULL)
		return false;
	L2->next = NULL;
	return true;
}
////添加节点到链表最后
//void add(LinkList& L,int e)
//{
//	LNode* p=L;
//	while (p->next != NULL)
//	{
//		p = p->next;
//	}
//	LNode* s = (LNode*)malloc(sizeof(LNode));
//	s->data = e;
//	s->next = NULL;
//	p->next = s;
//}
////按位序插入,在第i个位置插入元素
//bool  insert(LinkList& L, int i,int e)
//{
//	if (i < 1)
//	{
//		return false;
//	}
//	LNode* p = L;
//	LNode* s;
//	int j = 0;
//	while (p!= NULL && j < i - 1)
//	{
//		p = p->next;
//		j++;
//	}
//	if (p == NULL)
//	{
//		return false ;
//	}
//	s = (LNode*)malloc(sizeof(LNode));
//	s->data = e;
//	s-> next = p->next;
//	p->next = s;
//	return true;
//}
//
////前插操作：找到一个需要插入节点的前序节点，把两个指针的值调换一下
//bool insertpriorNode(LinkList& L, int i, int e)
//{
//	LNode* p,*s;
//	p = L;
//	for (int j = 0; j < i; j++)
//	{
//		p = p->next;
//	}
//	s = (LNode*)malloc(sizeof(LNode));
//	if (s == NULL)
//		return false;
//	s->next = p->next;
//	p->next = s;
//	s->data = p->data;
//	p->data = e;
//	return true;
//}
//
////按位序删除链表的节点
//bool deleteNode(LinkList& L, int i, int& e)
//{
//	LNode* p; int j = 0;
//	p = L;
//	while (p != NULL && j < i - 1)
//	{
//		p = p->next;
//		j++;
//	}
//	if (p == NULL)
//	{
//		return false;
//	}
//	LNode* q = p->next;
//	e = q->data;
//	p->next = q->next;
//	free(q);
//}
//
////删除指定节点：通过找到这个节点p的下一个节点q，把下一个节点q的值覆给p。
//void deteleNodep(LinkList& L, int i)//删除10这个节点
//{
//	LNode* p,*q;
//	p = L;
//	while (p != NULL)
//	{
//		if (p->data == 10)
//		{
//			q = p->next;
//			p->data = p ->next->data;
//			p->next = q->next;
//			free(q);
//		}
//		p = p->next;
//	}
//	
//
//}
//
//输出链表
void printList(LinkList& L)
{
	LNode* p = L;
	while (p->next != NULL)
	{
		p = p->next;
		printf("%d\n", p->data);
	
	}
}

//头插法
void Linkinsert_head(LinkList &L)
{
	LNode* s;
	//L = (LNode*)malloc(sizeof(LNode));
	//L->next = NULL;
	int x;
	printf("input data\n");
	scanf("%d", &x);
	while (x != 9999)
	{
		s = (LNode*)malloc(sizeof(LNode));
		s->data = x;
		s->next =L->next;
		L->next = s;
		printf("input data\n");
		scanf("%d", &x);
		
	}


}
int main()
{	
	LinkList L;
	InitLinkList2(L);
	Linkinsert_head(L);
	printList(L);

//	add(L, 1);
//	add(L, 2);
//	add(L, 3);
//	add(L, 4);
//	add(L, 5);
//
//	printf("原始的链表：\n");
//	printList(L);
//
//	insert(L, 2, 9);//2是位序
//	printf("插入数据后得链表：\n");
//	printList(L);//应该输出192345
//
//	insert(L, 4, 8);
//	printf("插入数据后得链表：\n");
//	printList(L); //应该输出1928345
//
//	//前插操作
//	insertpriorNode(L, 3, 10);
//	printf("实现前插数据后得链表：\n");//1 9 10 2 8 3 4 5
//	printList(L);
//
//	//按位序删除节点
//	int e;
//	deleteNode(L, 5,e);
//	printf("删除的节点是：%d", e);//8
//	printf("按位序删除数据后得链表：\n");//1 9 10 2 3 4 5
//	printList(L);
//
//	//删除指定节点
//	deteleNodep(L, 10);
//	printf("删除指定节点后得链表：\n");//1 9 2 3 4 5
//	printList(L);
//
	return 0;
	
}