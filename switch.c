#include<stdio.h>
int main()
{
 char a;
 scanf("%c",&a);
 switch(a)
 {
  case '@':
	  printf("1");
	  break;
  case '$':
	 if(a=='$')
	 { 
          switch(a)
	  {
		case '$' :	
	        printf("qwerty");
	 
	   }
	 }
	 else
	 {
         printf("else");
	 }
         break;
  case '^':
	 printf("3");
         break;
  default: 
          printf("Default");	
        	
 }


}

