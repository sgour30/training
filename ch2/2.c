#include<stdio.h>
int main()
{
	int i=0, s[2]={0,0};
	s[i]= ++i;
	printf("%d",s[0]);
        for(i=0;i<2;i++)
		printf("%d",s[i]);
	return 0;
}	
