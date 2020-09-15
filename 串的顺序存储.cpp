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
bool SubString(SString& sub , SString& s, int pos, int len)
{
	if (pos + len - 1 > s.length)
	{
		return false;
	}
	
	for (int i = pos,j=1; i < pos + len; i++,j++)
	{
		sub.data[j] = s.data[i];
	}
	sub.length=len;
	return true;
}
void printSString(SString& s)
{
	printf("\n");
	for (int i = 1; i <= s.length; i++)
	{
		printf("%c", s.data[i]);
	}
}
void initSStirng(SString& s,const char* str,int length)
{
	for (int i = 1,j=0; i <= length; i++,j++)
	{
		s.data[i] = str[j];
	}
	s.length = length;
}
int Strcompare(SString& s, SString& t)
{

	for (int i = 1; i <= s.length && i<=t.length; i++)
	{
		if (s.data[i] != t.data[i])
			return s.data[i] - t.data[i];
	}
	return s.length - t.length;
}
int main()
{
	SString s, t;
	initSStirng(s, "wangdao", 7);
	initSStirng(t, "wcngdao", 7);
	
	StrLength(s);
	printSString(s);
	int len = StrLength(s);
	
	SString sub;
	SubString(sub, s, 2, 3);
	printSString(sub);
	printf("\n%d", Strcompare(s, t));//负数代表前者比后者小



}