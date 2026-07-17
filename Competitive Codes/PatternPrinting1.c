/*
    INPUT:  5
    OUTPUT: A   B   C   D   E
*/

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    char Ch = '\0';

    for(iCnt = 1 , Ch ='A'; iCnt <= iNo ; iCnt ++ , Ch++)
    {
        printf("%c\t",Ch);
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