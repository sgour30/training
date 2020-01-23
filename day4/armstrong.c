#include<stdio.h>
int main()
{
 int sum,n,a,b,c,d;
 printf("Enter Number between 1 to 1000 ");
 scanf("%d",&n);
 a=n%10;
 b= (n/10)%10;
 c= (n/100)%10;
 d=(n/1000)%10;
 sum=((a*a*a)+(b*b*b)+(c*c*c)+(d*d*d));
 if(n==sum)
 {
	 printf(" Armstrong Number");
 }
 else
 {
  printf(" Not Armstrong");
 }  
}


