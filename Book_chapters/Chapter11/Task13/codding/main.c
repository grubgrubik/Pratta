#include <stdio.h>


int main(int argc, char **argv)
{

	for(int i = argc; i >= 1; i--)
	{
		printf("%s\n", *(argv + i));
	}

    return 0;
}
