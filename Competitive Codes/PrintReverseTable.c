//Take a number from user and print its table in reverse order on the screen

#include<stdio.h>

int Display(int iNo)
{
    int iAns = 0;
    int iCnt = 10 ;

    while ( iCnt > 0 )
    {
        iAns = iNo * iCnt ;
        printf("%d    ",iAns);
        iCnt --;
    }
    return iAns;
}

int main()
{
    int iValue = 0;

    printf("Enter a Number : \n ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}