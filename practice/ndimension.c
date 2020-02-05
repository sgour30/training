#include<stdio.h>
#include<stdlib.h>
int main()
{
	printf("Enter the dimension of array");
	int row, col,tab;
	scanf("%d%d%d",&tab,&row,&col);
	printf("Enter %d Array elements",tab*row*col);
	int ***ptr =(int***)calloc(tab,sizeof(int***));
	for(int i=0;i<tab;i++) 
	{
		ptr[i]=(int**)calloc(row,sizeof(int**));
		for(int j =0;j<row;j++)
		{
			ptr[i][j]=calloc(col,sizeof(int));
		}
	}
	for(int i=0;i<tab;i++)
	{
		for(int j=0;j<row;j++)
		{

			for(int k=0;k<col;k++)
			{
				scanf("%d",&ptr[i][j][k]);
			}
		}


	}
	for(int i=0;i<tab;i++)
	{
		for(int j=0;j<row;j++)
		{
			for(int k=0;k<col;k++)      
			{
				printf("%d",ptr[i][j][k]);

			}
		}


	}
}
