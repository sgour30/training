#include<stdio.h>
#include<stdlib.h>
int main()
{
  printf("Enter number of elements ");
  int num;
  char temp, space = ' ';
  scanf("%d ",&num);
  char* ptr1 =(char*)malloc(num*sizeof(char));
  char* ptr2 =(char*)malloc(num*sizeof(char));
  printf("Enter string\n");
  for(int i=0;i<num;i++)
   {
      scanf("%c",&ptr1[i]);
   }

  for(int i=0;i<num;i++)
  {
	  if(ptr1[i]=space)
	  { 
	   for(int j=num;j>0;j--)
	   {

	   }

	  } 
   
  }

   for(int i=0;i<num;i++)
  {

   printf("%c",ptr2[i]);

  }
}

