#include <stdio.h>


int return_index(double *arr, int n);

int main(void)
{
    int ret_index = 2;
    double mass[10] = {132.1, 54.8, 91.9, 11.1, 43.5, 87.5, 69.3, 87.2, 78.1, 101,7};

    ret_index = return_index(mass, 10);
    printf("the max value of that massive is = %.1lf\n"
           "and it's index = [%d]\n", mass[ret_index], ret_index);

    return 0;
}


int return_index(double *arr, int n)
{
    int ret_index = 0;
    for (int i = 0; i < n; i++)
    {
        if (*(arr + ret_index) < *(arr + i))
        {
            ret_index = i;
        }

    }
    return ret_index;
}
