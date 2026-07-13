//Write a Program to find Even Factorials of a Number 

#include<stdio.h>

int OddFactors(int iNo)
{
    int iCnt = 1;

    for (iCnt = 1 ; iCnt <= (iNo/2) ; iCnt ++)
    {
        if(iNo % iCnt == 0 && iCnt % 2 != 0)
        {
                printf("%d \n",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a Number : \n ");
    scanf("%d",&iValue);

    OddFactors(iValue);

    return 0;
}