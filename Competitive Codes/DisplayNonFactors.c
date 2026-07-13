//take a number from user and display its nonfactors on the screen

#include<stdio.h>

int CheckNonFactors(int iNo)
{
    int iAns = 0;

    for(int i = 1 ; i< iNo ; i ++)
    {
        if(iNo % i != 0)
        {
            printf("%d\n",i);
        }
    }
} 
int main()
{
    int iValue = 0;
    int iResult = 0;

    printf("Enter a Number : \n ");
    scanf("%d",&iValue);

    iResult = CheckNonFactors(iValue);

    return 0;
}