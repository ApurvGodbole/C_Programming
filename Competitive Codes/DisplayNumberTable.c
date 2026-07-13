// Write a Program to Accept a Number from user and display its Table

#include<stdio.h>

int Display(int iNo)
{
    int iAns = iNo;
    int iCnt = 1;

    while (iCnt <= 10)
    {
        iAns = iNo * iCnt ;
        printf("%d     ",iAns);
        iCnt ++;
    }
    return iAns;
}

int main()
{
    int iValue = 0;

    printf("Enter a Number : \n ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}