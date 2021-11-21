#include <stdio.h>

#define ROW 6
#define COL 4

void init_mass(int (*arr)[COL], int rows);
void sum_mass(int (*arr1)[COL], int (*arr2)[COL], int (*arr3)[COL], int rows);
void show_mass(int (*arr)[COL], int rows);


int main(void)

{

    int mass_1[ROW][COL];
    int mass_2[ROW][COL];
    int mass_3[ROW][COL];
    int (*p_mass_1)[COL], (*p_mass_2)[COL], (*p_mass_3)[COL];

    p_mass_1 = mass_1;
    p_mass_2 = mass_2;
    p_mass_3 = mass_3;

    printf("\n****************\n");
    init_mass(p_mass_1, ROW);
    printf("mass_1[%d][%d]:\n\n",ROW, COL);
    show_mass(p_mass_1, ROW);
    printf("\n****************\n");

    init_mass(p_mass_2, ROW);
    printf("mass_2[%d][%d]:\n\n",ROW, COL);
    show_mass(p_mass_2, ROW);

    sum_mass(p_mass_1, p_mass_2, p_mass_3, ROW);
    printf("\n****************\n");
    printf("mass_3[%d][%d] is the sum of the previous elements of the array:\n\n",ROW, COL);
    show_mass(p_mass_3, ROW);


    printf("\ni knew i would do it\n");

    return 0;
}


void init_mass(int (*arr)[COL], int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            *(*(arr + i) + j) = i * j + ((int)(*(arr + i) + j) % 100);
        }
    }

}

void show_mass(int (*arr)[COL], int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            printf("%3d ", *(*(arr + i) + j));
        }
        printf("\n");
    }
    printf("\n");
}

void sum_mass(int (*arr1)[COL], int (*arr2)[COL], int (*arr3)[COL], int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            *(*(arr3 + i) + j) = *(*(arr1 + i) + j) + *(*(arr2 + i) + j);
        }
    }
}
