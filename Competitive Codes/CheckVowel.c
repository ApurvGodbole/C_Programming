//Accept a character from user and check wheather it is a vowel (a,e,i,o,u) 

#include<stdio.h>

int CheckVowel(char cCharacter)
{
   if (cCharacter == 'a' || cCharacter == 'e' || cCharacter == 'i' ||
        cCharacter == 'o' || cCharacter == 'u' ||
        cCharacter == 'A' || cCharacter == 'E' || cCharacter == 'I' ||
        cCharacter == 'O' || cCharacter == 'U')
    {
        printf("Entered Character is a Vowel");
    }
    else 
    {
        printf("Entered Character is NOT a Vowel");
    }
}

int main()
{
    char cLetter;

    printf("Enter a Character : \n ");
    scanf("%c",&cLetter);

    CheckVowel(cLetter);

    return 0;
}