#include<stdio.h>
#include<stdlib.h>
int main()
{
	printf("Enter String Size :");
	int n,pos;
	char c;
	scanf("%d",&n);
        
	char* ptr1= (char*)calloc(n,1);
	printf("Enter Your String :");
	for(int i=0;i<n;i++)
	{
		scanf("%c",&ptr1[i]);
	}
	char* ptr2=(char*)calloc(n,1);
	printf("Enter Character to insert and its position\n");
	
	scanf("%c",&c);
	scanf("%d",&pos);

	for(int j=0;j<n;j++)
	{
          ptr2[j]=ptr1[pos+j];
	}
         
	ptr1[pos]=c;
	
	char* rptr= (char*)realloc(ptr1,n+pos);
 
	for(int i=0;i<n+1;i++)
	{
		rptr[pos+1+i]=ptr2[i];
	}
	
        printf("New array is ");
	for(int i=0; i<n;i++)
	{
		printf("%c",rptr[i]);
	}
}



	
