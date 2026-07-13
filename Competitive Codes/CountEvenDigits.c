// Accept a Number from user and return the count of Even Digits 

#include<stdio.h>

int Display(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    while (iNo != 0 )
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
        {
            iCnt ++;
            iNo = iNo / 10;
        }
    }
    printf("Number of Even Numbers is : %d ",iCnt);
}

int main()
{
    int iValue = 0;
    
    printf("Enter a Number : \n ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}