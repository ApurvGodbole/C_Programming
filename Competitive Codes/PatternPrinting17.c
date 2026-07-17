/*
    INPUT : iRow = 4    iCol = 5

    OUTPUT : 2  4   6   8   10
             1  3   5   7   9
             2  4   6   8   10
             1  3   5   7   9

*/

#include<stdio.h>

void Display(int iRow , int iCol)
{
    int i = 0;
    int j = 0;
    int iCount1 = 0;
    int iCount2 = 0;

    if ( iRow != iCol )
        {
            printf("Invalid Input \n");
            printf("Number of Rows and Columns should be same \n");
            return ;
        }

    for(i = 1 ; i<= iRow ; i++ )
    {
        for(j = 2 , iCount1 = 1 , iCount2 = 2 ; j <= iCol ; j++)
        {
            if(i % 2 == 0)
            {
                printf("%d\t",iCount1);
                iCount1 += 2;
            }
            else
            {
                printf("%d\t",iCount2);
                iCount2 += 2;
            }
        }
        printf("\n");
    }
}
int main()
{
    int iValue1 = 0 , iValue2= 0 ;

    printf("Enter Number of Rows : \n");
    scanf("%d",&iValue1);

    printf("Enter Number of Columns : \n");
    scanf("%d",&iValue2);

    Display(iValue1 , iValue2);

    return 0;
}