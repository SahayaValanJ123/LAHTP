#include <stdio.h>

int main()
{

    int re;
    re = remove("copydes.c");
    printf("Return status : %d\n", re);
    if (re == 0)
    {
        printf("File is deleted .. !\n");
    }
    else
    {
        printf("File not delted...\n");
    }
}

/*
revise
File *src,*des;
char ch;
src=fopen("filesrc,txt","r");
src=fopen("filedes,txt","w");
if(!src){
printf("File doesnt exust");
}else{
while((ch=fgetc(src))!=EOF){
    fputc(ch,des);
}}
fclose(src);
fclose(des);

*/