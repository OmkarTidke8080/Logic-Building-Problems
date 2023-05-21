// Write a program which accepts name form user and print that name

#include<stdio.h>

int main()
{
    char Name[30];
    printf("Please Enter full name\n");
    scanf("%s",&Name);

    printf("Your name is  %s \n",Name);

    return 0;
}