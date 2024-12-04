#include <stdio.h>
#include <string.h>

// EOF ==== -1

void summa()
{
    // THIS IS WHAT EXACTLY FILE POINTER IS

    typedef struct
    {
        int fd;             /* File descriptor */
        unsigned char *buf; /* Buffer */
        size_t size;        /* Size of the file */
        size_t pos;         /* Current position in the file */
    } FILE;
}





char put_c()
{
    FILE *fp;
    int i;

    fp = fopen("file1.txt", "w+");
    char str[] = "sahaya valan\n";
    for (i = 0; i < strlen(str); i++){
    if (str[i] != EOF){
            fputc(str[i], fp);}
            }
        }

char put_s(){
    FILE *fpp;
    int i;
    
    fpp = fopen("file2.txt", "w+");
    char *sub[] = {"sahay valan\n", "age = 20\n", "ece dept\n"};
    for (i = 0; i < 3; i++)
    {
        fputs(sub[i], fpp);
    }
}

char print(){
     FILE  *fppp;
    int i;
    struct emplyee
    {
        int age;
        float percent;
        char *name;
    };
    fppp = fopen("file3.txt", "w");
    struct emplyee emp[] = {{25, 70.0, "sahaya"}, {20, 90.0, "valan"}};
    for (i = 0; i < 2; i++)
    {
        fprintf(fppp, "%d %.1f %s\n", emp[i].age, emp[i].percent, emp[i].name);
    }
}
char get_c(){
    FILE *fp;
    int i;char ch;
   
    fp = fopen("file1.txt", "r");
    while (1){ 
        ch = fgetc(fp);
        if (ch == EOF)
            break;
        printf("%c", ch);
        
        printf("\n");}
    fclose(fp);
}


char get_str(){
    FILE *fp;
    int i;char *ch;

    fp = fopen("file2.txt","r");
   while(!feof(fp)){
        fgets(ch,256,fp);
        printf("%s",ch);
   }
    fclose(fp);
}
int f_scan_f(){
    FILE *fp;
    char *s;int i,a;float p;

    fp = fopen("file3.txt","r");
    if(fp == NULL){
        puts("cannot open file"); return 0;
    }
    while(fscanf(fp,"%d %f %s",&a ,&p,s) != EOF)
    printf("Name : %s   Age : %d    Percent : %f",s,a,p );
    fclose(fp);
    return 0;
}

int main()
{
    // put_c();
    // put_s();
    // print();
    // get_c();
    // get_str();
//     FILE *fp;
//     int i;char *ch;

//     fp = fopen("file2.txt","r");
//    while(!feof(fp)){
//         fgets(ch,256,fp);
//         printf("%s",ch);
//    }
//     fclose(fp);
     FILE *fpp;
    char *s;int i,a;float p;

    fpp = fopen("file3.txt","r");
    if(fpp == NULL){
        puts("cannot open file"); return 0;
    }
    while(fscanf(fpp,"%d %f %s",&a ,&p,s) != EOF)
    printf("Name : %s   Age : %d    Percent : %f\n",s,a,p );
    fclose(fpp);
    return 0;
    
}

