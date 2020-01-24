#include<stdio.h>	
int sum(int a, int b);
int sub(int a, int b);
int mltplc(int a, int b);
int div(int a ,int b);

int main()
{
	int a,b,c,d,e,f;
	scanf("%d",&a);
	scanf("%d",&b);
        c=sum(a,b);
	d=sub(a,b);
	e=mltplc(a,b);
	f=div(a,b);
        printf("%d/n%d/n%d/n%d",c,d,e,f);
}
