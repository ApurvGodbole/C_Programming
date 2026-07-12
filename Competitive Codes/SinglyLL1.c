/*
    PROBLEM STATEMENT :
        Search an Element
        Check whether a number is present.
        bool Search (PNODE Head, int No) ;
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

bool Search (PNODE head , int iNo)
{
    while(head != NULL)
    {
        if(head -> data == iNo)
        {
            return true;
        }
        head = head -> next;
    }
    return false;
}

int main()
{
    bool bRet = false;
    PNODE head = NULL;

    InsertFirst(&head,51);
    InsertFirst(&head,21);
    InsertFirst(&head,11);
    
    Display(head);

    bRet = Search (head , 11);

    if(bRet == true)
    {
        printf("Number Exists in the Linked List\n");
    }
    else
    {
        printf("Number does not exist in the Linked List \n");
    }


    return 0;
}
