//Take a Number from the user and print that number of even numbers on the screen

#include<stdio.h>

int PrintNumber(int iValue1)
{
    int iCount = 0;
    int iNum = 0;

    while (iCount < iValue1)
    {
        printf("%d\n",iNum);
        iNum = iNum + 2;
        iCount++;
    }
}

int main()
{
    int iNum = 0;
    int iResult = 0;

    printf("Enter a Number : \n ");
    scanf("%d",&iNum);

    iResult = PrintNumber(iNum);

    return 0;
}