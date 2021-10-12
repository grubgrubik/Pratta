#include <stdbool.h>
#include <stdio.h>
#include "func_describle.h"



int main(void)
{
    int m_select;
    bool key = true;

    while (key)
    {
        main_menu();
        m_select = check_menu();

        switch (m_select)
        {
        case 1:
            printf("\nyou chose copy file\n");
            break;
        case 2:
            printf("\nyou chose move file\n");
            break;
        case 3:
            printf("\nyou chose delete file\n");
            break;
        case 4:
            key = false;
            break;
        }

        //printf("\nall operations are done\n");
    }


    printf("\ni knew, that i would do it ))\n");
    return 0;
}


