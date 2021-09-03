#include <stdio.h>

char get_first(void);

int main()
{
    int ch;

    while ((ch = get_first()) != 'l')
    {
        printf("line1\n");
        putchar(ch);
        printf("line2\n");
    }

    printf("Hello world!\n");
    return 0;
}



char get_first(void)
{

    int ch;

    while ((ch = getchar()) == '\n')
        continue;

    while (getchar() != '\n')
        continue;
    return ch;
}
