#include<stdio.h>
int main()
{
	int i,j,n,arr[10];
	printf("Enter Array");
	int flag=0;
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter number to search");
        scanf("%d",&n);	
	for(j=0;j<10;j++)
	{
		if(n==arr[j])
		{
			printf("Found Number at %dth position",j+1);
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
	printf("Number not found in array");	
	}
}	
