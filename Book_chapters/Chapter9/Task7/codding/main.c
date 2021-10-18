#include <stdio.h>

float pow_func(float n, int exp);


int main(void)
{

    float result, digit;
    int exp;

    printf("Enter number and integer power\n"
           "to switch the number will be riser");
    printf("press 'q' to exit:\n");

    while (scanf("%f %d", &digit, &exp) == 2)
    {
        result = pow_func(digit, exp);

        printf("%.3f to the power %d is %.3f\n", digit, exp, result);

        printf("Enter the next pair of pairs or 'q' to quit:\n");
    }


    printf("i knew that i would do it\n");
    return 0;
}



float pow_func(float n, int exp)
{
    float result = 1;

    if (n == 0)
        result = 0;
    else if (exp == 0)
        result = 1;
    else if (exp < 0)
    {
        for (int i = 1; i <= exp * -1; i++)
            result *= n;
            result = 1 / result;
    }
    else
        for (int i = 1; i <= exp; i++)
            result *= n;

    return result;
}
