#include <stdio.h>


static int b=20; //parent for all parents

int foo();

int main(){ //parent
    int a=10,v;
    printf("[main] value of b :%d\n",b);
    b=30;
    foo();
    printf("[main] value of a :%d\n",a);
    
    if(1){  //child
        int a=20;
        printf("[main:if] value of a :%d\n",a);
        if(1){ 
            printf("[main:if:if] value of a : %d value of b :%d\n",a,b);
        }
    }
    printf("[after main:if] value of a :%d\n",a);
    printf("[after main:if] value of b :%d\n",b);
    
}

int foo(){
    b=50;
    printf("[foo] value of b :%d\n",b);
}