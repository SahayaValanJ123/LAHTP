#include <stdio.h>
//pointer

int a=10;
int v=90;

int foo(){
    printf("a here for foo : %d\n",a);
     int valan=10;
}

int main()
{
    int bc=50;
    printf("outside for v value : [%p] [%d]\n", &v, v);
    for(int i=0;i<1;i++){
        printf("Hello world\n");
        // v=10;
        printf("inside for v value : [%p] [%d]\n",&v,v);
        v=30;
        printf("before if v value : [%x] [%d]\n",&v,v);
        if (1)
        {
            v = 20;
            printf("inside if v value : [%x] [%d]\n",&v,v);
    }
    printf("after if v value : [%x] [%d]\n",&v,v);

}
printf("outside for v value : [%p] [%d]\n",&v,v);

    return 0;
}
