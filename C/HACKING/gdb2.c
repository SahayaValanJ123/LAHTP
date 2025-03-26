#include <stdio.h>
//static vars

int foo(){
    int j=10;
    static int i;
    i= i+j;
    return i;
}

int main(){
    // int i=10;
    // int *j= &i;

    // printf("[*] value of i : [%d]\n",i);
    // printf("[*] Adrs of i : [%p]\n",&i);
    // printf("[*] value of j : [%p]\n",j);
    // printf("[*] value of *j : [%d]\n",*j);
    // printf("[*] Adrs of j : [%p]\n",&j);
    // *j=70;
    // printf("[*] value of *j : [%d]\n",*j);
    // printf("[*] value of i : [%d]\n",i);
for(int i=0;i<10;i++){
    printf("foo value : %d\n",foo());
}
    static int jsv;
    printf("jsv : %d\n", jsv);
}