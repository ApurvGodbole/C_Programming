//Accept a number from user , if number is less than 10 , print Hello or print Demo

#include<stdio.h>

int CheckNumber(int iNo)
{
    int iAns = 0;

    if(iNo < 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }
}

int main()
{
    int iRet = 0;
    int iValue = 0;

    printf("Enter a Number : \n ");
    scanf("%d",&iValue);

    iRet = CheckNumber(iValue);

    return 0;
}