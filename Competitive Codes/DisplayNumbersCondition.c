//Accept two numbers from the user and display the first number in second number of times

#include<stdio.h>

int DisplayNumber(int iValue1 , int iValue2)
{
    int iPrint = 0;
    int iAns = 0;

    if(iValue1 < 0)
    {
        iValue1 = -iValue1 ;
    }

     if(iValue2 < 0)
    {
        iValue2 = -iValue2 ;
    }
    
    for ( iPrint = 0 ; iPrint < iValue2 ; iPrint++)
    {
            printf("%d\n",iValue1);
    }

}

int main()
{
    int iNo1 = 0 , iNo2 = 0;
    int iReturn = 0;

    printf("Enter The Number you want to print : \n ");
    scanf("%d",&iNo1);

    printf("Enter number of times you want to print : \n ");
    scanf("%d",&iNo2);

    iReturn = DisplayNumber(iNo1,iNo2);

    return 0;
}