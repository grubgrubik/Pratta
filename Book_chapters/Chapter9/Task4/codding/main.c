#include <stdio.h>
#include <stdlib.h>

double av_harm_val (double a, double b);    //average harmonic value

int main(void)
{
    double a = 6.;
    double b = 9.;
    double ans;

    ans = av_harm_val(a, b);

    printf("the average harmonic value of numbers %.2lf and %.2lf is %.2lf", a, b, ans);


    return 0;
}


double av_harm_val (double a, double b)
{
    a = 1 / a;
    b = 1 / b;

    return (1 / ((a + b) / 2));
}
