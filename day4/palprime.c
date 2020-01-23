#include<stdio.h>
int main()
{
	int num,orig,rev,remainder;
	printf("Enter the number");
	scanf("%d",&num);
	if(num%2!=0)
	{
		orig=num;
	  	while(num!=0)
		{
			remainder=num%10;
			rev=rev*10+remainder;
			num=num/10;

		}
	        if(orig=rev)
		{
		printf(" Palprime");
	        }	
		
	}	
	else
	{
		printf(" Not Palprime");
	}
	return 0;


}	

