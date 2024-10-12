#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int jm()
{
    int g = 1;
    while (g)
    {
        printf("hey\n");
        g++;
        if (g == 6)
        {
            break;
        }
    }
}
int switch_case()
{
    int age, choice;
    while (1)
    {
        printf("\nSelect your character for discount \n");
        printf("\n 1.Father \n 2.mother \n 3.boy \n 4.girl \n 5.child \n 6.exit\n");
        printf("\nEnter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case (1):
            printf("=>you have 2%% discount \n");
            break;
        case (2):
            printf("=>you have 5%% discount \n");
            break;
        case (3):
            printf("=>you have 7%% discount \n");
            break;
        case (4):
            printf("=>you have 10%% discount \n");
            break;
        case (5):
            printf("=>you have 20%% discount \n");
            break;
        case (6): 
            exit(0);
        default:
            printf("Invalid Input \n");
            break;
        }
    }
}
int main()
{
    // jm();
    switch_case();
}