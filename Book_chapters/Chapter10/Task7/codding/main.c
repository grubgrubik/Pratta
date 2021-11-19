#include <stdio.h>


#define SIZE_L 3
#define SIZE_C 5

void initialize_mas(int colum, double *arr);
void show_mas(int colum, double *arr);
void copy_mass(int colum, double *arr_main, double *arr_new);

int main(void)
{

    double main_mass[SIZE_L][SIZE_C];
    double new_mass[SIZE_L][SIZE_C];

    printf("Initialized massive:\n");
    for (int i = 0; i < SIZE_L; i++)
    {
        initialize_mas(SIZE_C, main_mass + i);
    }

    for (int i = 0; i < SIZE_L; i++)
    {
        show_mas(SIZE_C, main_mass + i);
    }
    printf("\nCopy all elemrnts form main_massive to new_massive\nand result:\n");
    for (int i = 0; i < SIZE_L; i++)
    {
        copy_mass(SIZE_C, main_mass + i, new_mass + i);
    }

    for (int i = 0; i < SIZE_L; i++)
    {
        show_mas(SIZE_C, main_mass + i);
    }


    return 0;

}


void initialize_mas(int colum, double *arr)
{
    for (int i = 0; i < colum; i++)
    {
        *arr++ = 2.3 * i + 4.23 + ((int)arr / 10);
    }
}


void show_mas(int colum, double *arr)
{
    for (int i = 0; i < colum; i++)
    {
        printf("%.2lf  ", *arr++);
    }
    putchar('\n');
}


void copy_mass(int colum, double *arr_main, double *arr_new)
{
    for (int i = 0; i < colum; i++)
    {
        *arr_new++ = *arr_main;
    }
}
