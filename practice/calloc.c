#include<stdio.h>
#include<stdlib.h>
int main()
{
  printf("Enter size of array");
  int n;
  scanf("%d",&n);
  int*ptr =(int*)calloc(n,sizeof(int));
  printf("Enter Array");
  for(int i=0;i<n;i++)
  {
          scanf("%d",&ptr[i]);

   }
  for(int i=0;i<n;i++)
  {
   printf("%d",ptr[i]);
  }



}

