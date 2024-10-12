#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int add(int x1,int x2){
    printf("addition of two values : %d\n",x1+x2);
}
int sub(int x1,int x2){
    printf("subtraction of two values : %d\n",x1-x2);
}int mul(int x1,int x2){
    printf("multiplication of two values : %d\n",x1*x2);
}float divi(int x1,int x2){
    printf("Division of two values : %d\n",x1/x2);
}

int main (int argc , char *argv[]){
    
   if(strcmp(argv[1],"--help")== 0 || strcmp(argv[1],"-h")== 0 ){
    printf("usage  : ./args --help   to show this msg \n--add / -a   add two numbers \n--sub / -s   subtract two numbers \n--mul / -m   multiply two numbers \n--div / -d   divide two numbers\n");
    printf("\n Ex : ./args --add 10 20\n");
   }

   else if(strcmp(argv[1],"--add")== 0 || strcmp(argv[1],"-a")== 0 ){
    int n1=atoi(argv[2]);
    int n2=atoi(argv[3]);
    add(n1,n2);
   }
   else if(strcmp(argv[1],"--sub")== 0 ||strcmp(argv[1],"-s") == 0 ){
    int n1=atoi(argv[2]);
    int n2=atoi(argv[3]);
    sub(n1,n2);
   }else  if(strcmp(argv[1],"--mul")== 0 ||strcmp(argv[1],"-m") == 0 ){
    int n1=atoi(argv[2]);
    int n2=atoi(argv[3]);
    mul(n1,n2);
   }else if(strcmp(argv[1],"--div")== 0 ||strcmp(argv[1],"-d") == 0 ){
    int n1=atoi(argv[2]);
    int n2=atoi(argv[3]);
    divi(n1,n2);
   }
}