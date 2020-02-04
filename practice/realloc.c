#include<stdio.h>
#include<stdlib.h>
int main()
{
  printf("Enter size of array");
  int n;
  scanf("%d",&n);
  int*ptr =(int*)calloc(n,sizeof(int));
  n=2*n;
 
  int *rptr=(int*)realloc(ptr,sizeof(int));
  printf("Enter 2 times the size of array you entered ;)");
  for(int i=0;i<n;i++)
  {
          scanf("%d",&ptr[i]);

  }
  for(int i=0;i<n;i++)
  {
   printf("%d",ptr[i]);
  }



}

