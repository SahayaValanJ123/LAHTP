#include <stdio.h>
#include <stdlib.h>


int main(){
    int n,i,*ptr,sum=0;
    printf("Enter the no.of inputs : ");
    scanf("%d",&n);

    ptr=(int*) calloc(sizeof(int) , n);
    if(ptr == NULL ){
        printf("Error Memory not allocated ");
        exit(0);
    }
    printf("Enter elements : ");
    for (i=0;i<n;i++){
        scanf("%d",ptr+i);
        sum += *(ptr+i);
    }
    printf("Sum = %d",sum);
    free(ptr);
    return 0;




}