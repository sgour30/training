#include<stdio.h>
int main()
{
	int arr1[3][3],temp;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}
	for(int i=0;i<3;i++)
	{
	    
            for(int j=0;j<i;j++)
	    {
	      temp=arr1[i][j];
	      arr1[i][j]=arr1[j][i];
	      arr1[j][i]=temp;
	       
	    }
	    
	    
	}
	 
        for(int i=0;i<3;i++)
        {
                for(int j=0;j<3;j++)
                {
                        printf("%d",arr1[i][j]);
                }
        }

}	
