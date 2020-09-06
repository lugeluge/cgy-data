#include<stdio.h>
#include <stdlib.h>
//int main() {
//	int i = 0, a[10];
//	for (i = 0; i <= 9; i++)
//	{
//		a[i] = 10+i;
//	}
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%d\n", a[i]);
//	}
//
//	return 0;
//}
int main2()
{
	int i = 0, a[10],b[10];
	for (i = 0; i < 10; i++)
	{
		a[i] = rand() % 100;
		printf("%d ", a[i]);
	}
	printf("\n");
	//a[5]=10,1,4,8,5
	//1,10,4,8,5
	//1,4,10,8,5
	//1,4,8,10,5
	//1,4,8,5,10

	//1,4,8,5    ,10
	//1,4,8,5,10
	//1,4,5,8,10

	//1,4,5   ,8,10
	for (int i = 9; i >=0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (a[j] > a[j + 1]) {
				int temp;
				temp = a[j+1];
				a[j + 1] = a[j];
				a[j] = temp;
			}
			else { continue; }
		}
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}