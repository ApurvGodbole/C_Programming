//Write a program which asks user for a number and prints numbers till that number 

#include<stdio.h>

int Display(int iNo)
{
    int iAns = 0;

    int iCnt = 0;

    while (iCnt < iNo)
    {
        iAns = iAns + iCnt ;
        printf("%d\n ",iCnt);
        iCnt ++; 
    }
    return iAns;
}

int main()
{
    int iValue = 0;
    int iResult = 0;

    printf("Enter a Number : \n ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}