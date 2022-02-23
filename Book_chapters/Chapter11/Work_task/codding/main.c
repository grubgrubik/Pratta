/* compare.c -- this will wo	rk */
#include <stdio.h>
#include <string.h> // declares strcmp()
#include <ctype.h>

#define ANSWER "Grant"
#define SIZE 40

char * s_gets(char * st, int n);
int compare_characters(char *str1, char *str2);
int main(void)
{
    char try_[SIZE];
//	char ANSWER[] = "Grant";

    puts("Who is buried in Grant's tomb?");
    s_gets(try_, SIZE);

    while (!compare_characters(ANSWER, try_))
    {
        puts("No, that's wrong. Try again.");
		s_gets(try_, SIZE);
	}

    puts("That's right!");
    return 0;
}
char * s_gets(char * st, int n)
{
    char * ret_val;
    int i = 0;
    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        while (st[i] != '\n' && st[i] != '\0')
            i++;
        if (st[i] == '\n')
            st[i] = '\0';
        else // must have words[i] == '\0'
            while (getchar() != '\n')
                continue;
    }
    return ret_val;
}

int compare_characters(char *str1, char *str2)
{
	int answ = 0;
	int i = 0;
	if (strlen(str1) == strlen(str2))
	{
		while (*(str1 + i) != '\0')
		{
			if (*(str1 + i) == tolower(*(str2 + i)) || *(str1 + i) == toupper(*(str2 + i)))
			{
				answ = 1;
			}
			else
			{
				answ = 0;
				break;
			}
			i++;
		}
	}
	return answ;
}
