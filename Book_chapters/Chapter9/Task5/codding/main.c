#include <stdio.h>
#include <stdlib.h>


void p_repl_max_val(double *a, double *b);

int main(void)
{
    double a, b, tmp;

    printf("enter two floating point numbers:\n");

    scanf("%lf", &a);
    scanf("%lf", &b);

    printf("your entered values: a = %.3lf, b = %.3lf\n", a, b);
    printf("\nreplacing lesser value to bigger number...\n");

    p_repl_max_val(&a, &b);

    printf("new values are: a = %.3lf, b = %.3lf\n\n", a, b);

    return 0;
}


void p_repl_max_val(double *a, double *b)
{

    (*a > *b) ? (*b = *a) : (*a = *b);
}
