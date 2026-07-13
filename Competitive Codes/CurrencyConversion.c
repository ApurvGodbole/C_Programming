//Accept Amount in US Dollar and convert and Display it in Indian Rupees
// 1 USD ----> 70 Rupees

#include<stdio.h>

int ConvertCurrency(int iNo)
{
    int iAns = 0;

    iAns = iNo * 70;

    printf("The USD TO Rs Conversion is : %d ",iAns);

}

int main()
{
    int iValue = 0;

    printf("Enter a Number : \n ");
    scanf("%d",&iValue);

    ConvertCurrency(iValue);

    return 0;
}