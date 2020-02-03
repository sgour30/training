#include<stdio.h>
int sum(int a, int b)
{
	return a+b;
}
int sub(int a, int b)
{
	return a-b;
}
int mul(int a,int b)
{
	return a*b;
}
int main()
{
	int (*fptr)(int ,int)=NULL;
	fptr=sum;
	printf("%d\n",fptr(10,20));
	fptr=sub;
	printf("%d\n",fptr(20,30));
	fptr=mul;
	printf("%d",fptr(10,20));
	
	return 0;
}

