#include<stdio.h>
#include<stdlib.h>
int main()
{
  int n;
  printf("Enter String Size\n");
  scanf("%d",&n);
  printf("Enter your string :");
  char* ptr = (char*)calloc(n,1);
  for(int i=0;i<n;i++)
  {
     scanf("%c",&ptr[i]);
  }

  printf("Your Entered String is:");
  for(int i=0; i<n;i++)
  {
          printf("%c",ptr[i]);
  }
  
  for(int i=0;i<n;i++)
  {
	  if(ptr[i]==' ')
	  {
		for(int j=i;j<n;j++)
		
	        {
		    ptr[j]=ptr[j+1];
		}

		  
	  }
  }
  
  printf("\nString After Removing Spaces is :");
  for(int i=0; i<n;i++)
  {
	  printf("%c",ptr[i]);
  }
}
