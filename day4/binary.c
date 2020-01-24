#include<stdio.h>
#include<math.h>
int main()
{
  int num,bin=0,rem,i=1;
  scanf("%d",&num);
  while(num!=0)
  {
	rem=num%2;
	bin+=(rem*i);
	num/=2;
	i*=10;
	
  } 	
  printf("%d",bin);
  return 0;
}  
