#include <stdio.h>

double max_min_diff(double arr[], int n);

int main(void)
{
    double mass[10] = {132.1, 54.8, 91.9, 11.1, 43.5, 87.5, 69.3, 87.2, 78.1, 101.7};

//    double mass[10] = {10.1, 10.1, 10.1, 10.1, 10.1, 10.1, 10.1, 10.1, 10.1, 10.1};

    printf("Here is massive:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%.1lf ", mass[i]);
    }
    printf("\n\nThe difference between the largest and the smallest\nelements of massive is: %.2lf\n", max_min_diff(mass, 10));


    return 0;
}


double max_min_diff(double arr[], int n)
{
    double min, max;
    max = min = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
        else if (min > arr[i])
        {
            min = arr[i];
        }
    }
    return max - min;
}
