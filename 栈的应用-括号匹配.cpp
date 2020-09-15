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
//入栈
bool Push(sqStack& s,char x)
{
	if (s.top == MaxSize - 1)//判断是否栈满
		return false;
		s.top = s.top++;
		s.data[s.top] = x;
}
//出栈
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
	if (s.top == -1)//栈空
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
			//如果是左边的符号就是进栈
			Push(s,str[i]);
		}
		else
		{
			if(empty(s))
			return false;//不是左括号且栈为空，则返回false
			char e;//[
			pop(s, e);//栈顶元素出栈
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
				return false;//不是左括号且栈为空，则返回false
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
		printf("成功");
	else
		printf("失败");

	return 0;

}