#include<stdio.h>

struct emp{
        int age ;
        float percent;
        char name[20];
    };

int main(){
    FILE *fp;
    struct emp e;

    fp = fopen ("file4.dat","rb");
    while(fread(&e, sizeof(struct emp), 1,fp)== 1){
        printf("Name : %s Age : %d  percent : %.1f\n",e.name,e.age,e.percent);
    }
    fclose(fp);
    return 0;
}
