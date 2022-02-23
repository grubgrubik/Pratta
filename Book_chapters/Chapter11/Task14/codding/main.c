#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	double result = 1.;

	int i;

    if(argc == 3)
    {
    	for(i = 0; i < atoi(*(argv + 2)); i++)
        {
            result *= atof(*(argv + 1));
        }
		puts("-----------------------------------------------------------------------");
		printf("result: %.2f^%d = %.2f\n", atof(*(argv + 1)), atoi(*(argv + 2)), result);
		puts("-----------------------------------------------------------------------");
    }
    else
	{
		printf("incorrect arguments of function!!\n");
	}
    return 0;
}
