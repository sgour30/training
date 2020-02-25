#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
	int fd = creat("nfile.txt",0755);
	write(fd,"samarthgour",3);


}

