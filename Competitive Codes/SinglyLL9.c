/*
    PROBLEM STATEMENT :
        Count Numbers Greater Than X
        Count elements greater than given number.
        int CountGreater (PNODE Head, int X) ;
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

int CountGreater (PNODE head , int X)
{
   int iCount = 0;

    while(head != NULL)
    {
        if((head -> data) > X )
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

    InsertFirst(&head,21);      // position : 5
    InsertFirst(&head,21);      // position : 4
    InsertFirst(&head,4);
    InsertFirst(&head,21);
    InsertFirst(&head,8);
    
    Display(head);

    iRet = CountGreater(head , 20);

    printf("The Number of Occurences of Numbers greater than X are : %d\n ",iRet);

    return 0;
}