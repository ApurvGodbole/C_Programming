//Write a program which accepts number from user and displays multiplication of its factors 

#include<stdio.h>

int MultiplyFactors(int iNo)
{
    int iAns = 0;
    int iProduct = 0;
    int i = 1;
    
    while( i <= iNo )
    {
        if(iNo % i == 0)
        {
            iProduct = iNo * i;
            i ++;
        }
    }
}

int main()
{
    int iResult = 0;
    int iNum = 0;

    printf("Enter a number : \n ");
    scanf("%d",&iNum);

    iResult = MultiplyFactors(iNum);

    printf("Multiplication of the factors of %d is : %d ",iNum,iResult);

    return 0;
}