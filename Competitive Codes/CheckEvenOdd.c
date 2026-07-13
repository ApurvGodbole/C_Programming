//Take a Number from user and check wheather it is even or odd

#include<stdio.h>

int CheckEvenOdd(int iValue1)
{
    int iAns = 0;
    
    if(iValue1 % 2 == 0)
    {
        printf("The Entered Number is Even ");
    }
    else
    {
        printf("The Entered Number is Odd ");
    }
}
int main()
{
    int iNum = 0;
    int iResult = 0;

    printf("Enter a Number : \n ");
    scanf("%d",&iNum);

    iResult = CheckEvenOdd (iNum);

    return 0;
}