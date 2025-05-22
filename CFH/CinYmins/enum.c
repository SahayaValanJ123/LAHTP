#include <stdio.h>

int main(){
    enum days {sun,mon,tue=99,wed};
    enum days today = tue;
    printf("%d\n",today);
}