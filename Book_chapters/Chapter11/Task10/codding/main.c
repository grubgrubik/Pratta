#include <stdio.h>
#define MSIZE 40

void rem_space(char *mass_t);

int main(void)
{
	char mass[MSIZE];

	printf("This function removes the spaces from the string"
			"enter the string, or press\"Enter\" to exit\n");

	while(s_gets(mass, MSIZE) && mass[0] != '\0')
	{
		printf("string that you entered without spaces:\n");

		rem_space(mass);
		puts(mass);
		printf("Enter the next string, or press \"Enter\" to exit\n");
	}

    return 0;
}




void rem_space(char *mass_t)
{
	int c_space = 0;
	int i = 0;

	while(mass_t[i] != '\0')
	{
		if(mass_t[i] == ' ')
		{
			c_space++;
		}
		else if(c_space != 0)
		{
			mass_t[i - c_space] = mass_t[i];
		}
		i++;
	}
	mass_t[i - c_space] = '\0';
}
