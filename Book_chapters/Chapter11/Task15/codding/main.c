#include <stdio.h>
//#include <string.h>
#include <ctype.h>

#define M_LENGTH 12

char *s_gets(char *m_string, int leng);
int m_atoi(char *m_string, int i);

int main(void)
{

	int answer = 0;
    char test_string[M_LENGTH];
    int step;


	printf("Hello, enter the string, and the program returns number if the string that you will enter begins with digit\n"
			"or returns '0' if the string begins with letter; press Enter to quit from the program\n");

	while(s_gets(test_string, M_LENGTH) && test_string[0] != '\0')
	{
		step = 1;

		for(int i = 0; *(test_string + i) != '\0'; i++)
		{
			if(isdigit(*(test_string + i)))
			{
				step = step * 10;
			}
			else
			{
				break;
			}
		}
		step /= 10;

		answer = m_atoi(test_string, step);
		printf("*************************************************************************************************");
		answer ? printf("\ndigits from string: %d\n", answer) : printf("\nthe first symbol isn't a digit, result: %d\n", answer);
		printf("*************************************************************************************************");
		printf("\n\nto continue, enter the next string, or press Enter to exit\n");
	}


    return 0;
}


int m_atoi(char *m_string, int i)
{
	int result = 0;

	if(isdigit(*m_string))
	{

		result = ((*m_string - '0') * i) + m_atoi(++m_string, i / 10);
		return result;
	}
	else
	{
		return 0;
	}
}

char *s_gets(char *m_string, int leng)
{
	char *p_str;
	int i = 0;

	p_str = fgets(m_string, leng, stdin);

	if(p_str)
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
	return p_str;
}
