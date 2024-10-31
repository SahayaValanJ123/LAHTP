#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int char_array(){
    char *name[30];
    // name=(char *)malloc(sizeof(char)*100);
    printf("Enter your name : ");
    scanf("%s",name);
    printf("\nname  : %s",name);
    // free(name);
    return 0;
} 



int slice(){
    char cr[]="valan";int n,i;
    printf("enter slice nos :");
    scanf("%d", n);
    n=strlen(cr)-2;
    for(i=0;i<n;i++){
        printf("%s\t",cr[i]);   
         }
}

void get_put(){
    char name[20];
    printf("Enter your name : ");
    fgets(name,sizeof(name),stdin);
    printf("Name :");
    puts(name);
    printf("Size of name : %d\n",sizeof(name));
    return 0;

}
void display_str(char str[]){
    printf("name is : ");
    puts(str);

}

void str_to_func(){
    char name[50];
    printf("Enter the name : ");
    fgets(name,sizeof(name),stdin);
    display_str(name);

}
void str_and_ptr(){
    char name[]="sahaya valan";
    
    printf("%c\n",*name);
    printf("%s\n",name);
    printf("%c\n",*(name+1));
    printf("%c\n",*(name+7));
    
    char *strptr=&name[2];
    printf("%c\n",*strptr);
    printf("%c\n",*(strptr+1));
    printf("%c\n",*(strptr+7));
    printf("%c",*(strptr-2 ));
    
}

int main(){
    // slice();
    // char_array();
    // get_put();
    // str_to_func();
    str_and_ptr();

}