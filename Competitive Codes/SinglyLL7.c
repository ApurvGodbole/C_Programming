/*
    PROBLEM STATEMENT
        First Occurrence Position
        Return position of first occurrence.
        int FirstOccur (PNODE Head, int No) ;
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

int FirstOccur(PNODE head , int iNo)
{
    int iPos = 1 ;
   
    while((head -> data) != iNo)
    {
        if((head -> data)  == iNo )
        {
            printf("First Occurence Seen ");
        }
        head = head -> next;
        iPos ++;
    }
    return iPos;
}

int main()
{
    int iRet = 0;
    PNODE head = NULL;

    InsertFirst(&head,51);
    InsertFirst(&head,21);
    InsertFirst(&head,4);
    InsertFirst(&head,21);
    InsertFirst(&head,8);
    
    Display(head);

    iRet = FirstOccur(head , 21);

    printf("The Position for First Occurence is : %d\n ",iRet);

    return 0;
}