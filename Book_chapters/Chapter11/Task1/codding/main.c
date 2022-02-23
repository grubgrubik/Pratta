#include <stdio.h>
#include <stdlib.h>

#define SIZE 20
void get_line(char *line1, char *line2, int c_ch);

int main(void)
{
	char mass1[SIZE];
	char mass2[SIZE];

	int c_letter;

	printf("enter symbol's limit, it must be less that %d: ", SIZE);
	scanf("%d", &c_letter);

	get_line(mass1, mass2, c_letter);

	putchar('\n');
	puts(mass2);

    return 0;
}



void get_line(char *line1, char *line2, int c_ch)
{
	int count = 0;
	while (count <= c_ch && count < SIZE - 1)
	{
		scanf("%c", line1 + count);
		*(line2 + count) = *(line1 + count);
		count++;
	}
	*(line2 + count) = '\0';
}
