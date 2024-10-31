#include <stdio.h>
int add(int *nums,int count){
    int result =0;
    for(int i =0;i<count;i++){
        result = result + nums[i];
    }
    return result;

}
int array_len(int sizeof_arr, int sizeof_datatype){
    return sizeof_arr/sizeof_datatype;
}



int main(){
    int a[]={1,4,5,6,7656,66,7,7,8,};
    int len = array_len(sizeof(a),sizeof(int));
    printf("Sum is : %d\n",add(a,len));

    int d= 5;
    printf("%d %d %d\n",d++,d,d++);
}