#include<stdio.h>

int main4()
{
	int a[10] = { 0,1,2,3,4,5,6,7,8,9 };
	char string[] = { "hahhahahahahhahahahah" };
	printf("%s\n",string);
	char* h = (char *) "ninhaoa" ;
	printf("%s\n", h);
	//printf(*h);

	int* p;
	p = a;
	for (int d = 0; d < 10; d++)
	{
		printf("%d ", a[d]);
	}
	printf("\n");

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", *(a + i));
	}
	printf("\n");
	for (int j = 0; j < 10; j++)
	{
		printf("%d ", *(p + j));
	}
	return 0;
}