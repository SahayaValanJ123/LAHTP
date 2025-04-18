#include <stdio.h>

int main()
{
    // char a[2], b[2], c[2], d[2];
    // printf("Enter the string : ");
    // scanf("%s", a);
    // printf("after a value : %s   @ %p\n",a,a);
    // printf("before  b value : %s   @ %p\n",b,b);

    // printf("Enter the string : ");
    // scanf("%s", b);
    // printf("after b value : %s   @ %p\n",b,b);
    // printf("before c value : %s   @ %p\n",c,c);
    // printf("Enter the string : ");
    // scanf("%s", c);
    // printf("after c value : %s   @ %p\n",c,c);
    // printf("before d value : %s   @ %p\n",d,d);
    // printf("Enter the string : ");
    // scanf("%s", d);
    // printf("after d value : %s   @ %p\n",d,d);

    // printf("===\n");
    // printf("value : %s\n",a);
    // printf("value : %s\n",b);
    // printf("value : %s\n",c);
    // printf("value : %s\n",d);

    char abc[5];
    char ab[6] = "world";
    int x=0;
    printf("Enter abc value : ");
    scanf("%s",abc);
    for (int i = 0; i < 6; i++)
    {
        printf("ab[%d] : %c  @ : %p\n", i,ab[i],&ab[i]);
    }
    printf("---------\n");
    for(int i=0;i<6;i++){
        printf("abc[%d] : %c  @ : %p\n",i, abc[i],&abc[i]);
    }
    printf("---------\n");
    printf("ab : %c  @ : %p\n", ab[5],&ab[5]);
    printf("x : %d  @ : %p\n",x,&x);
    printf("ab : %s  @ : %p\n",ab,&ab);
    printf("abc : %s  @ : %p\n",abc,&abc);
    printf("x : %d  @ : %p\n",x,&x);
    if(x){
        printf("Access Granted\n");
    }else{
        printf("Access denied\n");
    }
}

// c - scanf secure input
// learn more about \r  -- carriage return useful in hacking