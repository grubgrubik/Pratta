#include <stdio.h>


int main()
{
    int const MIN = 0;
    int const MAX = 21;

    int n_low;
    int n_up;
    int n_aver;
    int key = 0;
    int g_number;

    n_low = MIN;
    n_up = MAX;


    printf("select number between %d and %d and i will guess it\n", MIN, MAX);
    printf("press any symbol different from digits to exit\n");

    while ((scanf("%d", &g_number)) == 1)
    {
        if (g_number > MAX || g_number < MIN)
        {
            printf("you enter less or bigger number, please select number between %d and %d : ", MIN, MAX);
            continue;
        }
        do
        {
            n_aver = (n_up + n_low) / 2;

            printf("i think you guessed number %d\n", n_aver);
            printf("if i am right, press '1'\n"
                   "if %d is less than your number press '2'\n"
                   "if %d is bigger than your number press '3'\n", n_aver, n_aver);

            while (!(scanf("%d", &key)))
            {
                printf("You enter incorrect number, please enter '1' or '2' or '3'");
                while (getchar() != '\n')
                    putchar(key);
            }

            if (key == 2)
                n_low = n_aver + 1;
            if (key == 3)
                n_up = n_aver -1;

            if (n_up < n_low)
            {
                printf("i thing something goes wrong, you are a liar\n\n");
                break;
            }


        } while (key !=1);

        if (g_number == n_aver && key == 1)
            printf("\n\ni GUES your number it is %d ))))\n\n", n_aver);

        n_low = MIN;
        n_up = MAX;

        printf("if you want to continue the play the game press new numeriq or not, press any letter: ");
    }




    printf("\nI know i do it\n");
    return 0;
}


