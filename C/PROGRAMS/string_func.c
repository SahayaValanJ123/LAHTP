#include <stdio.h>
#include <string.h>
int str_cmp(char *a, char *b);

int main()
{

    char a[10];
    char b[10];
    printf("Enter the string : ");
    scanf("%s", a);
    printf("\nEnter the string : ");
    scanf("%s", b);

    // len of the string
    printf("Len of the string : %d\n", (int)strlen(a));

    // string copy
    // strcpy(b, a);
    // printf("copied in str b : %d and a is  :%d\n", b, a);

    // string cmp
    int sum = 0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        sum = sum + a[i];
    }
    printf("Sum of ascii of a : %d\n", sum);
    sum = 0;
    for (int i = 0; b[i] != '\0'; i++)

        sum = sum + b[i];

    printf("Sum of ascii of b : %d\n", sum);

    char c = ' ';
    printf("c = %d\n", c);

    int d = str_cmp(a, b);
    printf("Sum after compare : %d\n", d);
    if (d == 0)
    {
        printf("Strings are same ... \n");
    }
    else if (d < 0)
    {
        printf("b is small string..");
    }
    else if (d > 0)
    {
        printf("a is small string ..");
    }
    else if(d==0)
    {
        printf("Strings are not same ...");
    }

}
int str_cmp(char *a, char *b)
{
    int sum = 0, sum1 = 0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        sum = sum + a[i];
    }
    for (int i = 0; b[i] != '\0'; i++)
    {
        sum1 = sum1 + b[i];
    }
    if (sum - sum1 == 0)
    {
        return 0;
    }
   
    else if (sum - sum1 < 0)
    {
        return -1;
    }
    else if (sum - sum1 > 0)
    {
        return 2;
    }
     else
    {
        return 1;
    }
}