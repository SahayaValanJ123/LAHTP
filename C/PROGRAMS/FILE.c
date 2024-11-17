#include <stdio.h>
void read(){
    FILE *fp;   //-->file pointer 
    char ch;
    fp = fopen("2darray.c","r");
    ch = fgetc(fp);
    while(ch != -1){
        printf("%c",ch);
        ch = fgetc(fp);
    }
}

void write(){
    FILE *fp;
    char ch;
    fp=fopen("test.txt","a");
    printf("Enter your content .. \npress Q to exit ..  : ");
    while(1){
        scanf("%c",&ch);
        if(ch != 'Q'){
            fputc(ch,fp);
        }else{
            break;
        }
    }
}


int main(){

    write();    

}