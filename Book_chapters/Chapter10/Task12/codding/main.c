#include <stdio.h>



#define MONTHS 12 // number of months in a year
#define YEARS 5 // number of years of data

float aver_years(float *arr, int n);
void aver_months(float (*arr)[MONTHS], int n);


int main(void)
{
    float subtotal = 0.;
    float total = 0.;
    // initializing rainfall data for 2010 - 2014
    const float rain[YEARS][MONTHS] =
    {
    {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
    {8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
    {9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
    {7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
    {7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
    };

    printf("Year\t\tRainfall\n");
    for (int i = 0; i < YEARS; i++)
    {
        subtotal = aver_years(rain + i, MONTHS);
        printf("%d\t\t%.1f\n", 2010 + i, subtotal);
        total += subtotal;
    }
    putchar('\n');

    printf("The Yearly average is: %.1f\n\n", total/YEARS);


    printf("Monthly Averages:\n");
    printf("Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec\n");

    aver_months(rain, YEARS);

    printf("\n\ni knew i would do it\n");

    return 0;
}

float aver_years(float *arr, int n)
{
    float summ = 0.;
    for (int i = 0; i < n; i++)
    {
        summ += *(arr++);
    }
    return summ;
}

void aver_months(float (*arr)[MONTHS], int n)
{
    float sum = 0.;
    for (int j = 0; j < MONTHS; j++)
    {
        for (int i = 0; i < n; i++)
        {
            sum += *(*(arr + i) + j);
        }
        printf("%-4.1f ", sum/YEARS);
        sum = 0.;
    }
}
