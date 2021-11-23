#include <stdio.h>

#define ROW 3
#define COL 5
void show_mass(int arr[][COL], int n);
void multip_mass(int arr[][COL], int n);


int main(void)
{

    int mass[ROW][COL];

    printf("please initialize the massive 3x5:\n");

    for (int i = 0; i < ROW; i++)
    {
        printf("the %d line:\n", i);
        for (int j = 0; j < COL; j++)
        {
            scanf("%d", &mass[i][j]);
        }
    }
    printf("\n\n");
    show_mass(mass, ROW);

    printf("\nmassive after doubling the value each elements of massive:\n");
    multip_mass(mass, ROW);
    show_mass(mass, ROW);

    return 0;
}


void show_mass(int arr[][COL], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            printf("%3d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}


void multip_mass(int arr[][COL], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            arr[i][j] = arr[i][j] * arr[i][j];
        }
    }
}
