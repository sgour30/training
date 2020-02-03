#include<stdio.h>
#include<string.h>
int main()
{
	char name[]="\0HiHello";
	printf("%li%li\n",strlen(name),sizeof(name));
	return 0;
}
