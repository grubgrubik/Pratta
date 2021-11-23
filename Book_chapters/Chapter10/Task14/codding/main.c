#include <stdio.h>


int show_menu(void);

void line_average_mass(int colum, double arr[colum]);
void fill_mass(int rows, int colum, double arr[rows][colum]);

double max_element_mass(int rows, int colum, double arr[rows][colum]);
double all_average_mass(int rows, int colum, double arr[rows][colum]);
void show_mass(int rows, int colum, double arr[rows][colum]);



int main(void)
{
    int colum, rows;
    int menu_choose;
    int key = 1;
    int empty_mass = 1;
    double all_average = 0.;
    double max_value = 0.;



    printf("operations with massive, to start press '1', to exit press '0'\n");



    printf("Please set the size for massive:\n");
    printf("Lines - ");
    scanf("%d", &rows);
    printf("Colums - ");
    scanf("%d", &colum);

    double mass[rows][colum];



    while (key)
    {

        if (empty_mass)
        {
            printf("please fill the massive, it has size %dx%d elements:\n", rows, colum);
            fill_mass(rows, colum, mass);
            empty_mass = 0;
        }


        menu_choose = show_menu();
        printf("\n");


        switch (menu_choose)
        {
        case 1:
            for (int i = 0; i < rows; i++)
            {
                printf("The average value in %d line of massive - ", i);
                line_average_mass(colum, mass + i);
            }
            printf("\n");
            break;

        case 2:
            all_average = all_average_mass(rows, colum, mass);
            printf("The average value in massive - %.2f\n", all_average);
            break;
        case 3:
            max_value = max_element_mass(rows, colum, mass);
            printf("The biggest element in massive - %.2lf\n", max_value);
            break;
        case 4:
            printf("please fill the massive, it has size %dx%d elements:\n", rows, colum);
            fill_mass(rows, colum, mass);
            break;
        case 5:
            show_mass(rows, colum, mass);
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


void fill_mass(int rows, int colum, double arr[rows][colum])
{
    for (int i = 0; i < rows; i++)
    {
        printf("press %d elements in %d row:\n", colum, i);
        for (int j = 0; j < colum; j++)
        {
            scanf("%lf", &arr[i][j]);
        }
    }
}

void show_mass(int rows, int colum, double arr[rows][colum])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < colum; j++)
        {
            printf("%.2lf ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}


void line_average_mass(int colum, double arr[colum])
{
    double res = 0.;
    for (int i = 0; i < colum; i++)
    {
        res += arr[i];
    }
    printf("%.2lf\n", res / colum);
}

double all_average_mass(int rows, int colum, double arr[rows][colum])
{
    double res = 0.;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < colum; j++)
        {
            res += arr[i][j];
        }
    }
    return res / (rows * colum);
}

double max_element_mass(int rows, int colum, double arr[rows][colum])
{
    double max_val = arr[0][0];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < colum; j++)
        {
            if (max_val < arr[i][j])
            {
                max_val = arr[i][j];
            }
        }
    }
    return max_val;
}
