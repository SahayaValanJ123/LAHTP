#include <stdio.h>

int main()
{
    int i= 10;
    const int j = 20;

    int *danger = (int *)(&j); //cast-away the constness
    *danger=100;

    printf("const j value : %d",j);
}