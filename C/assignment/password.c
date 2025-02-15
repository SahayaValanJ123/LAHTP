#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <termios.h>

int size;

int check_pass(char *password, int size)
{ // SAha!@#
// weekest- 3 weak 4  average-5 medium-7 strong-8 strongest-9
    int i;
    for (i = 0; i < size; i++)
    {
        if (password[i] >= 'A' && password[i] <= 'Z' && password[i] >= 'a' && password[i] <= 'z' && password[i] >= '0' && password[i] <= '9' && password[i] == '!' || password[i] == '@' || password[i] == '#' || password[i] == '$' || password[i] == '%' || password[i] == '^' || password[i] == '&' || password[i] == '*')
        {
            return 9;
        }
        else if (password[i] >= 'A' && password[i] <= 'Z' && password[i] >= '0' && password[i] <= '9' && password[i] == '!' || password[i] == '@' || password[i] == '#' || password[i] == '$' || password[i] == '%' || password[i] == '^' || password[i] == '&' || password[i] == '*')
        {
            return 8;
        }
        else if (password[i] >= '0' && password[i] <= '9' && password[i] >= 'a' && password[i] <= 'z' && password[i] == '!' || password[i] == '@' || password[i] == '#' || password[i] == '$' || password[i] == '%' || password[i] == '^' || password[i] == '&' || password[i] == '*')
        {
            return 7;
        }
        // else if (password[i] == '!' || password[i] == '@' || password[i] == '#' || password[i] == '$' || password[i] == '%' || password[i] == '^' || password[i] == '&' || password[i] == '*')
        // {
        //     return 8;
        // }
        else if (password[i] >= '0' && password[i] <= '9' && password[i] >= 'a' && password[i] <= 'z' && password[i] >= 'A' && password[i] <= 'Z')
        {
            return 6;
        }

        else if (password[i] >= '0' && password[i] <= '9' && password[i] >= 'a' && password[i] <= 'z')
        {
            return 5;
        }
        else if (password[i] >= '0' && password[i] <= '9' && password[i] >= 'A' && password[i] <= 'Z')
        {
            return 5;
        }
        else if (password[i] >= 'a' && password[i] <= 'z' && password[i] >= 'A' && password[i] <= 'Z')
        {
            return 4;
        }
        else if (password[i] >= '0' && password[i] <= '9')
        {
            return 3;
        }
        else
        {
            return 0;
        }
    }
}


void getPassword(char *password, size_t SIZE)
{
    struct termios oldt, newt;
    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;

    newt.c_lflag &= ~ECHO;
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);

    printf("Enter your password : ");
    fgets(password, SIZE, stdin);

    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    printf("\n");
    int len = strlen(password);
    printf("password size : %d\n", len);
    size = len;
    if (len < 8)
    {
        printf("Password must have atleast 8 characters !\n");
        _exit(0);
    }
}

int main()
{

    printf("=======Password Validation=======\n");
    printf("password must have one uppercase \n");
    printf("password must have three lowercase\n");
    printf("password must have one symbol \n");
    printf("password must have three numeric characters \n\n\n");
    while (1)
    {

        char password[100];
        getPassword(password, sizeof(password));

        printf("password is : %s", password);
        int rank = check_pass(password, size);

        switch (rank)
        {
        case 4:
            printf("\n____  Rank : %d  Weak password !  ____\n\n", rank);
            break;
        case 3:
            printf("\n____  Rank : %d  Weak password !  ____\n\n", rank);
            break;
        case 5:
            printf("\n____  Rank : %d  medium password !  ____\n\n", rank);
            break;
        case 6:
            printf("\n____  Rank : %d  medium password !  ____\n\n", rank);
            break;
        case 8:
            printf("\n____  Rank : %d  Strong password !  ____\n\n", rank);
            break;
        case 7:
            printf("\n____  Rank : %d  Strong password !  ____\n\n", rank);
            break;
        case 9:
            printf("\n____  Rank : %d  Strongest password !  ____\n\n", rank);
            break;
        case 0:
            printf("\n____  Rank : %d  Weakest password !  ____\n\n", rank);
            break;
        default:
            printf("\n____  Must contain 8 characters  ____\n\n");
            break;
        }
    }
    return 0;
}