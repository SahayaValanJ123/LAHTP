#include <stdio.h>
#include <math.h>


int reverse_num(int n)
{
    int r;
    if (n >= 100 && n <= 999)
    {
        int hun = n / 100;
        int tens = (n / 10) % 10;
        int units = n % 10;
        r = (units * 100) + (tens * 10) + hun;
    }
    return r;
}

int reverse(int n)
{
    int reversed = 0, digit;
    int originalNum = n;
    while (n != 0)
    {
        digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }
    return reversed;
}

int main()
{
    int i, n, rev;
    double r, mlp, revmlp;
    while (1)
    {
        printf("Enter the number <10 - 99> 00 to quit: ");
        scanf("%d", &n);
        if(n==00){
            break;
        }
        r = reverse(n);
        mlp = n * n;           // 144
        revmlp = r * r;        // 441
        rev = reverse(revmlp); // 144

        if (mlp == rev)
        {
            printf("Entered number is RSRN..!\n");
        }
        else
        {
            printf("Not an RSRN..!\n");
        }
    }
}
