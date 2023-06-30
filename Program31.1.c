// Write a program  which displays all elements which are perfect from sinlgy linked list

/*
   int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= (iNo/2) ; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
        if(iSum > iNo)
        {
            break;
        }
    }

    if(iSum == iNo)
    {
        return true;
    }
    else
    {
        return false;
    }


*/

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

void Perfect(PNODE Head)
{
   int iCnt = 0;
   int iSum = 0;
   int iNo = 0;

   while(Head != NULL)
   {
    iNo = Head->Data;

    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }
        if(iSum == iNo)
        {
            printf("%d is perfect Number\n",iNo);
        }
        iSum = 0;
        Head = Head->Next;
    }
   }


int main()
{
    PNODE First = NULL;
    int iValue = 0;
    int iCount = 0;
    int iRet = 0;

    InsertFirst(&First,11);
    InsertFirst(&First,28);
    InsertFirst(&First,17);
    InsertFirst(&First,496);
    InsertFirst(&First,6);
    InsertFirst(&First,89);

    Display(First);
    
   Perfect(First);

 
   




}



