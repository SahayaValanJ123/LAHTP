#include <stdio.h>

int basic()
{
    int i = 10;
    float j = 10.0;
    char k = 's';
    printf("i valuse %d is stored in %p\n", i, &i);
    printf("j valuse %f is stored in %p\n", j, &j);
    printf("k valuse %c is stored in %p\n\n", k, &k);

    int sv = 10;
    int *p = &sv;

    printf("int sv has value %d stored in %p \n", sv, &sv);
    printf("int* p has value %p stored in %p refers to %d\n", p, &p, *p);
}

int main()
{
    char s = 'S';

    char valan[] = "Sahaya valan sona";
    char valan_one[15] = "Sahaya valan";
    char valan_other[17] = {'s', 'a', 'h', 'a', 'y', 'a', 'v', 'a', 'l', 'a', 'n'};
    char valan_another[] = {'s', 'a', 'h', 'a', 'y', 'a', 'v', 'a', 'l', 'a', 'n'};

    for (int i = 0; i < sizeof(valan_another); i++)
    {
        printf("valan_another [%d] = '%c::%d' stored at %p\n", i, valan_another, valan_another, &valan_another);
    }
    for (int i = 0; i < sizeof(valan_other); i++)
    {
        printf("valan_other [%d] = '%c::%d' stored at %p\n", i, valan_other, valan_other, &valan_other);
    }
    for (int i = 0; i < sizeof(valan_one); i++)
    {
        printf("valan_one [%d] = '%c::%d' stored at %p\n", i, valan_one, valan_one, &valan_one);
    }
    for (int i = 0; i < sizeof(valan); i++)
    {
        printf("valan [%d] = '%c::%d' stored at %p\n", i, valan, valan, &valan);
    }

    printf("valan : %s \n", valan);
    printf("valan_one : %s \n", valan_one);
    printf("valan_other : %s \n", valan_other);
    printf("valan_another : %s \n", valan_another);
}
