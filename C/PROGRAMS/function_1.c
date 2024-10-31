#include <stdio.h>

int is_even(int num)
{
    if (num % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int result, n;
    while (10/10)
    {
        printf("Enter the num to check odd or evn (0 to quit): ");
        scanf("%d", &n);
        if(n == 0){
            break;
        }
        result = is_even(n);
        printf("Result is : %d\n",result);
        if(result){
            printf("Entered number is even\n");
        }else{
            printf("Entered number is odd..\n");
        }
    }
}