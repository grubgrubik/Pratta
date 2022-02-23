#include <stdio.h>
#include <string.h>
#include <ctype.h>


#define ROWS 3		//quantity of rows
#define COLUMNS 25	//quantity of symbols in rows

void main_menu(void);

int fill_array(int rows, int colums, char (*p_array)[colums]);			//fill array
void show_array(int rows, int colums, char (*p_array)[colums]);			//show array
void sort_array_ascii(int rows, int colums, char (*p_array)[colums]);	//sort array in ASCII collating sequence
void show_incr_string(int rows, int colums, char (*p_array)[colums]);	//sort array in order of increasing length
void show_incr_f_word(int rows, int colums, char (*p_array)[colums]);	//sort array in order of the length of the first word


int main(void)
{
	char arr[ROWS][COLUMNS];
	// char (*ptr_arr)[COLUMNS];
	// ptr_arr = arr;

	int real_rows = 0;
	int key;
	int num_menu;

	printf("this program reads until 10 string, and does some operations with them:\n"
		   "show array, sort in ASCII collating sequence,\n"
		   "sort strings in order of the length strings and words\n");
	printf("To start the program press '1' or1 press '0' to exit: ");

	scanf("%d", &key);

	while(key)
	{
		main_menu();

		printf("Enter selected number:  ");

		scanf("%d", &num_menu);
		getchar();

		switch(num_menu)
		{

		case 1:
			{
				real_rows = fill_array(ROWS, COLUMNS, arr);
				break;
			}

		case 2:
			{
				if(real_rows)
				{
					show_array(real_rows, COLUMNS, arr);
				}
				else
				{
					printf("you didn't enter any string\n");
				}
				break;
			}

		case 3:
			{
				if(real_rows)
				{
					sort_array_ascii(real_rows, COLUMNS, arr);
				}
				else
				{
					printf("you didn't enter any string\n");
				}
				break;
			}

		case 4:
			{
				if(real_rows)
				{
					show_incr_string(real_rows, COLUMNS, arr);
				}
				else
				{
					printf("you didn't enter any string\n");
				}
				break;
			}
		case 5:
			{
				if(real_rows)
				{
					show_incr_f_word(real_rows, COLUMNS, arr);
				}
				else
				{
					printf("you didn't enter any string\n");
				}
				break;
			}
		case 6:
			{
				key = 0;
				break;
			}
		default:
			{
				printf("\Chose the correct number from 1 to 6\n");
			}
		}
		printf("\n");
	}
	return 0;
}

void main_menu(void)
{
	puts("******************************************************************************************");
	printf("MAIN MENU:\n");
	printf("1 - Enter %d string or less, to stop the input, enter in the start of line '&'\n", ROWS);
	printf("2 - Print the original array, that you taped\n");
	printf("3 - Print the strings in ASCII collating sequence\n");
	printf("4 - Print the strings in order of increasing length\n");
	printf("5 - Print the strings in order of the length of the first word in the string\n");
	printf("6 - Quit\n");
	puts("******************************************************************************************");
}

//fill array

int fill_array(int rows, int colums, char (*p_array)[colums])
{
	int i = 0;
	int key_ret = 0;
	int j;

	printf("Enter the string\n");
	while(i < rows)
	{
		fgets((*(p_array + i)), colums, stdin);

		j = 0;

		while(*(*(p_array + i) + j) != '\n' && *(*(p_array + i) + j) != '\0')
		{
			j++;
		}

		if(*(*(p_array + i) + j) == '\n')
		{
			*(*(p_array + i) + j) = '\0';
		}
		else
		{
			while(getchar() != '\n')
			{
				continue;
			}
		}

		if(*(*(p_array + i)) == '&')
		{
			break;
		}
		else if(*(*(p_array + i)) != '\0')
		{
			key_ret = 1;
		}
		i++;
	}
	return key_ret ? i : 0;
}


