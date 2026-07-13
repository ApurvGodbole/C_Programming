//Write a program which accept distance in km and convert it into m
// 1km = 1000 m

#include<stdio.h>

int CalculateDistance(int iNo)
{
    int iAns = 0;

    iAns = iNo * 1000;

    printf("Distance in meters is : %d ",iAns);
}

int main()
{
    int iValue = 0;

    printf("Enter Distance in km : \n ");
    scanf("%d",&iValue);

    CalculateDistance(iValue);

    return 0;
}
