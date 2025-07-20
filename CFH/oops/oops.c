#include <stdio.h>
#include <math.h>
// CLASS
typedef struct Point // declaration not definition
{
    double x;
    double y;

    double (*calc)(struct Point *); // syntax  //method1
    int (*addie)(struct Point*) ;          //method2

} Point_t;

double func_calc(Point_t *p)
{
    return sqrt(p->x * p->x + p->y * p->y);
}
int func_add(Point_t *a)
{
    return (*a).x + (*a).y;
}

// CONSTRUCTOR
void _init_Point(Point_t *p, double x, double y)
{
    p->x = x; // this is equalent to (*p).x=x;
    p->y = y;
    p->calc = func_calc;
    //p->calc = func_add; //WRONG ..it will overwrite func_calc
     p->addie = func_add;
}

int main()
{
    // OBJECT
    Point_t p, q;
    _init_Point(&p, 1, 2);
    printf("calc : %lf\n", p.calc(&p));
    _init_Point(&q, 2, 4);
    printf("addie : %d\n", q.addie(&q));
}
/* NOTES

1. double func_calc(Point_t *p) --> Point_t is a cls name *p is act as a self
2. int func_add(Point_t *a) --> Point_t is a cls name *a is act as a self
🧠 Concept Summary — OOP in C

C doesn't have classes, but you can emulate OOP using:

  @  Struct → Class

  @  Function pointers in struct → Member functions

  @  Constructor → Init function

  @  Encapsulation → Use opaque structs (header-only access)

  @  Inheritance → Use composition (not true inheritance)

  @  Polymorphism → Assign different function pointers to different structs

*/