#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include<fcntl.h>
int main(int argc, char* argv[])
{
    DIR *mydir;
    struct dirent *myfile;
    struct stat mystat;

    mydir = opendir(argv[1]);
    while((myfile = readdir(mydir)) != NULL)
    {
	    int path=open(argv[1],O_RDONLY);
        fstatat(path,myfile->d_name, &mystat,0);    
        printf("size in bytes for reg file %ld\n",mystat.st_size);
        printf("Directory name %s\n", myfile->d_name);
	printf("User ID %d\n\n",mystat.st_uid);
    }
    
    closedir(mydir);
}
