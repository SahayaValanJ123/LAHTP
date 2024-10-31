#include <stdio.h>


int array[3][3];
int arr[3][3];


int matA(){
    int i, j, v;
    printf("Enter ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("A [%d][%d] : ", i, j);
            scanf("%d", &array[i][j]);
        }
    }                                          
}
int matB(){
    int i, j, v;
    printf("Enter ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("B [%d][%d] : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}
void print_matA()
{printf("MATRIX - A :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}void print_matB()
{printf("MATRIX - B :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}
int mat_add(){
    printf("SUM OF MATRIX A & B \n");
     for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", array[i][j]+arr[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    matA();         printf("================\n");
    matB();         printf("================\n");
    print_matA();   printf("================\n");
    print_matB();   printf("================\n");
    mat_add();      printf("================\n");
}