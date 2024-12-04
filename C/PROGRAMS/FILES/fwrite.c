#include <stdio.h>

//fread() fwrite()

struct emp{
        int age ;
        float percent;
        char name[20];
    };


int main(){
    FILE *fp;int i;
    struct emp e[]={
        {20,60.0,"sahaya"},
        {21,65.0,"valan"},
        {22,70.0,"sona"}
    };

    fp = fopen("file4.dat","wb");
    for(i=0;i<3;i++){
        fwrite(&e[i],sizeof(struct emp) , 1, fp);
    }
    fclose(fp);
    

    
}