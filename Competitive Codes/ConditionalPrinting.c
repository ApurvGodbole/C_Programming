//Accept a number from user , if less than 50 print small
// if greater than 50 and less than 100 print medium
// if greater than 100 then print large

#include<stdio.h>

int Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 50)
    {
        printf("small");
    }
    else if(iNo > 50 && iNo < 100)
    {
        printf("medium");
    }
    else
    {
        printf("large");
    }

}
int main()
{
    int iValue = 0;

    printf("Enter a Number : \n ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}