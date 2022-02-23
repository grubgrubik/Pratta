#include <stdio.h>
#include <ctype.h>

#define SIZE 10

int fill_mass(char *mass, int f_count);

int main()
{
	char mass[SIZE];
	// char *p_mass;
	int count = 0;



	while(fill_mass(mass, count) && count < SIZE - 1)
	{
		count++;
	}
	*(mass + count) = '\0';


	puts(mass);

    printf("%d\n", count);
    return 0;
}

int fill_mass(char *mass, int f_count)
{
	int key;
	key = !isspace(*(mass + f_count) = getchar());

	return key;
}
