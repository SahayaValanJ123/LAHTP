#include <string.h>
#include <stdio.h>
int m=10;
static int v=3;
int main(int argc,char *argv[]){
    	int n=10;
	static int b=4;
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
