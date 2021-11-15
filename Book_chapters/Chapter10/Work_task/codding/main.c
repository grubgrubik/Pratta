#include <stdio.h>
#include <stdlib.h>



void show(const double ar[], int n);
void show2(const double ar2[][3], int n);
void show3();

int main(void)
{


    show((double []) {8, 3, 9, 2}, 4);

    printf("\n\n");
    show2((double [][3]) {{8, 3, 9,}, {5, 4, 2}}, 2);

    return 0;
}

void show(const double ar[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%.1lf ", ar[i]);
}

void show2(const double ar2[][3], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%.1lf ", ar2[i][j]);
        }
        putchar('\n');
    }
}






