#include<stdio.h>
int main()
{
	int i,j,k ,a[3][3],sum;
	for (i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	sum=0;
        for(i=0;i<3;i++)
	{
		
		for(j=0;j<i;j++)
		{
			
			
				sum=sum+a[i][j];
			
		}
	}
        printf(	"%d",sum);
}
