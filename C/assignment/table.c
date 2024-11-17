#include <stdio.h>

int main(){
    int n,i;
    printf("Enter a number for table :");
    scanf("%d",&n);
    for(i=1;i<16;i++){
        printf("%d x %d = %d\n",i,n,i*n);
    }
}
