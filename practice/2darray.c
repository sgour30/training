#include<stdio.h>
#include<stdlib.h>
int main()
{
  printf("Enter the number of rows and columns");
  int row, col;
  scanf("%d %d",&row,&col);
  int **ptr =(int**)calloc(row,sizeof(int*));
  for(int i=0;i<row;i++)
  {
           
	  ptr[i]=(int*)calloc(col,sizeof(int));

   }
   printf("Enter array elements")
   for(int i=0;i<row;i++)
  {
	  for(int j=0;j<col;j++)
	  {
            scanf("%d",&ptr[i][j]);
	  }
  }
  for(int i=0;i<row;i++)
  {
	  for(int j=0;j<col;j++)
	  {
		  printf("%d",ptr[i][j]);
	  }

  }

