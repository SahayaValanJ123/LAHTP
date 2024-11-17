#include <stdio.h>

int main()
{
    int x = 10;
    printf("Outer x is  : %d\n", x);
    {
        int x = 15;
        int y = x;
        printf("Inner x is  : %d\n", x);
        printf("Inner y is  : %d\n", x);
    }
    x++;
    printf("Outer x is  : %d\n", x);


    union summa{
        int a;
        char x;
    }s;
    s.x='d';
    s.a= 100;
    printf("x is : %c\n",s.x);
    printf("a is : %d\n",s.a);

    struct jumma{
        int a;
        char c;
    }j,j1;
    
    j.a = 10;
    j.c = 'z';
    printf("a is : %d\n" ,j.a);
    printf("c is : %cn" ,j.c);
    
}
