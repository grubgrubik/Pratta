#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define SIZE 10
void get_line(char *line1, char *line2, int c_ch);

int main(void)
{
	char mass1[SIZE];
	char mass2[SIZE];

	int c_letter;

	printf("enter symbol's limit, it must be less that %d: ", SIZE - 1);
	scanf("%d", &c_letter);
	getchar();

	get_line(mass1, mass2, c_letter);


	putchar('\n');
	puts(mass2);



    return 0;
}

void get_line(char *line1, char *line2, int c_ch)
{
	int count = 0;
	while (count < c_ch && count < SIZE - 1 && !isspace(*(line1 + count) = getchar()))
	{
		*(line2 + count) = *(line1 + count);
		count++;
	}
	*(line2 + count) = '\0';
}
