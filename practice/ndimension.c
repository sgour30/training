#include<stdio.h>
#include<stdlib.h>
int main()
{
	printf("Enter the dimension of array");
	int tab, row, col;
	scanf("%d%d%d",&row,&col,&tab);
	printf("Enter Array");
	int ***ptr =(int***)calloc(row,sizeof(int***));
	for(int i=0;i<row;i++) 
	{
		ptr[i]=(int**)calloc(col,sizeof(int**));
		for(int j =0;j<col;j++)
		{
			ptr[i][j]=calloc(col,sizeof(int));
		}
	}
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{

			for(int k=0;k<tab;k++)
			{
				scanf("%d",&ptr[i][j][k]);
			}
		}


	}
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			for(int k=0;k<tab;k++)      
			{
				printf("%d",ptr[i][j][k]);

			}
		}


	}
}
