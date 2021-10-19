#include <stdio.h>

float r_pow_func(float n, int exp);


int main(void)
{

    float result, digit;
    int exp;
    result = 0;

    printf("Enter number and integer power\n"
           "to switch the number will be riser");
    printf("press 'q' to exit:\n");

    while (scanf("%f %d", &digit, &exp) == 2)
    {
        if (exp < 0)
            result = 1 / r_pow_func(digit, exp);
        else
            result = r_pow_func(digit, exp);


        printf("%.3f to the power %d is %.3f\n", digit, exp, result);

        printf("Enter the next pair of pairs or 'q' to quit:\n");
    }


    printf("i knew that i would do it\n");
    return 0;
}



float r_pow_func(float n, int exp)
{
    float result = 1.;

    if (exp < 0 && n != 0)
        result = n * r_pow_func(n, exp + 1);
    else if (exp > 0 && n != 0)
        result = n * r_pow_func(n, exp + -1);
    else if (exp == 0)
        result = 1;
    else
        result = 0;

    return result;
}
