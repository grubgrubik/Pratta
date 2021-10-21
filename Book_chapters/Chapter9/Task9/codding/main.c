#include <stdio.h>
#include <stdlib.h>

void to_base_n(int digit, int numeral);

int main(void)
{
    int number, numeral;

    printf("enter the number and digit of numeral system, or press q to exit:\n");

    while ((scanf("%d %d", &number, &numeral)) == 2)
    {
        if (numeral < 2 || numeral > 10)
        {
            printf("you entered incorrect value of numeral, enter between 2 and 10\n");
            printf("enter again number and digit of numeral system:\n");
            continue;
        }
        printf("\nthe number %d in %d system = ", number, numeral);

        to_base_n(number, numeral);
        printf("\n\nenter the next value of number and numeral system, or press q to exit:\n");
    }


    return 0;
}


void to_base_n(int digit, int numeral)
{
    int result;
    result = digit % numeral;

    if (digit >= numeral)
        to_base_n(digit / numeral, numeral);

    printf("%d", result);

}
