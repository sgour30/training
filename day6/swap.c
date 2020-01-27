#include<stdio.h>
int main()
{
	int i,j,k,temp;
	int arr[10];
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	
	}
	for(j=0;j<5;j++)
	{
	   temp=arr[j];
	   arr[j]=arr[10-j-1];
	   arr[10-j-1]=temp;
	}	
        printf("Reversed Array");
	for(k=0;k<10;k++)
	{
		printf("%d",arr[k]);
	}	
      	
	
}
