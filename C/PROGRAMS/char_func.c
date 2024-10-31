#include <stdio.h> 
#include <string.h>
#include <ctype.h>

void to_upperCase(char *str){
    while (*str){
        *str =toupper(*str);
        str++;
    }
}



int main(){
    char s[] = "hey";
    //in string "s" and "&s[0]" has same address
    printf("'s' located at %p , %p\n",s,&s[0]); 

printf("=========");

    char stry[]= "hey bro\n";
    printf("'stry' located at %p , %p , %s , %s\n",stry,&stry[0],&stry[0],&stry[1]);
    printf("%s\n",stry);  
    
    char sv[100];
    printf("Enter a string : ");
    scanf("%s",sv);
    to_upperCase(sv);
    printf("Entered string is : %s\n",sv);

   
} 