//Accept one number and check wheather it is divisible by 5 or not in C

#include<stdio.h>
#include<stdbool.h>

int Check(int iNo)
{
    if((iNo % 5)==0)
    {
        return true;
    }
    else 
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false; 

    printf("Enter a Number : \n ");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if(bRet == true )
    {
        printf("Number is divisible by 5 ");
    }
    else
    {
        printf("Number is not divisible by 5 ");
    }
    return 0;
}