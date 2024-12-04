#include <stdio.h>

int main()
{
    FILE *src, *des;
    char ch;
    src = fopen("fread.c", "r");
    des = fopen("copydes.c", "w");
    if (!src)
    {
        printf("source file doesn't exist...!\n");
    }
    else
    {
        while ((ch = fgetc(src) )!= EOF)
        {
            fputc(ch, des);
        }
    }
    fclose(src);
    fclose(des);
    printf("File copied successfully ..!\n");
}