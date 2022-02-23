#include <stdio.h>
#include <string.h>

#define SIZE 10    //symbols limit in all strings in the program

char mystrncpy(char *m_inbox, char *m_input, int c_symbol, int limit);
char * s_gets(char *m_input, int c_symbol);

int main(void)
{
	char mass_inbox[SIZE];
	char mass_input[SIZE];
	int count_symb;
	int length_input = 0;

	printf("The program copies certain amount of symbol from string that you type to new string.\n");
	printf("String's limit - %d\n", SIZE);
	printf("Enter the string, or press \"Enter\ to exit from program:\n\n");

	while(s_gets(mass_input, SIZE) && *(mass_input + 1) != '\0')
	{
		length_input = strlen(mass_input);
		printf("you entered %d symbol\nin the line \"%s\"\n", length_input, mass_input);

		do
		{
			printf("enter the quantity of symbols that you want to copy to new line\n"
					"it has to be lesser than %d - ", length_input);
			scanf("%d", &count_symb);
			while(getchar() != '\n')
			{
				continue;
			}
		}	while(count_symb > length_input);

		mystrncpy(mass_inbox, mass_input, count_symb, SIZE);
		printf("your new line:\n");

		puts(mass_inbox);

		puts("To continue enter a string, or press \"Enter\" to exit");

	}

	printf("\ni knew i would do it\n");

    return 0;
}

char * s_gets(char *m_input, int c_symbol)
{
	char *answer_return;
	int i = 0;

	answer_return = fgets(m_input, c_symbol, stdin);

	if(answer_return)
	{
		while(*(m_input + i) != '\n' && *(m_input + i) != '\0')
		{
			i++;
		}
		if(*(m_input + i) == '\n')
		{
			*(m_input + i) = '\0';
		}
		else
		{
			while(getchar() != '\n')
			{
				continue;
			}
		}
	}
	return answer_return;
}

char mystrncpy(char *m_inbox, char *m_input, int c_symbol, int limit)
{
	int i = 0;

	while(i < c_symbol && m_input[i] != '\0')
	{
	    m_inbox[i] = m_input[i];
	    i++;
	}
	while(i < limit)
	{
		m_inbox[i] = '\0';
		i++;
	}
}
