#include<stdio.h>
int main()
{
	struct num
	{
		char ch;
		int i;
		float f;
		double d;
                
        } obj;
        
        printf("Enter a character value :"); 
        scanf("%c", &obj.ch);

	printf("Enter an integer value :");
	scanf("%d",&obj.i);
        
	printf("Enter a float value :");
	scanf("%f",&obj.f);

	printf("Enter a double value :");
	scanf("%le",&obj.d);

	printf("\nChar is : < %c > ,Integer is < %d >,Float is < %f >, Double is < %le >",obj.ch,obj.i,obj.f,obj.d);



}



