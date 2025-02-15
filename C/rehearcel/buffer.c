#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    char text[20];
    char text1[20];
    printf("Enter some text : ");
    scanf("%[^\n]s", text);
    printf("Enter some text : ");
    scanf("%s", text1);

    printf("text : %s\n",text);
    printf("text1 : %s\n",text1);

    printf(" text %p\n",text);
    printf(" text1 %p\n",text1);

    char *pass;
    //char 


}