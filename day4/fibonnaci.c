#include<stdio.h>
int main()
{
 int i,n,s;
 int n1=0;
 int n2=1;
 scanf("%d",&n);
 for(i=1;i<=n;++i)
 {
      s=n1+n2;
     printf("%d", s);
      n1=n2;
      n2=s;

 }	 
 return 0;
}
