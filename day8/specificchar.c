#include<stdio.h>
#include<stdlib.h>
int main()
{
	printf("Enter size of string");
	int n,count=0;
	char c;
	
	scanf("%d",&n);
	char* ptr = (char*)calloc(n,1);
	printf("Enter Your Sentence \n");
	for(int i=0; i<n;i++)
	{
		scanf("%c",&ptr[i]);
	}

	printf("Enter the character to find in sentence : ");
	scanf("%c",&c);
	for(int j=0;j<n;j++)
	{
		if(ptr[j]==c)
		{
			count=count+1;
		}
	}
	printf("%c occurs %d times in sentence.",c,count);
}

