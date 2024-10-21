#include <stdio.h>
#include <stdlib.h>



int dma(){
    int *array,i,n;
    printf("enter the no.of n :");
    scanf("%d",&n);
    array = (int*)malloc(n*sizeof(int));

    for (i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    printf("printing array...\n");
    for(i=0;i<n;i++){
        printf("array [%d] = %d\n",i,array[i]);
    }
    printf("But Memory of a is : %d\n",sizeof(array));
    
}


int main()
{
//    int a[10],i,n;
//    printf("Enter the no.of inputs : ");
//    scanf("%d",&n);
//    for(i=0;i<n;i++){
//     scanf("%d",&a[i]);
//    }
//    printf("Printing the array ..\n");
//    for(i=0;i<n;i++){
//     printf("a[%d] = %d\n",i,a[i]);

//    }
//    printf("But Memory of a is : %d",sizeof(a));

   dma();
}