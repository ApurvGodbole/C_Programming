//Accept a number from user and print odd numbers till that accepted number 

#include<stdio.h>

int DisplayOdd(int iNo)
{
    int iCnt = 0;

    for (iCnt = 0 ; iCnt <= iNo ; iCnt ++)
    {
        if (iCnt % 2 != 0)
        {
            printf("%d\n",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a Number");
    scanf("%d",&iValue);

    DisplayOdd(iValue);

    return 0;
}