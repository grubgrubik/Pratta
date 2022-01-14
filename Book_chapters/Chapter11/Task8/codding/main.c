#include <stdio.h>
#include <string.h>

#define SIZE 20

char *string_in(char *p_str1, char *p_str2);
void *s_gets(char *m_string, int c_symbol);

int main(void)
{
    char base_str[SIZE];
	char incl_str[SIZE];

	char *p_ch;
	char *p_answer;
	char key;


	printf("Hello, this program finds coincidence between first string and second string that you type\n"
			"if they are the same, the function returns the address at which the contained string begins\n"
			"or not the function returns \"NULL\"\n");
	printf("To start the program - press 'y' or any key to exit: ");

	scanf("%c", &key);
	getchar();

	while(key == 'y')
	{
		printf("\nplease enter the first string, but lesser then %d:\n", SIZE);
		s_gets(base_str, SIZE);

		p_ch = base_str;

		printf("\nplease enter the second string, but lesser then %d:\n", SIZE);
		s_gets(incl_str, SIZE);

		printf("\nyour string:\n%s\n", base_str);
		printf("Symbol\tAddress\n");

		while(*p_ch != '\0')
		{
		printf("%  c   \t%p\n", *p_ch, p_ch);
		p_ch++;
		}

		printf("\n");
		p_answer = string_in(base_str, incl_str);

		printf("function result:\n");
		printf("Symbol\tAddress\n");

		if(p_answer)
		{
			printf("%  c   \t%p\n", *p_answer, p_answer);
		}
		else
		{
			printf("% NULL  \t%p\n", p_answer);
		}
		printf("if you want to continue - press 'y', or any key to exit: ");
		scanf("%c", &key);
		getchar();
	}

	printf("\ni knew i would do it\n");

	return 0;
}


char *string_in(char *p_str1, char *p_str2)
{
	char *p_answ = NULL;
	char *p_tmp;
	int key = 1;
	int i = 0;
	int j;

	if(strlen(p_str2) <= strlen(p_str1))
	{
		while(*(p_str1 + i) != '\0')
		{
			j = 0;
			if(*(p_str1 + i) == *(p_str2 + j))
			{
				if((strlen(p_str1) - i) >= strlen(p_str2))
				{
					p_tmp = p_str1 + i;
					while(*(p_str2 + j) != '\0' && key)
					{
						if(*(p_tmp + j) == *(p_str2 + j))
						{
							p_answ = p_str1 + i;
							j++;
						}
						else
						{
							key = 0;
							p_answ = NULL;
						}
					}
					if(key)
					{
						break;
					}
				}
			}
			i++;
		}
	}
	else
	{
		printf("\nthe second string is longer!\n");
	}
	return p_answ;
}

void *s_gets(char *m_string, int c_symbol)
{
	int i = 0;

	if(fgets(m_string, c_symbol, stdin))
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
}
