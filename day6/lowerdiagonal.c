#include<stdio.h>
int main()
{
	printf("Enter number of rows and columns");
	int i,j,n ,a[n][n],sum;
	scanf("%d",&n);
	printf("Enter arrray elements Row-Wise :");
	for (i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	sum=0;
        for(i=0;i<n;i++)
	{
		
		for(j=0;j<i;j++)
		{
			
			
				sum=sum+a[i][j];
			
		}
	}
        printf("%d",sum);
}
