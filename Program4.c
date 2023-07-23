// Write a program which accept file name from user and display size of file

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/stat.h>

int main(int argc, char *argv[])
{
    struct stat sobj;

    if(argc != 2)
    {
        printf("Insufficient arguments\n");
        return -1;
    }

    stat(argv[1],&sobj);
    printf("Size of file is : %d ",sobj.st_size);
}