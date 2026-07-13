// Accept Temperature in Fahrenheit and convert it into Celcius
// 1 Cecius = (Fahrenheit - 32) * (5/9)

#include<stdio.h>

int TemperatureConversion(int iNo)
{
    int iAns = 0;

    iAns = (iNo - 32) * (5.0/9.0);

    return iAns;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Temperature in Fahrenheit : \n ");
    scanf("%d",&iValue);

    iRet = TemperatureConversion(iValue);

    printf("The temperature in celcius will be : \n %d ",iRet);

    return 0;
}