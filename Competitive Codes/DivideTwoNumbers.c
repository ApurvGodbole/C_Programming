//////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Problem Statement : Division of Two Numbers Taken from User 
//
//////////////////////////////////////////////////////////////////////////////////////////////////
//
//             Algorithm :-
//  
//  START
//  Take input of two numbers from user in main function
//  Create a Different Function to perform Division
//  Check for Correct input from User
//  Perform Division of these two numbers and Display result in main class
//
///////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int DivideNumbers(int iNo1 , int iNo2)
{
    int iAns = 0;

    if( iNo2 > iNo1 )
    {
        return -1;
    }

    iAns = iNo1/iNo2 ;

    return iAns;
}

int main()
{
    int iResult = 0;
    int iValue1 = 0 , iValue2 = 0;

    printf("Enter the First Number : \n ");
    scanf("%d",&iValue1);

    printf("Enter the Second Number : \n ");
    scanf("%d",&iValue2);

    iResult = DivideNumbers(iValue1,iValue2);

    printf("The Division of the Two Numbers are : %d \n ",iResult);

    return 0;
}