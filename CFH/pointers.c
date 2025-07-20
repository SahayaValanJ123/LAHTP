#include <stdio.h>
#include <string.h>
void replace(char *subject, char search, char replace)
{
    for(int i=0;;i++){              // infinite for loop
        if(*(subject+i) == search)
            *(subject+i)=replace;   //didn't used {}.bcoz only one statement
        if(*(subject+i) == '\0')
            break;
    }
}


int main()
{
    char subject[] = "sahaya valan";
    // printf("Adrs of Index of subject : %p\n", &subject[0]);
    // printf("value of subject : %p\n", subject);

    // for (int i = 0; i < strlen(subject); i++)
    // {
    //     printf("Value of subject in [%d] : %c\n", i, subject[i]);
    //     printf("Addrs of subject in [%d] : %p\n", i, &subject[i]);
    // }
    // printf("---------------------\n");
    // for (int i = 0; i < strlen(subject); i++)
    // {
    //     printf("Value of subject in [%d] : %c\n", i, *(subject + i));
    //     printf("Addrs of subject in [%d] : %p\n", i, subject + i);
    // }

    printf("Before replace subject : %s\n",subject);
    replace(subject,'a','o');
    printf("After replace subject : %s\n",subject);
    return 255;
}