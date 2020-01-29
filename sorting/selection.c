#include<stdio.h>
int main()
{
	int i,j ,n,loc,temp;
	printf("Enter size of array :");
	scanf("%d",&n);
	int arr[n];
	printf("Enter %d array elements",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++)
	{
		int min=arr[i];
		int loc=i;
		for(j=i+1;j<n-i;j++)
		{
		    if(min>arr[j])
	            {
		      min=arr[j];
		      loc=j;
		    }

			
		  }
		temp=arr[i];
		arr[i]=arr[loc];
		arr[loc]=temp;

	}	
        printf("Sorted Array");
	for(i=0;i<n;i++)
	{
	 printf("%d ",arr[i]);
        }	
}	


	



	
