#include<stdio.h>
#include<iostream>
#define MaxLEN 255
typedef struct {
	char data[MaxLEN];
	int length;
}SString;
int StrLength(SString& s)
{
	return s.length;
}

int main()
{
	SString s = { "wangdao" ,7};//��ʼ���ַ������Լ�����Ϊ7
	StrLength(s);
	printf("%d", StrLength(s));
	int len = StrLength(s);
}