/*
    PROBLEM STATEMENT :
        Last Occurrence Position
        Return position of last occurrence.
        int LastOccur (PNODE Head, int No) ;
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

void DisplayEven(PNODE head)
{
    printf(" %d \n",head -> data);
}

void InsertFirst(PPNODE head , int iNo)
{
    PNODE newn = NULL;
    newn = (PNODE) malloc (sizeof(NODE));

    newn -> data = iNo;
    newn -> next = (*head);
    *head = newn;
}

int LastOccur(PNODE head , int iNo)
{
    int iPos = 1 ;
    int iLastPos = -1;
   
    while(head != NULL)
    {
        if((head -> data)  == iNo )
        {
            iLastPos = iPos;
        }
        head = head -> next;
        iPos ++;
    }
    return iLastPos;
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

    iRet = LastOccur(head , 21);

    printf("The Position for Last Occurence is : %d\n ",iRet);

    return 0;
}