#include <stdio.h>
#include <ctype.h>


int main(void)
{
	char sentence[] = " Hello Every Body 14; a, i glad to see you today on Saturday, 25 February ;)";
	char ch;
	int c_low_let = 0;
	int c_upp_let = 0;
	int c_digit = 0;
	int c_punct = 0;
	int c_word = 0;
	int t_symb = 0;
	int i = 0;
	int c_key_word = 0;



	while((ch = getchar()) != EOF)
	{
		t_symb++;

		if(isalpha(sentence[i]) && isupper(sentence[i]))
		{
			c_upp_let++;
		}
		else if(isalpha(sentence[i]) && islower(sentence[i]))
		{
			c_low_let++;
		}
		else if(isdigit(sentence[i]))
		{
			c_digit++;
		}
		else if(ispunct(sentence[i]))
		{
			c_punct++;
		}

		if(!isspace(sentence[i]) && !c_key_word)
		{
			c_word++;
			c_key_word = 1;
		}

		if(isspace(sentence[i]) && c_key_word)
		{
			c_key_word = 0;
		}

		i++;
	}

	printf("all count of symbols in sentence: %d\n", t_symb);
	printf("all count of uppercase case letters: %d\n", c_upp_let);
	printf("all count of lowercase case letters: %d\n", c_low_let);
	printf("all count of punctuation symbols: %d\n", c_punct);
	printf("all count of digits: %d\n", c_digit);
	printf("all count of words: %d\n", c_word);

    return 0;
}
