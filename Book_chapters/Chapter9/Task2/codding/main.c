#include <stdio.h>
#include <stdlib.h>

void chline (char ch, int i, int j);

int main(void)
{
    int colum, row, key;
    char symbol, tmp_ch;
    key = 1;
    do
    {
        printf("\nenter symbol for drawing: ");
        symbol = getchar();

        printf("enter quantity of colums and rows, or enter two '0' for exit: ");
        scanf("%d %d", &colum, &row);

        if ((tmp_ch = getchar()) == '\n')
               putchar(tmp_ch);

        if (colum == 0 && row == 0)
        {
            printf("really exit?, enter '0' to exit or '1' to continue: ");
            scanf("%d", &key);
        }
        else
            chline(symbol, colum, row);


    }   while (key == 1);



    return 0;
}




void chline (char ch, int i, int j)
{
    for (int x = 0; x < j; x++)
    {
        for (int y = 0; y < i; y++)
            printf("%c", ch);

        putchar('\n');
    }
}
