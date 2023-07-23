// write a program which accept file name from user and create that file

#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>


int main(int argc, char * argv[])
{
  
  int fd = 0;

  if(argc != 2)
  {
    printf("Insuffiecint arguments : ");
    return -1;
  }

  fd = creat(argv[1],O_RDONLY);
  if(fd == -1)
  {
    printf("Unable to open file\n");
  }
  else
  {
    printf("FIle created succesfully \n");
  }






    return 0;
}
