//Write a Program to find Even Factorials of a Number 

#include<stdio.h>

int EvenFactors(int iNo)
{
    int iAns1 = 0;
    int iCnt = 1;

    for (iCnt = 1 ; iCnt <= (iNo/2) ; iCnt ++)
    {
        if(iNo % iCnt == 0 && iCnt % 2 == 0)
        {       
            iAns1 = iAns1 + iCnt;
        }
    }
    return iAns1;
}

int OddFactors(int iNo)
{
    int iAns2 = 0;
    int iCnt = 1;

    for (iCnt = 1 ; iCnt <= (iNo/2) ; iCnt ++)
    {
        if(iNo % iCnt == 0 && iCnt % 2 != 0)
        {
            iAns2 = iAns2 + iCnt;
        }
    }
    return iAns2;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    int iEvenSum = 0 , iOddSum = 0;

    printf("Enter a Number : \n ");
    scanf("%d",&iValue);

    iEvenSum = EvenFactors(iValue);
    iOddSum = OddFactors(iValue);

    iRet = iEvenSum - iOddSum;

    iRet = EvenFactors(iValue) - OddFactors(iValue);

    printf("The Difference between the Number of Even Factors and Odd Factors is %d  : ",iRet);

    return 0;
}