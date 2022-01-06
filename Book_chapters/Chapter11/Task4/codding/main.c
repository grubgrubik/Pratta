#include <stdio.h>
#include <ctype.h>

#define MASS_SIZE 50

void find_word(char *mass1, char *mass2, int climit);

int main(void)
{
	char mass_1[MASS_SIZE]; // = {"   	abc pproximate value of curent"};
	char mass_2[MASS_SIZE];

	int i;

	int c_limit;

	printf("Hello, enter a character string:\n");

	for (i = 0; (mass_1[i] = getchar()) != '\n'; i++);
	mass_1[i] = '\0';

	putchar('\n');

	printf("enter the maximum symbols to scan in the string, that you wrote\n");
	printf("it must be less than %d:  ", MASS_SIZE);

	scanf("%d", &c_limit);

	find_word(mass_1, mass_2, c_limit);

	printf("\nthere is full first word or word that is limited with quantity of symbols in string:\n");

	puts(mass_2);



    return 0;
}

void find_word(char *mass1, char *mass2, int climit)
{
	int i = 0;
	int j = 0;
	int key = 1;
	int ind_word = 0;

	while (mass1[i] != '\0' && (i < climit) && key)
	{
		if (isblank(mass1[i]) && !ind_word)
		{
			i++;
		}
		else if (!isblank(mass1[i]))
		{
			mass2[j] = mass1[i];
			j++;
			i++;
			ind_word = 1;
		}
		else
		{
			key = 0;
		}
	}
	mass2[j] = '\0';
}
