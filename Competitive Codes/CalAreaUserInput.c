//Take input of Width and Height from user and calculate and Display Area of a Rectangle
// Area = Width x Height 

#include<stdio.h>

int CalculateArea(int iNo1 , int iNo2)
{
    int iAns = 0;

    iAns = iNo1 * iNo2;

    printf("The Area of Rectangle is :  %d ",iAns);

}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter Width : \n ");
    scanf("%d",&iValue1);

    printf("Enter Height : \n ");
    scanf("%d",&iValue2);

    CalculateArea(iValue1,iValue2);

    return 0;
}
