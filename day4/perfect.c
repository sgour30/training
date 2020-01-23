#include<stdio.h>
int perfect(int num)
{
   int sum=0;
   for(int i=1;i<num;i++)
   	   
   {
     
	   if(num%i==0)
	   {
		   sum=sum+i;
		  
           }
	      
   

   }
    return sum;
}

int main()
{
 int num;	
 printf("Enter a number");
 scanf("%d",&num);
 int x=perfect(num);
 if(num==x)
 {
   printf("Number is Perfect");
 }
 else if(num!=x)
 {
    printf("Number is not perfect");
 }
 return 0;

}	
