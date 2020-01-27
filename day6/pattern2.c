#include<stdio.h>
int main()
{
	int i,j,k=1,l,n;
	printf("Enter number of rows");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		   {
			printf(" ");
		   }
		for(j=0;j<=i;j++)
		{
			if((i&1)==0)
			{
				printf("* ");
				k++;
			}
			else
			{
				printf("%i ",k++);
			}
		}
		printf("\n");
		
		

 		}


}	