//show array
void show_array(int rows, int colums, char (*p_array)[colums])
{
	puts("Result\n");
	printf("Strings that you entered:\n");
	puts("###################################################################################");
	for(int i = 0; i < rows; i++)
	{
		printf("%s\n", p_array + i);
	}
	puts("###################################################################################\n");
}

//sort array in ASCII collating sequence
void sort_array_ascii(int rows, int colums, char (*p_array)[colums])
{
	char p_tmp_line[colums];
	char tmp_letter;
	int i = 0;
	int j = 0;

	puts("Result\n");
	puts("Strings in ASCII collating sequence:");
	puts("###################################################################################");
	for(i = 0; i < rows; i++)
	{
		strcpy(p_tmp_line, p_array + i);

		for(j = 0; p_tmp_line[j] != '\0'; j++)
		{
			for(int k = j + 1; p_tmp_line[k] != '\0'; k++)
			{
				if(p_tmp_line[j] > p_tmp_line[k])
				{
					tmp_letter = p_tmp_line[j];
					p_tmp_line[j] = p_tmp_line[k];
					p_tmp_line[k] = tmp_letter;
				}
			}
		}
		puts(p_tmp_line);
	}
	puts("###################################################################################\n");
}

//sort array in order of increasing length
void show_incr_string(int rows, int colums, char (*p_array)[colums])
{
	char *pt[rows];
	char *p_tmp;
	int i;
	int j;

	for(i = 0; i < rows; i++)
	{
		*(pt + i) = p_array + i;
	}

	for(i = 0; i < rows - 1; i++)
	{
		for(j = i + 1; j < rows; j++)
		{
			if(strlen(*(pt + i)) < strlen(*(pt + j)))
			{
				p_tmp = *(pt + i);
				*(pt + i) = *(pt + j) ;
				*(pt + j) = p_tmp;
			}
		}
	}
	puts("Result\n");
	puts("Strings in order of increasing length");
	puts("###################################################################################");
	for(i = 0; i < rows; i++)
	{
		printf("quantity of symbols - %d:\t%s\n", strlen(*(pt + i)), *(pt + i));
	}
	puts("###################################################################################\n");
}


//sort array in order of the length of the first word
void show_incr_f_word(int rows, int colums, char (*p_array)[colums])
{
	char t_mass[rows][colums];

	char *t_line;
	char *p_mass[rows];
	char *p_p_array[rows];

	int key;
	int i;
	int j;
	int k;

	for(i = 0; i < rows; i++)
	{
		for(key = 1, j = 0, k = 0; *(*(p_array + i) + j) != '\0'; j++)
		{
			if(!isspace(*(*(p_array + i) + j)))
			{
				*(*(t_mass + i) + k) = *(*(p_array + i) + j);
				k++;
				key = 0;
			}
			else if (key == 0)
			{
				break;
			}
		}
		*(*(t_mass + i) + k) = '\0';
	}

	for(i = 0; i < rows; i++)
	{
		*(p_mass + i) = *(t_mass + i);
	}

	for(i = 0; i < rows; i++)
	{
		*(p_p_array + i) = *(p_array + i);
	}

	for(i = 0; i < rows - 1; i++)
	{
		for(j = i + 1; j < rows; j++)
		{
			if(strlen(*(p_mass + i)) < strlen(*(p_mass + j)))
			{
				t_line = *(p_p_array + i);
				*(p_p_array + i) = *(p_p_array + j);
				*(p_p_array + j) = t_line;

				t_line = *(p_mass + i);
				*(p_mass + i) = *(p_mass + j);
				*(p_mass + j) = t_line;
			}
		}
	}

	puts("Result\n");
	puts("Strings in order of the length of the first word in the string");
	puts("###################################################################################");
	for(i = 0; i < rows; i++)
	{
		printf("count of symbols in %d-th word in %d-th line: %d\tword: %s\n", i + 1, i + 1, strlen(*(p_mass + i)), *(p_p_array + i));
	}
	puts("###################################################################################\n");
}
