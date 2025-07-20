#include <stdio.h>
char naming_like_this();
int main()
{
    // ######### braces  ##########

    int x = 10, y;
    if (x != 10)
    {
        printf("x is 10\n");
    }
    else
    {
        printf("youre wrong\n");
    }
    // coming if else is an brace less..here we can use only one statement
    // correct way
    if (x == 10)
        y = 20;

    else
        y = 30;

    // wrong way
    if (x == 10)
        y = 20;
    // printf("y value : %d\n",y);
    else
        y = 30;
    // printf("y value : %d\n", y);

    printf("\n==================\n");

    char s;
    struct file
    {
        /* data */
    };

    /*use space after thse key words
    if,switch , case , for , do , while
    */
    s = sizeof(struct file);
    // bad way
    s = sizeof(struct file);

    printf("\n==================\n");
    naming_like_this();
}

char naming_like_this(){
    int age = 20;
    char *name = "sooonapaana";
    printf("Name : %s \nAge : %d",name,age);
}