#include<stdio.h>
#include<stdlib.h>
int main()
{
  printf("Enter number of elements ");
  int num;
  char temp;

   scanf("%d",&num);

   char* ptr =(char*)calloc(num,sizeof(char));

   printf("Enter string\n");

   for(int i=0;i<num;i++)
   {
 	 scanf(" %c",&ptr[i]);
   }
  
  for(int i=0;i<(num/2);i++)
  {
	  temp=ptr[i];
	  ptr[i]=ptr[num-i-1];
	  ptr[num-i-1]=temp;
  }
  
   for(int i=0;i<num;i++)
  {
	   
   printf("%c",ptr[i]);
  
  }
}

