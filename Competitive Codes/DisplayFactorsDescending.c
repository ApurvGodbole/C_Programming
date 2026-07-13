//Accept Number from user and display its factors in decreasing order

#include<stdio.h>

int CheckFactor(int iNo)
{
    int iAns = 0;
    int i = iNo;

    while ( i > 0 )
    {
        if(iNo % i == 0)
        {   
            printf("%d\n",i);
            iAns = iAns + 1;
        }
         i-- ; 
    }
    return iAns;
}

int main()
{
    int iResult = 0;
    int iValue = 0;

    printf("Enter a Number : \n ");
    scanf("%d",&iValue);

    iResult = CheckFactor(iValue);

    printf("The Addition of the Factors of %d will be : %d ",iValue,iResult);

    return 0;
}