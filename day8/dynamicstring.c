#include<stdio.h>
#include<stdlib.h>
int main()
{
  printf("Enter character");
  int row,col;
  scanf("%d %d",&row,&col);
  char**ptr =(char**)calloc(row,sizeof(char*));
  for(int i=0;i<row;i++)
  {

          ptr[i]=(char*)calloc(col,sizeof(char));


   }
   printf("Enter strings");
   for(int i=0;i<row;i++)
  {
          for(int j=0;j<col;j++)
          {
            scanf("%c",&pt
}



