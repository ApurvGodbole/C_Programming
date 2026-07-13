//Accept number from user and print its numberline

#include<stdio.h>

int Display(int iNo)
{
    int iAns = 0;
    int iCnt = 0;
    int iNeg = 0;

    for(iNeg = -iNo ; iNeg <= iNo ; iNeg ++)
    {
        printf("%d",iNeg);
    }

    for(iCnt = 0 ; iCnt < iNo ; iCnt)
    {
        printf("%d",iCnt);
    }
   
    printf("%d,%d",iNeg,iCnt);

}
int main()
{
    int iValue = 0;
    int iResult = 0;

    printf("Enter a Number : \n ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}