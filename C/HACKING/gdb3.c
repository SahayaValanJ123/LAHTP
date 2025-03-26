#include <stdio.h>
#include <string.h>
#include <unistd.h>
//arrays 

int foo(){
    printf("Foo called !\n");
    static int i;
    char string[10];
    printf("Do you wnat to change the value :");
    scanf("%s",string);
    if(strcmp(string,"yes")==0){
        printf("Enter value for i : ");
        scanf("%d",&i);
        printf("Address of i : %p\n",&i);
    }
    printf("Foo exiting !\n");
    return i;
}

int main(){
    // char string[10];
    // printf("Enter values for string : ");
    // scanf("%s",&string);
    // for(int i=0;i<strlen(string);i++){
    //     printf("%c\n",string[i]);
    // }
    // for (int i = 0; i < strlen(string); i++)
    // {
    //     printf("address of each char : %p\n",&string[i]);
    // }

    for(int i =0;i<10;i++){
        printf("Foo() : %d\n",foo());
        printf("Adrs : %p\n",&foo);
        printf("pid : %d\n", getpid());
        printf("foo address : %p\n",(void*)foo);
        printf("main address : %p\n", (void *)main);
    }
    
   
}