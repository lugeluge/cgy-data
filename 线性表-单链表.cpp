#include <stdlib.h>//����ϵͳ��ͷ�ļ�
#include<stdio.h>

typedef struct LNode {
	int data;
	LNode *next;
}LNode,*LinkList;
//bool InitLinkList1(LinkList &L1)//��ʼ������ͷ���ĵ�����
//{
//	L1 = NULL;
//	return true;
//}
bool InitLinkList2(LinkList& L2)//��ʼ����ͷ���ĵ�����
{
	L2 = (LNode*)malloc(sizeof(LNode));
	if (L2 == NULL)
		return false;
	L2->next = NULL;
	return true;
}
////��ӽڵ㵽�������
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
////��λ�����,�ڵ�i��λ�ò���Ԫ��
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
////ǰ��������ҵ�һ����Ҫ����ڵ��ǰ��ڵ㣬������ָ���ֵ����һ��
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
////��λ��ɾ������Ľڵ�
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
////ɾ��ָ���ڵ㣺ͨ���ҵ�����ڵ�p����һ���ڵ�q������һ���ڵ�q��ֵ����p��
//void deteleNodep(LinkList& L, int i)//ɾ��10����ڵ�
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
//�������
void printList(LinkList& L)
{
	LNode* p = L;
	while (p->next != NULL)
	{
		p = p->next;
		printf("%d\n", p->data);
	
	}
}

//ͷ�巨
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
//	printf("ԭʼ������\n");
//	printList(L);
//
//	insert(L, 2, 9);//2��λ��
//	printf("�������ݺ������\n");
//	printList(L);//Ӧ�����192345
//
//	insert(L, 4, 8);
//	printf("�������ݺ������\n");
//	printList(L); //Ӧ�����1928345
//
//	//ǰ�����
//	insertpriorNode(L, 3, 10);
//	printf("ʵ��ǰ�����ݺ������\n");//1 9 10 2 8 3 4 5
//	printList(L);
//
//	//��λ��ɾ���ڵ�
//	int e;
//	deleteNode(L, 5,e);
//	printf("ɾ���Ľڵ��ǣ�%d", e);//8
//	printf("��λ��ɾ�����ݺ������\n");//1 9 10 2 3 4 5
//	printList(L);
//
//	//ɾ��ָ���ڵ�
//	deteleNodep(L, 10);
//	printf("ɾ��ָ���ڵ�������\n");//1 9 2 3 4 5
//	printList(L);
//
	return 0;
	
}