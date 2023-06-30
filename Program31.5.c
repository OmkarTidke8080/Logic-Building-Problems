// Write a program which display the addition of digits of all elements from singly linear linked list

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

    newn->Data = no;
    newn->Next = NULL;

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
    printf("ELements of linked list are : \n");

    while(Head != NULL)
    {
        printf("| %d | -> ",Head->Data);
        Head = Head -> Next;      
    }
}

void SumDigits(PNODE Head)
{
    int iSum = 0;
    int iDigit = 0;

    while(Head != NULL)
    {
            int iNo = Head->Data;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;
        }
        printf("%d\n",iSum);

        iSum = 0;
        Head = Head->Next;
    }
    
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First,111);
    InsertFirst(&First,51);
    InsertFirst(&First,21);
    InsertFirst(&First,11);

    Display(First);
    
    SumDigits(First);

    

}

