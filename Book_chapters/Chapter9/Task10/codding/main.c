#include <stdio.h>

unsigned long m_fibon(int digit);

int main(void)
{

    unsigned long number = 0;

    printf("Enter the number and you will get Fibonacci number until number that you entered:\n");

    scanf("%lu", &number);

    printf("Fibonacci numbers:\n");
    printf("%lu\n\n", m_fibon(number));

    printf("I knew that I would do it\n");
    return 0;
}


unsigned long m_fibon(int digit)
{
    unsigned long result = 1;
    unsigned long p_digit = 1;
    unsigned long p_digit_2 = 1;

    while (p_digit_2 < digit)
    {
        if (result == 1)
            printf("%lu ", result);
        result += p_digit_2;

        printf("%lu ", p_digit_2);

        p_digit_2 += p_digit;
        p_digit = p_digit_2 - p_digit;
    }
    printf("\nSum of the numbers: ");
    return result;
}
