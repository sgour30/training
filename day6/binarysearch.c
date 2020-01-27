#include<stdio.h>
int binsearch(int x,int v[], int n)
{
	int low,high,mid;
	low=0;
	high=n-1;
	while(low<high)
	{
	  mid=(low+high)/2;
	  if(x<v[mid])
	  {
		  high=mid+1;
	  }
	  else if(x>v[mid])
  	  {
		  low=mid+1;
	  }
	  else
	  {
		  return mid;
          }
	}
       return -1; //no match 
}
int main()
{
 int i,x,v[10];	
 printf("Enter Array");
 for(i=0;i<10;i++)
 {
	 scanf("%d",&v[i]);
 }	 
 printf("Enter number to find");
 scanf("%d",&x);
 
 printf("Element Found at position:");
 printf("%d",binsearch(x,v,10));
 return 0; 		 
}

