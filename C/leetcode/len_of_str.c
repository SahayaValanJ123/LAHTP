#include <stdio.h>
#include <unistd.h>

//prblm - ip - s = "abcabcabc".
//soln  - op - len-3 'abc'.


// init;comparison;updation
// init - only before loop starts
// comparison - before every loop execution
// updation - after every loop execution
int pid(){
    printf("pid : %d",getpid());
}
int main(){
    
    for(int i=0;i<10;i++){
            printf("Hello World\n");
    }
    pid();
    return 0;

}
