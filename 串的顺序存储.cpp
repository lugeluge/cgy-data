//#include<stdio.h>
//#include<iostream>
//#define MaxLEN 255
//typedef struct {
//	char data[MaxLEN];
//	int length;
//}SString;
//int StrLength(SString& s)
//{
//	return s.length;
//}
//bool SubString(SString& sub , SString& s, int pos, int len)
//{
//	if (pos + len - 1 > s.length)
//	{
//		return false;
//	}
//	
//	for (int i = pos,j=1; i < pos + len; i++,j++)
//	{
//		sub.data[j] = s.data[i];
//	}
//	sub.length=len;
//	return true;
//}
//void printSString(SString& s)
//{
//	printf("\n");
//	for (int i = 1; i <= s.length; i++)
//	{
//		printf("%c", s.data[i]);
//	}
//}
//void initSStirng(SString& s,const char* str,int length)
//{
//	for (int i = 1,j=0; i <= length; i++,j++)
//	{
//		s.data[i] = str[j];
//	}
//	s.length = length;
//}
//int Strcompare(SString& s, SString& t)
//{
//
//	for (int i = 1; i <= s.length && i<=t.length; i++)
//	{
//		if (s.data[i] != t.data[i])
//			return s.data[i] - t.data[i];
//	}
//	return s.length - t.length;
//}
//int Index(SString& s, SString& q)
//{
//	int i = 1;
//	int n = StrLength(s);//��������ĳ���
//	int m = StrLength(q);//���Ҫƥ����Ӵ��ĳ���
//	SString tempt;//������ʱ�洢�����б������Ӵ�
//	while (i <= n - m)//�˾仹��̽��
//	{
//		SubString(tempt, s, i, m);
//		if (Strcompare(tempt,q) != 0)
//		     i++;
//		else return i;
//	}
//	return 0;
//}
//int main17()
//{
//	SString s, t;
//	SString q;
//	initSStirng(s, "wangdao", 7);
//	initSStirng(t, "wcngdao", 7);
//	
//	StrLength(s);
//	printSString(s);
//	int len = StrLength(s);
//	
//	SString sub;
//	SubString(sub, s, 2, 3);
//	printSString(sub);
//	printf("\n%d", Strcompare(s, t));//��������ǰ�߱Ⱥ���С
//
//	initSStirng(q, "ng", 2);
//	int index=Index(s, q);
//	printf("\n%d", index);
//	return 0;
//}