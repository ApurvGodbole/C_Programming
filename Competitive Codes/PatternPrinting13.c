/*
    INPUT : iRow = 4    iCol = 4
    OUTPUT:    A    A    A    A     A
               B    B    B    B     B
               C    C    C    C     C
*/

#include<stdio.h>

void Display(int iRow , int iCol)
{
    int i = 0;
    int j = 0;
    char ch2 = '\0';

    for(i = 1 ,ch2 = 'A'; i <= iRow ; i++ , ch2++)
    {
        for(j = 1 ; j <= iCol ; j ++)
        {
            printf("%c\t",ch2);
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