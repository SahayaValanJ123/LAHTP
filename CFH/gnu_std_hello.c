/**/
#include <stdio.h>

int main()
{
    int a = 10, b = 20;
    int *p = &a;
    int *c = *(&p);

    printf("value of a = %d\n", a);
    printf("address of a = %p\n", &a);

    printf("value of p = %p\n", p);
    printf("address of p = %p\n", &p);
    printf("value of p = %d\n", *p);
    *p = 30;
    printf("value of p = %d\n", *p);

    ///////
    p = &b;
    printf("=============\n");
    printf("value of b = %d\n", b);
    printf("adrs of b = %p\n", &b);
    *p=40;
    printf("value of p = %p\n", p);
    printf("address of p = %p\n", &p);
    printf("value of p = %d\n", *p);
    
    printf("=============\n");
    printf("c = %d\n",*c);
    printf("address of c = %p\n", c);
}
