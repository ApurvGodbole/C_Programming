/*
    INPUT : 8
    OUTPUT: 2   4   6   8   10  12  14  16
*/

#include<stdio.h>
void Display(int iNo)
{
    int iCnt = 0;
    int iDigit = 0;

    for(iCnt = 1 ; iCnt <= (iNo * 2) ; iCnt ++)
    {
        iDigit = iCnt;
        printf("%d\t",iDigit);
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