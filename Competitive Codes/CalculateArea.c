//Take Radius from user and calculate area of circle using formula Pie x R^2

#include<stdio.h>

int Area(int iNo)
{
    int iAns = 0;

    iAns = (3.14) * (iNo) * (iNo);
    
    printf("The Area of  Circle is : %d ",iAns);

}

int main()
{
    int iValue = 0;

    printf("Enter the value of Radius : ");
    scanf("%d",&iValue);

    Area(iValue);

    return 0;
}