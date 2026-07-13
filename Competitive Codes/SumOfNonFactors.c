// Take input of a Number from user and display summation of all its non-factors

#include<stdio.h>

int SummationNonFactors(int iNo)
{
    int iAns = 0;
    int i = 1;

    while (i <= iNo)
    {
        if(iNo % i != 0)
        {
            iAns = iAns + i ; 
        }
        i ++;
    }

    return iAns;
}

int main()
{
    int iValue = 0;
    int iResult = 0;

    printf("Enter a Number : \n ");
    scanf("%d",&iValue);

    iResult = SummationNonFactors(iValue);

    printf("Summation of Non-Factors of %d is : %d ",iValue,iResult);

    return 0;
}