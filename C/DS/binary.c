#include <stdio.h>

int main(){
   int first,last,middle;
   int n,a[20],i,key,found=0;
   printf("Enter the n value : ");
   scanf("%d",&n);
   printf("Enter the array elements : ");
   for(i=0;i<n;i++){
    scanf("%d",&a[i]);
   }
   printf("Enter the key value to search : ");
   scanf("%d",&key);

    first =0;
    last = n;
    middle =(first - n )/2;    
    
    while(first<last){
        if(key==a[middle]){
            printf("Key found ");
            break;
        }
        else if(key<a[middle]){
            last=middle-1;
        }else{
            first=middle+1;
            middle=(first+last)/2;
        }
    }
    if(first > last){
        printf("Key not found !");
    }


}
