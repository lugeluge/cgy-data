#include <stdlib.h>//引用系统的头文件
#include<stdio.h>
#include"test.h"//引用系统的头文件
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
	printf("未插入数据前的顺序表:");
	for (int i = 0; i < L.length; i++)
	{
		printf("%d", L.data[i]);
	}
	printf("\n未插入数据前的顺序表长度：%d\n", L.length);
	Listinsert(L, 2, 8);//这里的2是下标为2的元素，不是位序为2的元素
	printf("插入数据后的顺序表:");
	for (int i = 0; i < L.length; i++)
	{
		printf("%d", L.data[i]);
	}
	printf("\n插入数据前的顺序表长度：%d\n", L.length);
	
	//删除顺序表
	ListDelete(L, 2, e);
	printf("删除数据后的顺序表:");
	for (int i = 0; i < L.length; i++)
	{
		printf("%d", L.data[i]);
	}
	printf("\n删除的数据%d", e);
	printf("\n删除数据前的顺序表长度：%d\n", L.length);

	//按值查找
	
	printf("查找的值的位置：%d", LocateElem(L, 4));

	//vector<int> va;
	//printf("%d\n", va.size());
	//va.push_back(10);
	//printf("%d\n", va.size());
	return 0;
}