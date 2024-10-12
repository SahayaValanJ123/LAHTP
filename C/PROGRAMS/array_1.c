#include <stdio.h>

int char_array(){
        int a[10];
    int table;
    printf("Whch num table u want to print : ");
    scanf("%d",&table);

    for (int i = 0;i <=10;i++){
        a[i]=i*table;
        
    }
    for(int j=0;j<11;j++){
        printf("a[%d] = %d\n",j,a[j]);
    }
}



int main(){

    //array devclrations
    char s = 's';
    char sona[]={'s','o','n','a'};
    char sona1[40]="sonalisha pakki";
    char sona2[10]={'s','o','n','a','l','i','s','h','a'};
    char sona3[]={'s','o','n','a','l','i','s','h','a',};

//when we didnt specify null charach=ter the the variable 
//memory exeeds..this is called buffer overflow

    printf("%s",sona3);


}