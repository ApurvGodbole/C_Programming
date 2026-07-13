//Write a program which accepts a number from user and prints its even factors from the user

#include<stdio.h>

int GetFactors(int iValue)
{
    int iAns = 0;

    for (int i = 1 ; i <= iValue ; i ++)
    {
        if(iValue % i == 0 && i % 2 == 0 )
        {
            printf("%d \n",i);
        }
    }
}
int main()
{
    int iNum;
    int iResult ;

    printf("Enter a Number : \n ");
    scanf("%d",&iNum);

    iResult = GetFactors(iNum);

    return 0;
}