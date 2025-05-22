#include <stdio.h>
#include <string.h>

int pass(char *password){
    int result=0;
    if(strcmp(password,"pass123")==0){
        result =1;
    }else {
        result =0;
    }
    return result;

}
int main(int argc,char *argv[]){
	int a;
	scanf("%d",&a);
    if(argc<2){
        printf("usage : %s <password>\n",argv[0]);
    }
    if(pass(argv[1])){
        printf("Password Accepted\n");
    }else{
        printf("access denied\n");
    }
}
