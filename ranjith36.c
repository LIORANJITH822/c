#include <stdio.h>

void main()
{
    char string[MAX_SIZE];
    int alphabets, digits, specialchars, i;

    alphabets = digits = specialchars = i = 0;

    printf("Enter any string : ");
    gets(string);

    while(string[i]!='\0')
    {
        if((string[i]>='a' && string[i]<='z') 
        {
            alphabets++;
        }
        else if(string[i]>='0' && string[i]<='9')
        {
            digits++;
        }
        else
        {
            specialchars++;
        }

        i++;
    }

    printf("Total Alphabets : %d\n", alphabets);
    printf("Total Digits : %d\n", digits);
    printf("Total Special characters : %d\n", specialchars);

   getch();
}
