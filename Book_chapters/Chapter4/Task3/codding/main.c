#include <stdio.h>
#include <ctype.h>

int main()
{
    int ch;
    int c_low, c_high, c_oth;
    c_low = 0;
    c_high = 0;
    c_oth = 0;

    while ((ch = getchar()) != EOF)
    {
        if (islower(ch))
            c_low++;
        else if (isupper(ch))
            c_high++;
        else
            c_oth++;
    }

    printf("count of symbol in sentence - %d\n"
           "low symbols - %d\n"
           "high symbols - %d\n"
           "other symbols - %d\n", c_low +c_high + c_oth, c_low, c_high, c_oth);

    return 0;
}
