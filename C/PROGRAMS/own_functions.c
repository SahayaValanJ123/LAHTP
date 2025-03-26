#include <stdio.h> 
#include <string.h>
#include <ctype.h>


void to_upperCase(char *str);
char to_lower(char *str);
int is_upper(char *str);
int is_lower(char *str);
int str_cmp(char *a, char *b);
int reverse(int n);
int stringlen(char *c);


int main(){


    //FOR REVERSE A SINGLE NUMBER ABOVE 2 DIGITS
    int num,rev;
    num=441;
    rev = reverse(num);
    printf("Reversed number is : %d\n",rev);



    //FOR UPPPERCASE 
    char string[100];
    printf("Enter the string name : ");
    scanf("%s",string);
    to_upperCase(string);
    printf("Upper case string is : %s\n",string);  
    

    //FOR LOWERCASE 
    char str[100];
    printf("Enter the string name : ");
    scanf("%s",str);
    to_lower(str);
    printf("Lower  case string is : %s\n",str); 


    //FOR LENGTH OF ARRAY
    int array[] =  {1,2,3,4,4,4,5,56,6};
    int len = array_len(sizeof(array),sizeof(int));
    printf("Lenght of array is : %d\n",len);


    //FOR STRING COMPARE
    char a[10]="sahaya";
    char b[10]="Sahaya";
    int d = str_cmp(a, b);
    printf("Sum after compare : %d\n", d);
    if (d == 0){
        printf("Strings are same ... \n");
    }else if (d < 0)
    {
        printf("b is small string..");
    }else if (d > 0)
    {
        printf("a is small string ..");
    }else if(d==0){
        printf("Strings are not same ...");
    }
    

}

//####################
int stringlen(char *c)
{
    int count = 0, i;
    while (1)
    {
        if (*(c + count) != 0){
            count++;}
        else{
            break;}
}
return count;
}

//####################


void to_upperCase(char *str){
    // while (*str){
    //     *str =toupper(*str);
    //     str++;
    // }
    printf("received string is : %s \n",str);
    for (int i=0;i<strlen(str); i++){
        if(is_upper(str[i])){
            continue;
        }else{
            str[i]=str[i] - 32;
        }
        
    }

}
//####################

char to_lower(char *str){
    // while(*str){
    //     *str = tolower(*str);
    //     str++;
    // } 
    printf("received string is : %s \n",str);
    for (int i=0;i<strlen(str); i++){
        if(is_lower(str[i])){
            continue;
        }else{
            str[i]=str[i] + 32;
        }
        
    }
}

//####################

int array_len(int sizeof_arr, int sizeof_datatype){
    return sizeof_arr/sizeof_datatype;
}

//####################


int is_upper(char *str){
    if (str >=65 && str <=90){
        return 1;
    }else {
        return 0;
    }

}

int is_lower(char *str){
    if (str >=97 && str <=122){
        return 1;
    }else {
        return 0;
    }
}



int str_cmp(char *a, char *b)
{
    int sum = 0, sum1 = 0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        sum = sum + a[i];
    }
    for (int i = 0; b[i] != '\0'; i++)
    {
        sum1 = sum1 + b[i];
    }
    if (sum - sum1 == 0)
    {
        return 0;
    }
   
    else if (sum - sum1 < 0)
    {
        return -1;
    }
    else if (sum - sum1 > 0)
    {
        return 2;
    }
     else
    {
        return 1;
    }
}


int reverse(int n)
{
    int reversed = 0, digit;
    int originalNum = n;
    while (n != 0)
    {
        digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }
    return reversed;
}
