#include<stdio.h>
int main()
{      
	int n;
	printf("Enter rows");
        scanf("%d",&n);
        int k=1;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=(n-i);j++)
		{
		   printf(" ");
		}
		for(int j=1;j<=i;j++)
		{
		        if(i%2==1)
			{
				printf("* ");
				k++;
			}

			else
			{
                         printf("%d ",k);
			 k++;
			}
		}
		printf("\n");


	}
}
