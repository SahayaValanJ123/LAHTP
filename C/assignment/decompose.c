#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a, n, i;
    int base = 1;

    printf("Enter no.of inputs: ");
    scanf("%d", &n);

    printf("Enter the num sequence :");
    a = (int *)malloc(n * sizeof(int));
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int num = sizeof(n);

//dummy example
    printf("no.of inputs = %d\n", num);
    printf("No.of 1s = %d\n", a[num - 1]);
    printf("No.of 10s = %d\n", a[num - 2]);
    printf("No.of 100s = %d\n", a[num - 3]);
    printf("No.of 1000s = %d\n", a[num - 4]);
    
    
    printf("====with logic====\n");
//perfect example
    int k=1;
    for (i = 0; i < n; i++){

            printf("No.of %ds = %d\n", base, a[n - k]);
            k++;
            base *= 10;
        
    }
}
