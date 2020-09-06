/****************************/
/* 比较a 和 b的大小，求大值 */
/****************************/

#include <stdio.h>

#if(0)
void main()
{
	int max(int, int);
	int a, b, c;

	scanf("%d %d", &a, &b);

	c = max(a, b);

	printf("a = %d, b = %d, max = %d\n\n", a, b, c);
}
#endif

int max(int x, int y)
{
	int z;

	if (x > y)
	{
		z = x;
	}
	else
	{
		z = y;
	}

	return z;
}

#if(1)
//将 main 函数改写为
#include <stdio.h>

void main5()
{
	int max(int, int);
	int (*p)(int,int);//定义了一个指向函数的指针
	int a, b, c;

	p = max;
	scanf("%d %d", &a, &b);

	c = (*p)(a, b);//等价于c=max（a,b)


	printf("a = %d, b = %d, max = %d\n\n", a, b, c);
}

#endif