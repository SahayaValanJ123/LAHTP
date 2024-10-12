#include <stdio.h>
#include <string.h>

// find large num among 3 numbers
int ladder()
{
    int num1, num2, num3, max;
    printf("\nENter three numbers : ");
    scanf("%d%d%d", &num1, &num2, &num3);

    if (num1 > num2 && num1 > num3)
    {
        max = num1;
    }
    else if (num2 > num1 && num2 > num3)
    {
        max = num2;
    }
    else if (num3 > num1 && num3 > num2)
    {
        max = num3;
    }
    printf("Max num b/w 3 nums : %d", max);
    return 0;
}

// find leap year
int leap()
{
    int year;
    printf("\nEnter a year to check leap or not : ");
    scanf("%d", &year);
    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
    {
        printf("LEAP YEAR");
    }
    else
    {
        printf("common year ");
    }
}

// character check
int char_check()
{
    char ch;
    printf("\nEnter a character to check alphabet : ");
    scanf(" %c", &ch);

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("Character is alaphabet ..!");
    }
    else
    {
        printf("Not an alphabet character ..!");
    }
    return 0;
}

int spl_char()
{
    char ch;
    printf("\nEnter a character to check categories : ");
    scanf(" %c", &ch);

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("Character is alaphabet ..!");
    }
    else if (ch <= 0 && ch >= 9)
    {
        printf("Character is Decimal ..!");
    }
    else
    {
        printf("Character is special character ..!");
    }
}
int day()
{
    int day;
    printf("Enter num 1 to 7 : ");
    scanf("%d", &day);
    if (day == 1)
    {
        printf("Monday ");
    }
    else if (day == 7)
    {
        printf("Sunday ");
    }
}
int odd_even()
{
    int num;
    char ex[10];

    while (1)
    {

        printf("Enter a number : ");
        scanf("%d", &num);

        if (num % 2 == 0)
        {
            printf("-->Entered number (%d) is even \n", num);
        }
        else
        {
            printf("-->Entered number is (%d) odd \n", num);
        }
        printf("\ntype q to quit c to continue [q/c] : ");
        scanf("%s", &ex);
        if (strcmp(ex, "q") == 0)
        {
            break;
        }
        if (strcmp(ex, "c") == 0)
        {
            continue;
        }
    }
}
int week()
{
    int week;
    const char *WEEKS[] = {"Monday", "Tuesday", "Wednesday",
                         "Thursday", "Friday", "Saturday",
                         "Sunday"};
    printf("\nEnter day in a week : ");
    scanf(" %d", &week);
    if (week >= 1 && week <= 7)
    {
        printf("%s\n++++++++\n", WEEKS[week]);
    }
    else
    {
        printf("Invalid input");
    }
    int nums = sizeof(WEEKS)/sizeof(WEEKS[0]);
    for(int i = 0;i< nums ; i++){
        printf("%s\n",WEEKS[i]);
    }

}

int main()
{
    // day();
    week();
    // leap();
    // ladder();
    // char_check();
    // spl_char();
    // odd_even();
    
} 