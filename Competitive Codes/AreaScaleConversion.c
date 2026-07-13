//Accept a number which accept area in square feet and convert it into square meter
// 1 Square Feet = 0.0929 Square Meter

#include<stdio.h>

int ConvertArea(int iNo)
{
    int iAns = 0;

    iAns = iNo * 0.0929;

    return iAns ;
}

int main()
{
    int iValue = 0;
    int iAns = 0;

    printf("Enter Area in Square Feet : \n ");
    scanf("%d",&iValue);

    iAns = ConvertArea(iValue);

    printf("Area in Square Meter will be : %d ",iAns);

    return 0;
}