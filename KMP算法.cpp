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
void initSStirng(SString& s, const char* str, int length)
{
	for (int i = 1, j = 0; i <= length; i++, j++)
	{
		s.data[i] = str[j];
	}
	s.length = length;
}
int Index_kmp(SString& s, SString& t)
{
	int i = 1, j = 1;
	int t_length = StrLength(t);
	int next[7];

}
int main()
{
	SString s, t;
	initSStirng(s, "goooglogoogle", 13);
	initSStirng(t, "google", 6);
	printf("%d", StrLength(t));
	Index_kmp(s, t);

}