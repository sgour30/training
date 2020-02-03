#include<stdio.h>
int isspace(char arr[10])
{
	int i=0;
	int a=0;
	while(arr[i]!='\n')
	{
		if(arr[i]==" ")
		{
                 a=a+1;
		}
		i++;
	}
	return a;
}
int main()
{
	char arr[10];
	printf("Enter Array");
	for(int i=0;i<10;i++)
	{
	 scanf("%c",&arr[i]);
	}
	int space;
	space=isspace(arr);
	printf("number of spaces are :%d",space);
	return 0;
}

