/*
    PROBLEM STATEMET
        Display Only Odd Elements
        Print only odd elements.
        void Displayodd (PNODE Head) ;
*/

/*
    PROBLEM STATEMENT :
        Display Only Even Elements
        Print only even elements.
        void DisplayEven (PODE Head) ;
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

int PrintEven(PNODE head)
{
    printf ("The Even Elements from the Linked List are : \n");

    while(head != NULL)
    {
        if((head -> data) % 2 != 0 )
        {
            DisplayEven(head);
        }
        head = head -> next;
    }
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

    iRet = PrintEven(head);

    return 0;
}