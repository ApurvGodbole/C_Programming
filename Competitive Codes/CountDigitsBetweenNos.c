//
#include<stdio.h>

int Display(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    while (iNo != 0 )
    {
        iDigit = iNo % 10;
        if(iDigit >= 3 && iDigit <= 7)
        {
            iCnt ++;
        }
        iNo = iNo / 10;
    }
    printf("Number of entries between 3 and 7 is : %d ",iCnt);
}

int main()
{
    int iValue = 0;
    
    printf("Enter a Number : \n ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}