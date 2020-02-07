#include<stdio.h>
int main()
{
  
 struct 
 {
	 int arr[5];

 }obj;
 

 printf("Enter array elements");
 for(int i=0;i<5;i++)
 {
	 scanf("%d",&obj.arr[i]);
 }
 printf("Number divisible by two are");

 for(int i=0;i<5;i++)
 {
  if(obj.arr[i]%2==0)
  {
   printf("%d",obj.arr[i]);
  }
 }

}
 
