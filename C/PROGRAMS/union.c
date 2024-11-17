#include <stdio.h>

int main(){
    union point{
        int x;
        double y;
    };
    union point p;
    printf("%ld",sizeof(p));
    
}