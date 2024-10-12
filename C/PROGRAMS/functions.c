#include <stdio.h>
#include <limits.h>
#include <stdarg.h>
#define pi 3.14

double cube(double x){
    return (x*x*x);
}


int dia(int rad){
    return 2*rad;
}
float circum(int rad){
    return 2*pi*rad;
}
float area(int rad){
    return pi*rad*rad;
}



int main(){
    int rad;
    int c=cube(10);
   printf("cube : %d\n",c);

   printf("ENter radius to calculate circle : ");
   scanf("%d",&rad);
   printf("\nDiameter of the circle : %d \nCircumference of the circle : %.2f\nArea of the Cicle : %.2f\n",dia(rad),circum(rad),area(rad));
}