#include <stdio.h>
#include <stdlib.h>


void copy_arr(float mass_copy1[], float mass_source[], int n);
void copy_ptr(float *mass_copy2, float *mass_source, int n);
void copy_ptrs(float *mass_copy3, float *mass_source, int *n);
void visible_mass(float mass[], int n);

int main()
{

    float mass_main[5] = {1.2, 2.3, 3.4, 4.5, 5.6};
    float mass_copy1[5];
    float mass_copy2[5];
    float mass_copy3[5];

    printf("\noriginal mass:\n");

    visible_mass(mass_main, 5);

    printf("\nmass_copy1:\n");
    copy_arr(mass_copy1, mass_main, 5);
    visible_mass(mass_copy1, 5);


    printf("\nmass_copy2:\n");
    copy_ptr(mass_copy2, mass_main, 5);
    visible_mass(mass_copy2, 5);

    printf("\nmass_copy3:\n");
    copy_ptrs(mass_copy3, mass_main, mass_main + 5);
    visible_mass(mass_copy3, 5);

    return 0;
}


void visible_mass(float mass[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%.1f ", mass[i]);
    }
    putchar('\n');
}

void copy_arr(float mass_copy1[], float mass_source[], int n)
{
    for (int i = 0; i < n; i++)
    {
        mass_copy1[i] = mass_source[i];
    }
}

void copy_ptr(float *mass_copy2, float *mass_source, int n)
{
    for (int i = 0; i < n; i++)
    {
        *(mass_copy2 + i) = *(mass_source + i);
    }
}


void copy_ptrs(float *mass_copy3, float *mass_source, int *n)
{
    while (mass_source < n)
    {
        *mass_copy3 = *mass_source;
        mass_copy3++;
        mass_source++;
    }
}
