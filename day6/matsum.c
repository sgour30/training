#include<stdio.h>
int main()
{
	int i,j, arr1[2][2] , arr2[2][2], sum[2][2];
	int n=2;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr1[i][j]);
		       
		}
	}
	for(i=0;i<n;i++)
        {
         
		for(j=0;j<n;j++)
		{
                        
                        scanf("%d",&arr2[i][j]);
                }

	}
        

	for(i=0;i<n;i++)
	{       
                for(j=0;j<n;j++)
                {       
                        sum[i][j]=arr1[i][j]+arr2[i][j];                        
                        printf("%d ", sum[i][j]);

                }
	}	
	
}      	
