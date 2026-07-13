//Accept a Number from user and print that Number of * on screen 

#include<stdio.h>

void Accept(int iNo)
{
    int iCnt = 0;
    
    for (iCnt = 0 ; iCnt <= iNo ; iCnt ++ )
    {
        printf("*");
    }
}

int main()
{
    int iValue = 5;
    Accept(iValue);

    return 0;
}