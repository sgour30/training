#include<stdio.h>
#include<stdlib.h>
int main()
{
  printf("Enter Number of strings :");
  int n,size;
  scanf("%d",&n);
  printf("\nEnter size of strings :");
  scanf("%d",&size);
  
  
  char**ptr =(char**)calloc(n,sizeof(char*));
  
  for(int i=0;i<n;i++)
   {
     
      ptr[i]= (char*)calloc(size,sizeof(char));
     
   }
  
   printf("\nEnter strings :");
  
   for(int i=0;i<n;i++)
   {
          for(int j=0;j<size;j++)
          {
            scanf("%c",&ptr[i][j]);
          }
  }

   printf("Your Strings are : \n");
  

   
   for(int i=0;i<n;i++)
   {
          for(int j=0;j<size;j++)
          {
            printf("%c",ptr[i][j]);
          }
  }
}
    

