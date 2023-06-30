// Write a program which return second maximum elements from singly linear list

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

void InsertFirst(PPNODE Head,int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->Data = no;
    newn->Next = NULL;

    if(*Head == NULL)
    {
        *Head = newnl
    }
    else
    {
        newn->Next = *Head;
        *Head = newn;        
    }
}

void Display(PNODE Head)
{
    printf("Elements of Linked List are : \n");

    while(Head != NULL)
    {
        printf(" | %d | -> ",Head->Data);
        Head= Head -> Next;
    }
    printf("NULL\n");
}

void SecMaximum(PNODE Head)
{
    int iCnt = 0;
    

}