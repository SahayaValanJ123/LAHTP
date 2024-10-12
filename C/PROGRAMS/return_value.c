#include <stdio.h>

int add(int a,int b,int c){
    return a+b+c;
}
char main(){
    int d = add(10,10,30);
    int f = add(10,10,40);
    printf("Add 3 numbers : %d\n",10+20+d);
    printf("Add 3 numbers : %d\n",f);
    return 1;
}