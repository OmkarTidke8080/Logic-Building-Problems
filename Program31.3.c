// Write a program which returnrs addition of all even elements from sinlgy linear linked list

#include<stdio.h>
#include<stdlib.h>

typedef struct Node NODE;
typedef struct Node *PNODE;
typedef struct Node **PPNODE;

struct Node
{
    int Data;
    NODE *Next;
};


void InsertFirst(PPNODE Head, int no)
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
        newn->Next = *Head;
        *Head = newn;       
    }

}

void Display(PNODE Head)
{
    printf("Elements of Linked list are : \n");

    while(Head != NULL)
    {
        printf("%d\t", Head->Data);
        Head = Head->Next;
    }
    printf("NULL\n");

}

int EvenAddition(PNODE Head)
{
    int iCnt = 0;
    int iSum = 0;
    int iNo = 0;

    while(Head != NULL)
    {
         iNo = Head->Data;

        for(iCnt = 0; iCnt <= iNo; iCnt ++)
        {
            if((iNo % 2) == 0)
            {
                iSum = iSum + iNo;
            }
        }
        Head = Head->Next;
    }
    return iSum;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First,100);
    InsertFirst(&First,50);
    InsertFirst(&First,20);
    InsertFirst(&First,11);

    Display(First);

    iRet = EvenAddition(First);
    printf("Sum of all even elements is %d\n",iRet);



}
