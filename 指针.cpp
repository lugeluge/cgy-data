//#include<stdio.h>
//
//void swap(int *c, int *d)//这个函数实现：调换了值；函数定义中的int *c代表的是定义一个指针变量c，
////这个变量等于调用这个函数时传入的值
//{
//	int temp;
//	temp = *c;  //*c=*&a
//	*c = *d;
//	*d = temp;
//}
///*void swap(int** i, int** j)
//{
//	int *p;
//	p = *i;
//	*i = *j;
//	*j = p;
//}
//void swap(int c, int d)
//{
//	int temp;
//	temp = c;
//	c = d;
//	d = temp;
//}*/
//int main3()
//{
//	int* i,*j,*p;
//	int a = 10,b=20;
//	i = &a;
//	j = &b;
//	printf("%d:%d   %d:%d\n", *i, i, *j, j);
//	/*p = i;
//	i = j;
//	j = p;*/
//	swap(i, j);
//	printf("%d:%d   %d:%d\n", *i, i, *j, j);
//	/*拆解swap(int *c, int *d)
//	int* c = i;//把指针i赋值给指针变量c，相当于复制指针一次
//	int* d = j;//把指针j赋值给指针变量d，相当于复制指针一次
//	printf("*c=%d *i=%d", c, i);
//	int temp;
//	temp = *c;
//	*c = *d;
//	*d = temp;*/
//	
//
//	//swap拆解
//	/*int c = a;
//	int d = b;
//	int temp;
//	temp = c;
//	c = d;
//	d = temp;*/
//	
//	return 0;
//
//}