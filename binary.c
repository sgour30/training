#include<stdio.h>
#include<math.h>
int main()
{
	int i=0,num,rem;
	scanf("%d",&num);
	while(num!=0)
	{
		rem=rem+num%2*pow(10,i++);
		printf("%d",rem);
	        rem=rem/2;	
	}
}	
