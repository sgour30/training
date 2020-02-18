#include<stdio.h>
int main()
{
	int arr[10];
	int max=-999;
	for(int i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
        
        int sum=0,temp=0;
	for(int i=0;i<10;i++)
	{

		for(int j=i+1;j<9;j++)
		{
			sum=arr[i]+(sum+arr[j]);
			

			if(sum>temp)
			{
				temp=sum;
			}

		}
	}

	 printf("%d",sum);

}
