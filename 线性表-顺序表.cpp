#include <stdlib.h>//����ϵͳ��ͷ�ļ�
#include<stdio.h>
#include"test.h"//����ϵͳ��ͷ�ļ�
#define InitSize 10
typedef struct {
	int* data;
	int MaxSize;
	int length;
}SeqList;
void convert(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
void InitList(SeqList& L)
{
	L.data = (int*)malloc(InitSize * sizeof(int));
	L.length = 0;
	L.MaxSize = InitSize;
}
void  IncreaseSize(SeqList& L, int len)
{
	int* P = L.data;
	L.data = (int*)malloc((L.MaxSize + len) * sizeof(int));
	for (int i = 0; i < L.length; i++)
	{

	}
}
void insert(SeqList& L, int value)
{
	L.data[L.length] = value;
	L.length++;
}
void Listinsert(SeqList& L, int i,int e)
{
	for (int j = L.length; j >i; j--)
	{
		L.data[j] = L.data[j - 1];
	}
	L.data[i] = e;
	L.length++;
}
//12345
bool ListDelete(SeqList& L, int i, int& e)
{
	if (i<1 || i>L.length)
	{
		return false;
	}
	e = L.data[i];
	for (int j = i+1; j < L.length; j++)
	{
		L.data[j - 1] = L.data[j];
	}
	L.length--;
}
int LocateElem(SeqList& L, int e)
{
	for (int i = 0; i < L.length; i++)
	{
		if(L.data[i] == e)
		{
		return i + 1; 
         }
	}
	return -1;
}
int main7()
{
	SeqList L;
	int e=0;
	InitList(L);
	//L.data[0] = 0;
	//L.data[1] = 1;
	//L.length = 2;
	insert(L, 1);
	insert(L, 2);
	insert(L, 3);
	insert(L, 4);
	printf("δ��������ǰ��˳���:");
	for (int i = 0; i < L.length; i++)
	{
		printf("%d", L.data[i]);
	}
	printf("\nδ��������ǰ��˳����ȣ�%d\n", L.length);
	Listinsert(L, 2, 8);//�����2���±�Ϊ2��Ԫ�أ�����λ��Ϊ2��Ԫ��
	printf("�������ݺ��˳���:");
	for (int i = 0; i < L.length; i++)
	{
		printf("%d", L.data[i]);
	}
	printf("\n��������ǰ��˳����ȣ�%d\n", L.length);
	
	//ɾ��˳���
	ListDelete(L, 2, e);
	printf("ɾ�����ݺ��˳���:");
	for (int i = 0; i < L.length; i++)
	{
		printf("%d", L.data[i]);
	}
	printf("\nɾ��������%d", e);
	printf("\nɾ������ǰ��˳����ȣ�%d\n", L.length);

	//��ֵ����
	
	printf("���ҵ�ֵ��λ�ã�%d", LocateElem(L, 4));

	//vector<int> va;
	//printf("%d\n", va.size());
	//va.push_back(10);
	//printf("%d\n", va.size());
	return 0;
}