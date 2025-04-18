#include <stdio.h>
#include <string.h>
// ARRAYS
int stringlen(char *c)
{
    int count = 0, i;
    // while (1)
    // {
    //     if (*(c + count) != 0)
    //     {
    //         count++;
    //     }
    //     else
    //     {
    //         break;
    //     }
    // }
    while(*(c + count) != 0){
        count++;
    }
    return count;
}
int main()
{
    int i[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("adrs of i[0] : %p\n", &i[0]);
    printf("adrs of i : %p\n", i);

    char abc[5];
    printf("Enter string : ");
    fgets(abc,sizeof(abc),stdin);
    int slen = strlen(abc);
   
    char cba[] = "hello";
    int slen1 = strlen(cba);

    printf("abc strlen : %d string : %s \n", slen, abc);
    printf("cba strlen : %d string : %s \n", slen1, cba);
    printf("=======\n");
    for (int i = 0; i < slen; i++)
    {
        printf("adrs of abc : %p  %c\n", &abc[i],abc[i]);
    }
    printf("=======\n");
    for (int i = 0; i < slen1; i++)
    {
        printf("adrs of cba : %p  %c\n", &cba[i],*(cba+i)); //cba+i means 1st i=0 , adrs+0=adrs so 1st value will be printed
    }
    printf("=======\n");
    char s[]="Hello world";
    printf("len of s : %d\n",strlen(s));
    for(int i=0;i<strlen(s);i++){
        printf("%c",s[i]);
    }

    char cc[30];
    printf("\nEnter a string : ");
    scanf("%s", cc);
    int len=stringlen(cc);
    printf("cc : %s  len of cc : %d\n", cc, len);

    for (int i = 0; i < len; i++)
    { 
        printf("cc[i] : %c || *(cc+i) : %c  ||  cc : %s\n", cc[i], *(cc + i),cc);
    }
}