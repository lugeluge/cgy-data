#include<stdio.h>

#define MaxSize 10
typedef struct {
	int data[MaxSize];
	int top;
}sqStack;

void InitStack(sqStack& s)
{
	s.top = -1;//初始化栈顶指针
}
bool StackEmpty(sqStack & s)
{
	if (s.top == -1)
		return false;
	else
		return true;
}
bool Push(sqStack& s,int e)
{
	if (s.top == MaxSize - 1)//判断是否栈满
		return false;
	s.top = s.top++;
	s.data[s.top] = e;
}
bool Pop(sqStack& s, int &e)
{
	if (s.top == -1)
		return false;
	e = s.data[s.top];
	s.top = s.top--;
}

//输出栈
void printStack(sqStack& s)
{
	for (int i = 0; i <= s.top; i++)
	{
		printf("%d\n", s.data[i]);
	}
}


int main12()
{
	sqStack S;
	int x;
	InitStack(S);
	Push(S, 1);
	Push(S, 2);
	Push(S, 3);
	Push(S, 4);
	printStack(S);

	Pop(S,x);
	printf("此处出栈的元素是：%d", x);
	return 0;
}