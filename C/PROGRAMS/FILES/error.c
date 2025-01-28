#include <stdio.h>
#include <errno.h>

int main(){


    FILE *fp;
    fp =fopen("nofile.txt","r");
    printf("Error no is : %d \n",errno);
    return 0;


}
