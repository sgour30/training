#include<stdio.h>
int main()
{
	int i=10;
	float f=15.123;
	double d=99999;
	char c = 'a';

	void *ptr=NULL;
        ptr =&i;
	printf("%d",*(int*)ptr);
       //printf("%f",*(float*)ptr);
        ptr=&f;
        printf("\n%d",*(int*)ptr);
	ptr=&d;
	printf("\n%lf",*(double*)ptr);
	ptr=&c;
	printf("\n%c",*(char*)ptr);
	return 0;
}
