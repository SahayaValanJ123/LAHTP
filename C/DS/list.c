#include <stdio.h>

//while

int main(){
    int a =10;
    do{
        printf("a = %d\n",a);
        a++;
        printf("Executed\n");
    }
    while(a<9);
    printf("============\n");
    while(a<15){
        printf("%d\n",a);
        a++;
    }
    return 0;
}