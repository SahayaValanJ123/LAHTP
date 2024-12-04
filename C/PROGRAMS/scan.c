#include <stdio.h>

//there is no scanf_s();

int main(){
    char a[]="hey there";
    FILE *fp;
    fp=fopen("fprintf.dat","w");
    fprintf(fp,"%s",a);
}