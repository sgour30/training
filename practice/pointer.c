#include<stdio.h>
int swap(int a, int b)
{
        int temp;
	temp=a;
        a=b;
	b=temp;
	return b;
	
}
int main()
{
   printf("b after swap:%d",swap(10,20));
}



















/*int main()
{
	int a=123;
	int *ptr=&a;
	printf("%d\n",*ptr);
	//printf("%d\n",++*ptr);
	printf("%x",ptr);
}*/


	

