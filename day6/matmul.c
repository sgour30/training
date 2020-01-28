#include<stdio.h>
int main()
{
	int i,j,k,arr1[3][3] ,arr2[3][3],mul[3][3];
	printf("Enter Array");
        for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		  scanf("%d",&arr1[i][j]);
		}
	}
         for(i=0;i<3;i++)
        {
		 for(j=0;j<3;j++)
		 {	 
	           scanf("%d",&arr2[i][j]);
		 }										                 
	}
	
        
       	 for(i=0;i<3;i++)
	 {   
		 for(j=0;j<3;j++)                                                                                                                                                    {  
		   mul[i][j]=0;  
		   for(k=0;k<3;k++)
		   {
			   mul[i][j]=mul[i][j]+(arr1[i][k]*arr2[k][j]);
		   }
	       }
	 }
	    for(i=0;i<3;i++)
	    {
		    for(j=0;j<3;j++)
		    {
			    printf("%d ",mul[i][j]);
	            }
             }
}	    
	    
