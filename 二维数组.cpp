#include<stdio.h>
//test和test1是等价的

void test(int* a, int length)
{

}
void test1(int a[], int length)
{

}

int main01()
{
	int a[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
	int b[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	//a 和b是等价的，定义一个3行4列的数组，可以看成定义一个一维数组，
	//数组里有3个元素，每个元素又可以继续拆分成4个子元素。

	return 0;
}