#include<stdio.h>
int main()
{
        int n;
	scanf("%d",&n);
	int k=1;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<i;j++)
		{
			printf(" ");
		}
		for(int j=n;j>=i;j--)
		{
			if(i%2==0)
			{
				printf(" *");
				k++;
			}
			else
			{
		       	   printf(" $");
			   k++;
			}
			
		}
		
                printf("\n");
	}
}
