//Accept a Number from user and print first 5 multiples of it 

#include<stdio.h>

int Display(int iNo)
{
    int iCnt = 0;
    int iAns = 0;

    while(iCnt <= 5)
    {
        iAns = iNo * iCnt ;
        printf("%d \n ",iAns);
        iCnt ++;
    }
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a Number : \n ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}