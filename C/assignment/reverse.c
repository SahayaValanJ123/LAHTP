#include <stdio.h>
#include <stdlib.h>
int main()
{

    int *a, n, i,k=1;

    printf("Enter no.of inputs: ");
    scanf("%d", &n);

    printf("Enter the number array : ");
    a = (int *)malloc(n * sizeof(int));
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
     printf("reversed array ..!\n");
    for(i=0;i<n;i++){
       
        printf("%d",a[n-k]);
        k++;
    }
}