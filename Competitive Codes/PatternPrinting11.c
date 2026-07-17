/*
    INPUT : iRow = 4    iCol = 4
    OUTPUT:    A    B    C    D
               A    B    C    D
               A    B    C    D
               A    B    C    D
*/

#include<stdio.h>

void Display(int iRow , int iCol)
{
    int i = 0;
    int j = 0;
    char ch1 = '\0';

    for(i = 0 ; i <= iRow ; i++)
    {
        for(j = 1 ,ch1 = 'A'; j <= iCol ; j ++ , ch1++)
        {
            printf("%c\t",ch1);
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