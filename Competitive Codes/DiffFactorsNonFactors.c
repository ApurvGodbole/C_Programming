//Take a Number from user and return the difference of summation of all its Factors and Non-Factors

#include<stdio.h>

int FactorsSum(int iNo)
{
    int iAns = 0;
    int iSumf = 0;
    
    int iCnt = 1;
    for(iCnt = 1 ; iCnt <= iNo ; iCnt ++)
    {
        if (iNo % iCnt == 0)
        {
            iSumf = iSumf + iCnt;
        }
    }
    return iSumf;
}

int NonFactorsSum(int iNo)
{
    int iResult = 0;
    int iSumnf = 0;

    int iCnt = 1;
    for(iCnt = 1 ; iCnt <= iNo ; iCnt ++)
    {
        if (iNo % iCnt != 0)
        {
            iSumnf = iSumnf + iCnt ;
        }
    }
    return iSumnf;
}

int main()
{
    int iRet = 0;
    int iValue = 0;

    printf("Enter a Number : \n ");
    scanf("%d",&iValue);

    FactorsSum(iValue);
    NonFactorsSum(iValue);

    iRet = FactorsSum(iValue) - NonFactorsSum(iValue);

    printf("The Difference will be : %d ",iRet);

    return 0;
}