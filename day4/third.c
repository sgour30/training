#include<stdio.h>
int main()
{
	int c=0,number;
	int n=number;
	scanf("%d",&n);
	while(n!=0)
	{
	  n=n/10;
	  c++;
        }
        printf("%d",c);	
        
	int arr[c];
        c=0;
        n=number;
        while(n!=0)
	{
	arr[c]=n%10;
        n=n/10;
        c++;
        }
         
	

        
}	

