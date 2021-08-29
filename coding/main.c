#include <stdio.h>


int main()
{
    int count = 0;
    char ch;

    while ((ch = getchar()) != EOF)
    {
        if (ch == '\n')
            printf("\n \\n   - %-4d ", ch);

        else if (ch == '\t')
            printf(" \\t   - %-4d", ch);

        else if (ch == ' ')
            printf(" 'sp' - %-4d", ch);

        else
            printf(" %c   - %4d ", ch, ch);

        if (count == 5)
        {
            putchar('\n');
            count = 0;

        }


        count++;
    }



    return 0;
}
