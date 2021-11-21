#include <stdio.h>

void show_mass(int n, int arr[]);
void copy_arr(int n, int mass_source[], int mass_copy[]);

int main(void)
{

    int main_mass[7] = {1, 2, 3, 4, 5, 6, 7};
    int short_mass[3];

    printf("The origin mass:\n");

    show_mass(7, main_mass);
    copy_arr(3, main_mass + 3, short_mass);

    printf("A copy from the third element in the mew massive:\n");
    show_mass(3, short_mass);
    return 0;
}



void copy_arr(int n, int mass_source[], int mass_copy[])
{
    for (int i = 0; i < n; i++)
    {
        mass_copy[i] = mass_source[i];
    }
}

void show_mass(int n, int arr[])
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    putchar('\n');
}
