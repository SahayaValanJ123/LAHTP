#include <stdio.h>


int main(){
    char *fname1= "file5.txt";
    char *fname2= "file1.txt";

    if(rename(fname1,fname2)==0){
        printf("Renamed succesfully ...!\n");
    }else{
        perror("There is an error ..!");
    }
}