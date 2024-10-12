#include <stdio.h>
int main(){
    int n=5;
    for (int i =1;i<=n;i++){
        for (int j=i;j<=n;j++){  // inner loop runs from 1 to 5 and prints 5 stars //this is column
            // columns print untill the condition like i(1) to n(5) . so starting is 1-5 stars
            printf("%d",j);
        }
        printf("\n");
    }


    int m=5,i,j,s,k;
    for (i=1;i<=4;i++){
        for (j=i;j<=m;j++){
            printf("  ");
        }
        for(s=1;s<=i;s++){
            printf("# ");
        }
        for(j=1;j<i;j++){
            printf("# ");
        }
        
        printf("\n");
    }
    for(i=1;i<m;i++){
        for(j=1;j<=i;j++){
            printf("  ");
        }
        for(j=i;j<=m;j++){
            printf("# ");
        }
        for(j=i;j<m;j++){
            printf("# ");
        }
        printf("\n");
    }
    return 65;
}