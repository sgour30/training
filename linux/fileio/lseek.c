#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
  int fd= open("nfile.txt",O_RDWR,0755);
  write(fd,"hello",5);
  int off1 = lseek(fd,2,SEEK_SET);
  printf("%d",off1);
  int off2 =lseek(fd,3,SEEK_CUR);
  printf("%d",off2);
  write(fd,"samarth",7);

}

