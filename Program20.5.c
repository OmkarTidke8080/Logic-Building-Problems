// Accept division from student and depends on the division display exam timing. there are 4 divisions in school as A,B,C,D. Exam of division A at 7 am , B at 8 am, C at 9 20 am, D at 10 30am
// Application should be case insensitive

#include<stdio.h>

float DisplaySchedule(char cDiv)
{
    switch(cDiv)
    {
        case 'A' :
        case 'a' :
        
            printf("Your exam is at 7 Am");
            break;


        case 'B' :
        case 'b' :

            printf("Your exam is at 8 : 30 Am");
            break;

        case 'C' :
        case 'c' :

            printf("Your exam is at 9 : 20 Am");
            break;

        case 'D' :
        case 'd' :

            printf("Your exam is at 10 : 30 Am");
            break;


    }
}

int main()
{
    char cValue = '\0';
    float fRet ;


    printf("ENter your division : ");
    scanf("%c",&cValue);

     fRet =  DisplaySchedule(cValue);


    return 0;
}
