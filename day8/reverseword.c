#include<stdio.h>
#include<stdlib.h>
int main()
{
  printf("Enter number of elements ");
  
  int num,count=0;
  
  char temp, space = ' ';
  scanf("%d",&num);

  char* ptr1 =(char*)malloc(num*sizeof(char));
  char* ptr2 =(char*)malloc(num*sizeof(char));

  printf("Enter string\n");

  for(int i=0;i<num;i++)
   {
      scanf("%c",&ptr1[i]);
   }
    
   for(int i=0;ptr1[i]!='\0';i++)
   {
	   count++;
   }

   printf("strlen =%d",count);
    int var=count;
  
    for(int i=num;i>=0;i--)
   {
          if(ptr1[i]==' ')
          {
                
		  for(int j=i+1;j<=var;j++)
                  {
			printf("%c",ptr1[j]);
		  }
		   var=i;
		  printf(" ");
          }
    }

/*
   for(int i=0;i<num;i++)
  {

   printf("%c",ptr2[i]);

  }*/
}

