#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
	int fd = open("nfile.txt",O_WRONLY,0777);
	printf("fd =%d",fd);
	int newfd= dup(fd);
	printf("\nnew fd=%d",newfd);
	fd= dup2(fd, newfd);
        printf("\nnew fd%d =",newfd);
        printf("\nfd %d",fd);
    //  write(fd,"samarth",7);
        write(newfd,"wow",3);	
}


