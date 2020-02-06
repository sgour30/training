#include<stdio.h>
#include<stdlib.h>
int main()
{
	printf("Enter Size of String: ");
        int n;
        scanf("%d",&n);
        char* ptr=(char*)calloc(n,1);
	printf("\nEnter your string:");
        for(int i=0;i<n;i++)
	{
	 scanf("%c",&ptr[i]);
        }
        
        printf("Your entered string is");	
        for(int i=0;i<n;i++)
        {
          printf("%c",ptr[i]);
        }



        for(int i=0;i<n;i++)
	{	        	
		for(int j=0;j<n;j++)
		   {
		    if(ptr[i]==ptr[j])
		    {	    
                     ptr[j]=ptr[j+1];
		    }
                }
	}
        
	printf("\nNew String is:");
        for(int i=0;i<n;i++)
	{
	  printf("%c",ptr[i]);
	}
}	

		
	  	
