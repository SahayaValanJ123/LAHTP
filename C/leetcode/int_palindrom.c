#include <stdio.h>
#include <string.h>



int main()
{
    int n =121;
    int arr[10],i=0;
    printf("%ld\n",sizeof(n));
    while(n>0){
        arr[i] = n % 10;
        n /= 10;
        
        printf("%d\n",arr[i]);
        i++;
    }
    
    

}
