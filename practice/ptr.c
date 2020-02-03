#include<stdio.h>
int sum(int a, int b)
{
  return a+b;
}
int sub(int a, int b)
{
	return a-b;
}
int mul(int a, int b)
{
	return a*b;
}
int main()
{
  
	int s;
	char arr[];
	int (*fptr)(int ,int ) = arr{1,2,3} ;
	printf("Enter 1 for sum\n 2 for sub \n 3 for mul");
        scanf
        fptr=sum;
	s=fptr(10,20);
	printf("%d",s);
	return 0;
}

