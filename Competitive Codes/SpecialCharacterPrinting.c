//Write a program which accepts a number from user and print that number of $ and * on screen

#include<stdio.h>

int Display(int iNo)
{
    int iAns = 0;
    int iCnt = 0;

    for (iCnt = 0 ; iCnt < iNo ; iCnt ++)
    {
        printf("$  * \n ");
    }
}   

int main()
{
    int iValue = 0;
    int iResult = 0;
    
    printf("Enter a Number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}