#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
	int fd = open("nfile.txt",O_WRONLY,0777);
	printf("%d",fd);
	int newfd= dup(fd);
	printf("\n%d",newfd);
	fd= dup2(fd, newfd);
        printf("%d",newfd);
        printf("%d",fd);	
}


