// Accept a Number from user and return the Multiplication of all the digits 

#include<stdio.h>

int Display(int iNo)
{
    int iCnt = 1;
    int iDigit = 1;

    while(iNo != 0)
    {   
        iCnt = iNo % 10 ;
        iDigit = iDigit * iCnt;
        iNo = iNo / 10;
    }
    printf("%d",iDigit);
}

int main()
{
    int iValue = 0;

    printf("Enter a Number : \n ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}