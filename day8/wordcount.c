#include<stdio.h>
#include<stdlib.h>
int main()
{
	printf("Enter the size of array :");
	int n ,count=0;
	scanf("%d",&n);
	char *ptr= (char*)calloc(n,sizeof(char));
	
	printf("Enter Your Sentence : ");
	for(int i=0;i<n;i++)
	{
		scanf("%c",&ptr[i]);
	}
        for(int i=0;i<n;i++)
	{
		if(ptr[i]== ' ')
		{
			count=count+1;
		}
	}
	printf("Number of words in sentence is :%d ",count+1);
}	
