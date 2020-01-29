#include<stdio.h>
int main()
{     
	int n,i;
	char arr[10],max,min;
	printf("Enter 10 characters : ");
	for(i=0;i<10;i++)
	{
		scanf("%c",&arr[i]);
	}
        max=arr[0];
	for(i=0;i<10;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	printf("max character is %c" ,max);
	min=arr[0];
        for(i=0;i<10;i++)
        {
                if(arr[i]<min)
                {
                        min=arr[i];
                }
        }
        printf("\nmin character is %c" ,min);

        	

}       	
	
	
	
