// Write a program to find factorial of given number 

#include<stdio.h>

int Display(int iNo)
{
    int iCnt = iNo;

    while(iCnt > 0)
    {
        printf("%d  *  ",iCnt);
        iCnt --;
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