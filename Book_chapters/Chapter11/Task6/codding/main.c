#include <stdio.h>


int is_within(char *p_f_mass, char symbol);

int main(void)
{
	char mass[] = {"!hello, how are you?"};
	char *p_mass;

	char key;
	char symbol;

	p_mass = mass;

	printf("enter any symbol, and we will find it in our sentence\n");
	printf("to start press 'y' or any key to exit: ");

	scanf("%c", &key);
	while (getchar() != '\n')
	{
		continue;
	}

	while (key == 'y')
	{
		printf("press symbol, that you think it is in our sentence: ");
		scanf("%c", &symbol);
		while (getchar() != '\n')
		{
			continue;
		}


		if (is_within(p_mass, symbol))
		{
			printf("there is symbol %c in our sentence\n", symbol);
		}
		else
		{
			printf("there isn't any symbol %c in our sentence\n", symbol);
		}

		printf("to continue, press 'y' or any symbol, to exit: ");
		scanf("%c", &key);

		while (getchar() != '\n')
		{
			continue;
		}
	}



    return 0;
}


int is_within(char *p_f_mass, char symbol)
{
	int result = 0;

	while (*(p_f_mass) != '\0')
	{
		if (*(p_f_mass++) == symbol)
		{
			result = 1;
			break;
		}
	}
	return result;
}
