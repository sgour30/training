#include<stdio.h>
int sum (int);
void main()
{
	int s,n;
	scanf("%d",&n);
	s=sum(n);
	printf("sum=%d",s);
}
int sum(int a)
{
	if(a==0)
	{
		return 0;
	}
	else
	{
	     return a + sum(a--);
        }
}
