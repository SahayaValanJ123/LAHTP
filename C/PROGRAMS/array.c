#include <stdio.h>
#include <stdlib.h>

int int_array()
{
    int a[10], n, i;
    printf("\nEnter the no.of input values : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\nEnter position %d th  value : ", i);
        scanf("%d", &a[i]);
        printf("value of index %d is : %d \n", i, a[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}

int char_array()
{
    char *car[] = {"bmw", "ferrari", "honda"};

    int size = sizeof(car) / sizeof(car[0]);
    for (int i = 0; i < size; i++)
    {
        printf("cars : %s\n", car[i]);
    }
}
int char_array_scan()
{
    int n = 3, i;
    char *car[3];

    for (i = 0; i < n; i++)
    {
        car[i] = (char *)malloc(50 * sizeof(char));
        if (car[i] == NULL)
        {
            printf("Memory allocation failed ...!\n");
            return 1;
        }
        printf("Enter the name of the car %d : ", i + 1);
        scanf("%49s", car[i]);
    }
    printf("\nEntered car names are : \n");
    for (i = 0; i < n; i++)
    {
        printf("Car %d is : %s\n", i + 1, car[i]);
        free(car[i]);
    }
}

int main()
{

    // int_array();
    //  char_array();
    char_array_scan();
}