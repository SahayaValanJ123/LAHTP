// single line comment
/* multiline comment */
#include <stdio.h>
#include <stdlib.h>


#define pi 3.14
#define max 100
enum Days {sun,mon,tue ,wed ,thu, fri ,sat};


int add_2_ints(int x1,int x2){
    printf("%d",x1+x2);
}
int main(int argc, char** argv){
    
    enum Days today = wed;
    printf("Valaue of Today : %d\n",today);
    printf("Valaue of pi : %.2f\n",pi);
    printf("Valaue of max : %d\n",max);
    
    printf("Number of args : %d\n",argc);

    for (int i =0;i<argc ;i++){
        printf("argument %d : %s\n ",i,argv[i]);
    }
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

    add_2_ints(num1,num2);
}