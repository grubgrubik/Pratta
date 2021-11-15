#include <stdio.h>


#define MONTHS 12 // number of months in a year
#define YEARS 5 // number of years of data


int main(void)
{
    // initializing rainfall data for 2010 - 2014
    const float rain[YEARS][MONTHS] =
    {
    {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
    {8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
    {9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
    {7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
    {7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
    };

    float all_rain = 0.;
    float month_rain = 0.;
    float year_rain = 0.;

    printf("the count of rainfall for each year:\n");
    printf("Years\t\tRainfall\n");
    for (int i = 0; i < YEARS; i++)
    {
        for (int j = 0; j < MONTHS; j++)
        {
            year_rain += *(*(rain + i) +j);
        }
        printf("%d\t\t%.2f\n", 2000 + i, year_rain);
        all_rain += year_rain;
        year_rain = 0.;
    }

    printf("\nThe yearly average is: %.2f\n", all_rain / YEARS);

    printf("\nMONTHLY AVERAGES:\n");

    printf("Jan   Fab   Mar   Apr   May   Jun   Jul   Aug   Sep   Oct   Nov   Dec\n");

    for (int i = 0; i < MONTHS; i++)
    {
        for (int j = 0; j < YEARS; j++)
        {
            month_rain += *(*(rain + j) + i);
        }
        printf("%.1f   ", month_rain / YEARS);
        month_rain = 0.;
    }

    printf("\n\nI knew that i would do it\n\n");
    return 0;
}
