#include <stdio.h>

char * return_result(char *mass, char f_character);

void show_result(char *point_ch, char ch, char *mass);

int main(void)
{

	char mass[] = {"where is there a secret symbol?"};
	char *p_character;
	char character = '1';


	while (character != '0')
	{
		printf("eneter a character, and we will find it in our sentence\n"
				"and we let you know about result\n"
				"if you want to exit from programm, please enter '0'\n");

				scanf("%c", &character);

				while(getchar() != '\n')
					continue;

				if (character != '0')
				{
					p_character = return_result(mass, character);

					show_result(p_character, character, mass);
				}
				else
				{
					puts("Bye-bye!!!");
				}
	}


    return 0;
}



char * return_result(char *mass, char f_character)
{
	char *result = NULL;

	for (int i = 0; mass[i] != '\0'; i++)
	{
		if (f_character == mass[i])
		{
			result = &mass[i];
			break;
		}
	}
	return result;
}


void show_result(char *point_ch, char ch, char *mass)
{


	if (point_ch != NULL)
	{
		printf("\nhello, symbol '%c' is in the sentence, in this sentence \"%s\"\n", ch, mass);
		printf("it's address - %p and it's value is - %c\n\n", point_ch, *point_ch);
	}
	else
	{
		printf("\nthere isn't any symbol '%c' in this sentence \"%s\"\n\n", ch, mass);
	}

}
