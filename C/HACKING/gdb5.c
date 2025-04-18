#include <stdio.h>
#include <string.h>
// 2D ARRAYS    


// int print_array(int endlen,int array[][endlen]){

//     for(int i=0;i<sizeof(array);i++){
//         for(int j=0;j<sizeof(array[0])/sizeof(int);j++){
//             printf("array values : %d\n",array[i][j]);
//         }
//         printf("\n");
//     }
// }
int main(){
    int array[5][8]={        //array[row][col]
        {1,2,3,4,5,6,7,8},
        {1,2,3,4,5,6,7,8},
        {1,2,3,4,5,6,7,8},
        {1,2,3,4,5,6,7,8},
        {1,2,3,4,5,6,7,8},
        
    };
int summa = 5;
    int len0 =sizeof(array)/sizeof(array[0]);
    int len1=sizeof(array[5])/sizeof(int);

    printf("arr len0 : %d\n",len0);
    printf("arr len1 : %d\n",len1);


    for(int i=0;i<len0;i++){
        for(int j=0;j<len1;j++){
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }
 
    printf("array len : %d\n",sizeof(array));
    printf("last value : %d @ %p\n",array[4][7],&array[5][7]);
}
