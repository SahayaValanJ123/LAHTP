#include <stdio.h>

int main(){
    int i,j,r,c;
    printf("Enter row : \n");
    scanf("%d",&r);
    printf("Enter col : \n");
    scanf("%d",&c);
    int a[r][c];
    printf("=====Enter array (%dx%d) values=====\n",r,c);
    for (i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
        
    printf("======== printing array ========\n");
    for (i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("a[%d][%d] = %d\t",i,j,a[i][j]);
        }
        printf("\n");
    }
}