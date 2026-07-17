/*
    INPUT : iRow = 3    iCol = 4
    OUTPUT:    1    2    3    4 
               5    6    7    8
               9    10   11   12
*/

#include<stdio.h>

void Display(int iRow , int iCol)
{
    int i = 0;
    int j = 0;
    int iNum = 0;

    for(i = 1 , iNum = 1 ; i <= iRow ; i++ )
    {
        for(j = 1 ; j <= iCol ; j++)
        {
            printf("%d\t",iNum);
            iNum += 1;
        }
        printf("\n");
    }      
}


int main()
{
    int iValue1 = 0 , iValue2 = 0;

    printf("Enter Number of Rows : \n");
    scanf("%d",&iValue1);

    printf("Enter Number of Columns : \n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return 0;
}