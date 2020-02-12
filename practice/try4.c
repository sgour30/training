#include<stdio.h>
int main()
{
	int n1,n2,n,sum;
	scanf("%d",&n);
        n1=0;
	n2=1;
	printf("%d %d ",n1,n2);
	for(int i=n1;i<=n;i++)
	{
		sum=n1+n2;
		printf("%d ",sum);
		n1=n2;
		n2=sum;
	}
}
