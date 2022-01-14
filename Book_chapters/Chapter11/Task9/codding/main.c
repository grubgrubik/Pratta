#include <stdio.h>
#include <string.h>

#define SIZE 20

char *s_gets(char *m_string, int c_symbol);
void f_invert(char *p_string, int limit);
int main(void)
{
	char mass[SIZE];
	int c_symbol = 0;

	puts("enter string and the program returns the inverted string, or press \"Enter\" to exit");

	while(s_gets(mass, SIZE) && *(mass) != '\0')
	{
		printf("\nYour string:\n");
		puts(mass);
		c_symbol = strlen(mass);

		f_invert(mass, c_symbol - 1);

		printf("\nInverted string:\n");
		puts(mass);

		puts("\nif you want to continue - enter the next string, or press \"Enter\" to exit");
	}

    printf("\ni knew i would do it\n");
    return 0;
}


char *s_gets(char *m_string, int c_symbol)
{
	int i = 0;
	char *p_answer;

	p_answer = fgets(m_string, c_symbol, stdin);

	if(p_answer)
	{
		while(*(m_string + i) != '\n' && *(m_string + i) != '\0')
		{
			i++;
		}
		if(*(m_string + i) == '\n')
		{
			*(m_string + i) = '\0';
		}
		else
		{
			while(getchar() != '\n')
			{
				continue;
			}
		}
	}
	return p_answer;
}

void f_invert(char *p_string, int limit)
{
	int i = 0;
	char tmp;

	while(i <= (limit - i))
	{
		tmp = *(p_string + i);
		*(p_string + i) = *(p_string + ((limit - i)));
		*(p_string + ((limit - i))) = tmp;
		i++;
	}
}
