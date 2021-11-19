#include <stdio.h>

#define C_MASS 11

void show_mass(double arr[], int c);
void reverse_mass(double arr_old[], double arr_new[], int c);

int main(void)
{
    // 11 elements of massive
    double mass_old[C_MASS] = {132.1, 54.8, 91.9, 11.1, 43.5, 87.5, 69.3, 87.2, 78.1, 101.7, 84.2};

    // 10 elements of massive
    // double mass_old[C_MASS] = {132.1, 54.8, 91.9, 11.1, 43.5, 87.5, 69.3, 87.2, 78.1, 101.7};

    double mass_new[C_MASS];

    printf("Origin massive:\n");

    show_mass(mass_old, C_MASS);

    printf("Reverse massive:\n");

    reverse_mass(mass_old, mass_new, C_MASS);
    show_mass(mass_new, C_MASS);

    return 0;
}

void show_mass(double arr[], int c)
{
    for (int i = 0; i < c; i++)
    {
        printf("%.1lf ", arr[i]);
    }
    putchar('\n');
}

void reverse_mass(double arr_old[], double arr_new[], int c)
{
    for (int i = 0, j = c; i < c; i++, j--)
    {
        arr_new[j - 1] = arr_old[i];
    }
}
