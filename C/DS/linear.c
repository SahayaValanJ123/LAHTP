#include <stdio.h>

int main(){
    int n,a[20],key,i,found=0;
    printf("Enter the value of n : ");
    scanf("%d",&n);

    printf("Enter array elemnts :");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter key element to search : ");
    scanf("%d",&key);
    
    for(i=0;i<n;i++){
        if(key == a[i]){
            printf("Key Found !\n");
            found = 1;
            break;
        }
    }
    if(found==0){
        printf("Key Not Found !\n");
    }
    
    return 0;
}
