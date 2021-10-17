#include <stdio.h>
#include <stdlib.h>

//   a-z  --> 97-122
//   A-Z  --> 65-90

int return_numb(char symb);

int main(void)
{
    char ch;

    while ((ch = getchar()) != EOF)
    {
        if (ch == 26)
            break;
        if (ch == '\n')
            printf("symbol 'Enter' - his number is %d\n", return_numb(ch));
        else
            printf("symbol %c - his number is %d\n", ch, return_numb(ch));


    }

    printf("i knew that i would do it\n");

    return 0;
}


int return_numb(char symb)
{
    int number;

    if (symb >= 'a' && symb <= 'z')
        number = symb - 96;
    else if (symb >= 'A' && symb <= 'Z')
        number = symb - 64;
    else
        number = 0;

    return number;

}
