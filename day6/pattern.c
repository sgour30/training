#include<stdio.h>
int main()
{
 int i,j,n;
 int k=1;
 printf("Enter number of rows");
 scanf("%d",&n);
 for(i=0;i<=n;i++)
 {
	for(j=1;j<=i;j++)
	{
	   printf("%d",k);
           k=k+2;
        }
        printf("\n");
 }
} 
