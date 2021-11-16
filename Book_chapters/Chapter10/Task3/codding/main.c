#include <stdio.h>

int max_value(int *arr, int n);

int main()
{
    int mass[10] = {2, 6, 89, 654, -3, 435, 65, 801, 12, 72};

    for (int i =0; i < 10; i++)
    {
        printf("%d\n", *(mass + i));
    }

    printf("\nmax value form this massive is: %d\n", max_value(mass, 10));

    return 0;
}



int max_value(int *arr, int n)
{
    int tmp = *arr;
    for (int i = 0; i < n; i++)
    {
        if (*(arr + i) > tmp)
        {
            tmp = *(arr + i);
        }
    }
    return tmp;
}
