#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{

	int fd= open("text.txt",O_RDWR|O_CREAT,0755);
	printf("%d",fd);
              

       
}
