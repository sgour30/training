#include<stdio.h>
#pragma pack(8)
struct demo
{
	
	int i;
        float f;
        char ch;

};

int main()
{
	struct demo obj;
	printf("%d",sizeof(struct demo));
	return 0;
}
