#include <stdio.h>
#include<iostream>
#define MaxSize 100

typedef struct {
	char data[MaxSize];
	int top;
}sqStack;

void  InitStack(sqStack& s)
{
	s.top = -1;
}
//��ջ
bool Push(sqStack& s,char x)
{
	if (s.top == MaxSize - 1)//�ж��Ƿ�ջ��
		return false;
		s.top = s.top++;
		s.data[s.top] = x;
}
//��ջ
bool pop(sqStack& s, char& e)
{
	if (s.top == -1)
		return false;
	e = s.data[s.top];
	s.top = s.top--;
	return true;
}

bool empty(sqStack &s)
{
	if (s.top == -1)//ջ��
		return true;
	else 
		return false;
}
bool Matchsign(sqStack& s, const char str[],int len)
{
	for (int i = 0; i < len; i++)
	{
		char t = str[i];
		if (str[i] == '[' || str[i] == '{' || str[i] == '(')
		{
			//�������ߵķ��ž��ǽ�ջ
			Push(s,str[i]);
		}
		else
		{
			if(empty(s))
			return false;//������������ջΪ�գ��򷵻�false
			char e;//[
			pop(s, e);//ջ��Ԫ�س�ջ
			if (str[i] == ')'&& e == '('  || str[i] == ']' && e == '[' || str[i] == '}' && e == '{')
			{
				continue;
			}
			else
			{
				return false;
			}
		}
	}	
	return empty(s);
}
bool Matchsign1(sqStack& s, const char str[], int len)
{
	for (int i = 0; i < len; i++)
	{
		char t = str[i];
		if (str[i] == '[' || str[i] == '{' || str[i] == '(')
		{
			Push(s, str[i]);
		}
		if (str[i] == ']' || str[i] == '}' || str[i] == ')')
		{
			if (empty(s))
				return false;//������������ջΪ�գ��򷵻�false
			char e;
			pop(s, e);
			if (str[i] == ')' && e == '(' || str[i] == ']' && e == '[' || str[i] == '}' && e == '{')
			{
				continue;
			}
			else
			{
				return false;
			}
		}
		
		
	}
	return empty(s);
}
int main16()
{
	sqStack s;
	InitStack(s);
	const char str[] = "{[(dfsdf)]}";//{{(})}  {{{()}}}
	int length = strlen(str);

	//Matchsign(s, str, length);
	if (Matchsign1(s, str, length))
		printf("�ɹ�");
	else
		printf("ʧ��");

	return 0;

}