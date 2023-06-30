// Write a progam which returns the palindrome numbers in the singly linear linked list

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

void Palindrome(PNODE Head)
{
    int iDigit = 0;
    int iReverse = 0;

    while(Head != NULL)
    {
        int iNo = Head -> Data;
        int Temp = iNo;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iReverse = (iReverse*10)+iDigit;
            iNo = iNo / 10;      
        }
        if(iReverse == Temp)
            {
                printf("%d",Temp);          
            }
            else
            {
                break;
            }
        iNo = 0;

        Head = Head -> Next;
        
    }
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First,111);
    InsertFirst(&First,51);
    InsertFirst(&First,414);
    InsertFirst(&First,11);

    Display(First);
    
    Palindrome(First);

    


}



