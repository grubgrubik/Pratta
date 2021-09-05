#include <stdio.h>


void inform_func(void);     //main menu information
void operat_func(void);     //menu of operations
char choice_func(void);     //check the correct letter entered
float chk_digit_func(void); //check the correct number entered


int main()
{

    int ch;

    float result, number_1, number_2;

    inform_func();
    operat_func();

    while ((ch = choice_func()) != 'q')
    {
        if (!(ch == 'a' || ch == 'b' || ch == 'c' || ch == 'd'))
        {
           printf("you did incorrect ch, please select between 'a', 'b', 'c', 'd':");
           continue;
        }
        else
        {
            printf("Enter number 1:\n");
            number_1 = chk_digit_func();
            printf("Enter number 2:\n");
            number_2 = chk_digit_func();

            while (ch == 'd' && number_2 == 0)
            {
                printf("enter second number, different of zero: ");
                number_2 = chk_digit_func();
            }

        }

        switch (ch)
        {
            case 'a':
                result = number_1 + number_2;
                printf("%.2f + %.2f = %.2f\n", number_1, number_2, result);
                break;

            case 'b':
                result = number_1 - number_2;
                printf("%.2f - %.2f = %.2f\n", number_1, number_2, result);
                break;
            case 'c':
                result = number_1 * number_2;
                printf("%.2f * %.2f = %.2f\n", number_1, number_2, result);
                break;
            case 'd':
                result = number_1 / number_2;
                printf("%.2f / %.2f = %.2f\n", number_1, number_2, result);
                break;
        }

        printf("The operation is completed, do the next choice\n");
        operat_func();

    }



    printf("I know i do it!\n");
    return 0;
}


void inform_func(void)
{
    printf("Hello, choose the operation, like: '+' '-' '*' '/'\n"
           "after enter two digits and get answer, it is easy ))\n"
           "or press 'q' to exit from the program\n\n");
}


void operat_func(void)
{
    printf("a) - addition '+'              b) - subtraction '-'\n"
           "c) - multiplication '*'        d) - division '/'\n"
           "q) - exit\n");
}


char choice_func(void)
{
    int ch;
    while ((ch = getchar()) == '\n')
           continue;
    while (getchar() != '\n')
        continue;
    return ch;
}

float chk_digit_func(void)
{
    float digit;
    while((scanf("%f", & digit)) != 1)
    {
        printf("you enter wrong value, please enter number like: 22.5, 11, etc.\n");
        while (getchar() != '\n')
            continue;
    }
        return digit;
}
