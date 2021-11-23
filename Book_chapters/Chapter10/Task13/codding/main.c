#include <stdio.h>

#define ROWS 3
#define COLUMS 5

void show_mass(double arr[][COLUMS], int rows);
void fill_mass(double arr[][COLUMS], int rows);
int show_menu(void);
void line_average_mass(double arr[], int colum);
double all_average_mass(double arr[][COLUMS], int rows);
double max_element_mass(double arr[][COLUMS], int rows);

int main(void)
{
    int menu_choose;
    int key;
    int empty_mass = 1;

    double all_average = 0.;
    double max_value = 0.;

    double mass[ROWS][COLUMS];

    printf("operations with massive, to start press '1', to exit press '0'\n");
    scanf("%d", &key);

    while (key)
    {
        if (empty_mass)
        {
            printf("please fill the massive, it has size %dx%d elements:\n", ROWS, COLUMS);
            fill_mass(mass, ROWS);
            empty_mass = 0;
        }

        menu_choose = show_menu();
        printf("\n");

        switch (menu_choose)
        {
        case 1:
            for (int i = 0; i < ROWS; i++)
            {
                printf("The average value in %d line of massive - ", i);
                line_average_mass(mass + i, COLUMS);
            }
            printf("\n");
            break;

        case 2:
            all_average = all_average_mass(mass, ROWS);
            printf("The average value in massive - %.2f\n", all_average);
            break;
        case 3:
            max_value = max_element_mass(mass, ROWS);
            printf("The biggest element in massive - %.2lf\n", max_value);
            break;
        case 4:
            printf("please fill the massive, it has size %dx%d elements:\n", ROWS, COLUMS);
            fill_mass(mass, ROWS);
            break;
        case 5:
            show_mass(mass, ROWS);
            break;
        case 6:
            key = 0;
            break;
        default:
            printf("you entered incorrect value, please select one choice from the menu:\n");
            break;
        }
    }



    return 0;
}


int show_menu(void)
{
    int menu_set;
    printf("choose the operation with massive:\n");
    printf("1 - the average value for each line in massive\n"
           "2 - the average value for all massive's elements\n"
           "3 - show the biggest elements of massive\n"
           "4 - fill the massive with new value\n"
           "5 - show the massive\n"
           "6 - exit from program\n");
    scanf("%d", &menu_set);
    return menu_set;
}


void fill_mass(double arr[][COLUMS], int rows)
{
    for (int i = 0; i < rows; i++)
    {
        printf("press %d elements in %d row:\n", COLUMS, i);
        for (int j = 0; j < COLUMS; j++)
        {
            scanf("%lf", &arr[i][j]);
        }
    }
}

void show_mass(double arr[][COLUMS], int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < COLUMS; j++)
        {
            printf("%.2lf ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}


void line_average_mass(double arr[], int colum)
{
    double res = 0.;
    for (int i = 0; i < colum; i++)
    {
        res += arr[i];
    }
    printf("%.2lf\n", res / colum);
}

double all_average_mass(double arr[][COLUMS], int rows)
{
    double res = 0.;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < COLUMS; j++)
        {
            res += arr[i][j];
        }
    }
    return res / (rows * COLUMS);
}

double max_element_mass(double arr[][COLUMS], int rows)
{
    double max_val = arr[0][0];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < COLUMS; j++)
        {
            if (max_val < arr[i][j])
            {
                max_val = arr[i][j];
            }
        }
    }
    return max_val;
}
