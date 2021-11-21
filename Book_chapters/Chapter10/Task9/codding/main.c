#include <stdio.h>

void show_mass(int r, int c, double arr[r][c]);
void init_mass(int r, int c, double arr[r][c]);
void copying_mass(int r, int c, double arr[r][c], double arr2[r][c]);
int main(void)
{
    int col, row;
    char tmp;

    printf("Set the size of massive: columns and rows\n");
    printf("Rows: ");
    scanf("%d", &row);
    printf("Columns: ");
    scanf("%d", &col);


    double mass[row][col];
    double copy_mass[row][col];

    init_mass(row, col, mass);

    printf("Your random massive and it's elements:\n");
    show_mass(row, col, mass);

    copying_mass(row, col, mass, copy_mass);
    printf("Two massives, second is copy from first massive:\n");

    printf("Original mass:\n");
    show_mass(row, col, mass);

    printf("Copy mass:\n");
    show_mass(row, col, copy_mass);


    return 0;

}

void init_mass(int r, int c, double arr[r][c])
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            arr[i][j] = 12.5;//  * i + ((int)&arr[i][j] % 100);
        }
    }
}

void show_mass(int r, int c, double arr[r][c])
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%.2lf ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void copying_mass(int r, int c, double arr[r][c], double arr2[r][c])
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            arr2[i][j] = arr[i][j];
        }
    }
}
