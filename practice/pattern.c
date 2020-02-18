#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n,m;
   
    scanf("%d", &n);
    for(int i=1;i<=2*n-2;i++)
    {
        printf("%d ",n);
	for(int j=1;j<2*n-1;j++)
	{
		printf("%d ",n);
	}
	printf("\n");
    } 
    return 0;
}

