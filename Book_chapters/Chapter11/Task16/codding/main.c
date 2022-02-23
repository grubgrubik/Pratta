#include <stdio.h>
#include <string.h>
#include <ctype.h>

void show_help();
int check_key(char *k_str);
void show_res(char *m_str, int chose);

int main(int argc, char **argv)
{
	int key = 0;

	if(argc == 1)
	{
		show_help();
	}
	else if(argc == 2)
	{
		key = check_key(*(argv + 1));
		if(key)
		{
			printf("\nYou didn't enter any word\n");
		}
		else
		{
			show_help();
		}
	}
	else
	{
		key = check_key(*(argv + 1));
		if(key)
		{
			for(int i = 2; i < argc; i++)
			{
				show_res(*(argv + i), key);
				putchar(' ');
			}
		}
		else
		{
			printf("\n!You entered incorrect 'key'!\n");
			show_help();
		}
	}


    return 0;
}


void show_help()
{
	printf("\n*****************************************************************************\n");
	printf("This program can show text that you enter in lowercase,\n"
		   "uppercase or in original format.\n");
	printf("Keys, that you need to use wit this program:\n");
	printf("'-p' \tshow text in original format\n"
		   "'-u' \tshow text in uppercase format\n"
		   "'-l' \tshow text in lowercase format\n");
	printf("!ATTENTION!, after program-file name use the key and after it tape words\n");
	printf("\n*****************************************************************************\n");
}


int check_key(char *k_str)
{
	char k_p[] = "-p";
	char k_u[] = "-u";
	char k_l[] = "-l";

	if(!strcmp(k_str, k_p))
	{
		return 1;
	}
	else if(!strcmp(k_str, k_u))
	{
		return 2;
	}
	else if((!strcmp(k_str, k_l)))
	{
		return 3;
	}
	else
	{
		return 0;
	}
}

void show_res(char *m_str, int chose)
{
	while(*m_str != '\0')
	{
		if(chose == 1)
		{
			printf("%c", *m_str);
		}
		else if(chose == 2)
		{
			printf("%c", toupper(*m_str));
		}
		else
		{
			printf("%c", tolower(*m_str));
		}
		m_str++;
	}
}
