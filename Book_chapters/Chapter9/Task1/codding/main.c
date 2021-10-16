#include <stdio.h>
//#include <stdlib.h>

double min (double x, double y);

int main(void)
{

    double a;
    double b;

    printf("enter two values for compare:\n");

    scanf("%lf", &a);
    scanf("%lf", &b);

    printf("the lesser value is: %.2lf\n", min (a, b));


    return 0;
}


double min (double x, double y)
{
    double tmp = 0.;
    (x < y) ? (tmp = x) : (tmp = y);

    return tmp;
}
