//Write a program which accepts a number from user and print that number of * followed by that number of # on the screen

#include<stdio.h>

int Display(int iNo)
{
    int iCnt = 1;

    for(iCnt = 1 ; iCnt <= iNo ; iCnt ++)
    {
        printf(" *",iCnt);
    }

    for(iCnt = 1 ; iCnt <= iNo ; iCnt ++)
    {
        printf(" #",iCnt);
    }

}
int main()
{
    int iValue = 0;

    printf("Enter a Number : \n ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}