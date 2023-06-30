//Write a program which displays all elements which are Prime from sinlgy linear linked list

/*
int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= (iNo/2) ; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }
*/
// Write a program which return the Smallest element from sinly linear linked list

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;


struct node
{
    int Data;
    NODE *Next;
};


void InsertFirst(PPNODE Head,int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->Next = NULL;
    newn->Data = no;

    if(*Head == NULL)
    {
        *Head = newn;
    }

    else
    {
        newn -> Next = *Head;
        *Head = newn;
    }
}

void Display(PNODE Head)
{
    printf("Elements of linked list are : \n");

    while(Head != NULL)
    {
        printf("%d\t",Head->Data);
        Head = Head -> Next;
    }
    printf("NULL\n");
}
void Prime(PNODE Head)
    {
        int iNo = 0;
        int iCnt = 0;

        while(Head != NULL)
        {
            iNo = Head->Data;

            for(iCnt = 2; iCnt <= (iNo/2); iCnt++)
            {
                if((iNo % iCnt) != 0)
                {
                    printf("%d is Prime Number\n",iNo);
                }                
            }
         Head = Head->Next;
   
        }

    }

int main()
{
    PNODE First = NULL;
    int iValue = 0;
    int iCount = 0;


    InsertFirst(&First,21);
    InsertFirst(&First,17);
    InsertFirst(&First,37);
    InsertFirst(&First,11);

    Display(First);
    
    Prime(First);
   




}



