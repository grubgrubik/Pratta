#include <stdio.h>
#include "func_describle.h"

void main_menu(void)
{
    printf("Select one of these options:\n");
    printf("1) copy files  \t\t\t2) move files\n"
           "3) delete files\t\t\t4) exit from program\n");
    printf("Enter the chose number: ");

}


int check_menu(void)
{
    int key;
    char cln;

    while ((scanf("%d", &key)) != 1 || key < MIN_MENU || key > MAX_MENU)
    {
        if ((cln = getchar()) == '\n')
            putchar(cln);
        else
        {   printf("you enter incorrect symbol: ");
            while ((cln = getchar()) != '\n')
                putchar(cln);
        }

        printf("\nChose only number from 1 to 4\n\n");
        main_menu();
        putchar('\n');

    }
    return key;
}
