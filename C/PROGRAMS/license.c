#include <string.h>
#include <stdio.h>

int main(int argc,char *argv[]){
    if(argc == 2){
        printf("checking license : %s \n",argv[1]);
        if(strcmp(argv[1],"AAAA-BBBB")==0){
            printf("Access Granted \n");
        }else{
            printf("Usage : <key>\n");
        }
    }
    return 0;
} 
