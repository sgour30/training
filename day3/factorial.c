#include<stdio.h>
int fact(int n)
{
	int i;
	int j=1;
	for(i=n;i>=1;i--)
	{
		j=j*i;
		
	}
	return j;
        
}
int main()
{
	int ans, n;
	printf("Enter the Number: ");
	scanf("%d",&n);
	ans=fact(n);
	printf("Factorial is: %d",ans);
	return 0;
}	
		
