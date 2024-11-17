#include <stdio.h>
#include <string.h>

void ptr_ex()
{
    char str_a[20];
    char *ptr;
    char *ptr2;

    strcpy(str_a, "hellow guys\n");
    ptr = str_a;
    printf("%s", ptr);

    ptr2 = ptr + 4;
    printf("%s", ptr2);
    strcpy(ptr2, "welcome guys\n");
    printf("%s", ptr);
}

int main()
{
    int int_var = 5;
    int *int_ptr;
    int_ptr = &int_var;
    printf("int_ptr = 0x%08x\n",int_ptr);
    printf("&int_ptr = 0x%08x\n");
    printf("*int_ptr = 0x%08x\n",*int_ptr);

    printf("int ar is located at 0x%08x and contains %d\n",&int_var,int_var);
    printf("int ptr is loacted at 0x%08x, contains 0x%08x , and points to %d\n\n",&int_ptr,int_ptr,*int_ptr);
    
    //typecast

    int a,b;
    float c,d;
    a=13;b=5;
    c=a/b;
    d=(float)a/(float)b;
    printf("%.2f\n",c);
    printf("%.2f\n",d);

}