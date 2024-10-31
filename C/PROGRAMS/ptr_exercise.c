#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 10;
    int b = 20;
    char c = 'a';
    int *ptr = &a;
    int *pta = &b;

    printf("value of a : %d , address of a : %p\n", a, &a);
    printf("value of c : %c , address of c : %p\n", c, &c);

    printf("address of a : %p\n", &a);
    printf("value of ptr : %p\n", ptr);

    printf("address  of ptr : %p\n", &ptr);
    printf("value in   ptr : %d\n", *ptr+*pta);
    
    
    printf("before swap : %d\n", *ptr);
    printf("before swap : %d\n", *pta);
    

    int tmp ;
    tmp= *ptr;
    *ptr=*pta;
    *pta=tmp;

    printf("after swap : %d\n", *ptr);
    printf("after swap : %d\n", *pta);

    char *nm;int n,i;
    nm=(char *) malloc(sizeof(char)*n);
    for(i=0;i<n;i++){
        scanf("%s",nm[i]);
    }
    for(i=0;i<n;i++){
        printf("%s",nm[i]);
    }

    
}