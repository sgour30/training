#include<stdio.h>
int string(char s[],int i)
   {
    int c=0;
   
    if(s[i]=='\0')
    {
	return 0;
    }
    else
    {
	c++;
        i++;    
	return c + string(s,i) ;
    }
   }    
         




void main()
 {
   int i=0;
   int len;
   printf("Enter Your String");
   char s[50];
   scanf("%[^\n*]c",s);
   len=string(s,i);
   printf("%d",len);
 }
