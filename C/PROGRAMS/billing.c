#include <stdio.h>

// BILLING SYSTEM

int main()
{
    int ro_no, choice, recpt = 0;
    int reg = 0, tut = 0, ex = 0, other = 0, total = 0;
    char name[50], dept[50], mode[10], q;

    while (1)
    {
        printf("Enter your name: ");
        scanf("%s", name);

        printf("Department: ");
        scanf("%s", dept);

        printf("Payment mode [cash/gpay]: ");
        scanf("%s", mode);

        printf("Roll no: ");
        scanf("%d", &ro_no);

        printf("\n== FEES HEADS ==\n1. Registration fees\n2. Tuition fees\n3. Exam fees\n4. Other fees\n5. Exit\n");
        while (1)
        {
            printf("Choose a fees head [1-4] : ");
            scanf("%d", &choice);
            if (choice == 1)
            {
                printf("Enter your amount: ");
                scanf("%d", &reg);
            }else if (choice == 2)
            {
                printf("Enter your amount: ");
                scanf("%d", &tut);
            }else if (choice == 3)
            {
                printf("Enter your amount: ");
                scanf("%d", &ex);
            }else if (choice == 4)
            {
                printf("Enter your amount: ");
                scanf("%d", &other);
            }else if (choice == 5)
            {
                printf("Exiting....\n");
                break;
            }
        }

       

    total = reg + tut + ex + other;

    printf("\nTotal amount = %d\n", total);
    printf("\n======Here's your receipt======\n\n");
    printf("Name  : %s                     recpt no : %d\n", name, recpt + 1);
    printf("Dept  : %s                 payment mode : %s\n\n", dept, mode);

    printf("      FEES HEADS       |    FEES AMOUNT \n");
    printf("Registration fees      |         %d\n", reg);
    printf("Tuition fees           |         %d\n", tut);
    printf("Exam fees              |         %d\n", ex);
    printf("Other fees             |         %d\n", other);
    printf("_______________________|________________________\n");
    printf("Bill amount            |         %d\n", total);
    recpt++;

    printf("\nPress 'q' to quit or 'c' to continue: ");
    scanf(" %c", &q);

    if (q == 'q')
    {
        break;
    }
}

return 0;
}
