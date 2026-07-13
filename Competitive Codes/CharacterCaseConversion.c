//Accept one character from user and convert case of that character

#include<stdio.h>

int ConvertCase(char cCharacter)
{
    if(cCharacter >= 'A' && cCharacter <='Z')
    {
        printf("The Converted Case is : %c ",cCharacter + 32);
    }
    else if(cCharacter >= 'a' && cCharacter <= 'z')
    {
        printf("The Converted Case is : %c ",cCharacter - 32);
    }
    else
    {
        printf("The input is Invalid ");
    }
}

int main()
{
    char cLetter;
    char cResult;

    printf("Enter the Character : \n ");
    scanf("%c",&cLetter);

    cResult = ConvertCase(cLetter);

    return 0;
}