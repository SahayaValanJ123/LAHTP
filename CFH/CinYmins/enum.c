#include <stdio.h>

int main(){
   typedef enum days {sun,mon,tue=0,wed} weekday; 

    const char *daynames[]  ={"sunday","monday","tesday","wednesday"};
    
    weekday today = tue;
    printf("today : %s \n",daynames[today]);
}