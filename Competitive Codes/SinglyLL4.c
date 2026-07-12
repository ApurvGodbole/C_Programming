/*
    PROBLEM STATEMENT:
        Count Frequency of Given Number
        Count how many times a number appears.
        int Frequency( PNODE Head, int No) ;
*/  

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node
{
    int data;
    struct node * next ;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void Display(PNODE head)
{
    while(head != NULL)
    {
        printf(" | %d | -> ",head -> data);
        head = head -> next;
    }
    printf("NULL\n");
}

void InsertFirst(PPNODE head , int iNo)
{
    PNODE newn = NULL;
    newn = (PNODE) malloc (sizeof(NODE));

    newn -> data = iNo;
    newn -> next = (*head);
    *head = newn;
}

int Frequency(PNODE head , int iNo)
{
    int iCount = 0;

    while(head != NULL)
    {
        if((head -> data) == iNo)
        {
            iCount ++;
        }
        head = head -> next;
    }
    return iCount;
}

int main()
{
    int iRet = 0;
    PNODE head = NULL;

    InsertFirst(&head,51);
    InsertFirst(&head,21);
    InsertFirst(&head,4);
    InsertFirst(&head,4);
    InsertFirst(&head,4);
    
    Display(head);

    iRet = Frequency(head ,4);
    
    printf("Frequency is : %d ",iRet);

    return 0;
}