#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define NAME 30
#define MAX_CHAR 1024
#define DATE 20

typedef struct
{
    int num;
    char name[NAME];
    char content[MAX_CHAR];
    char date[DATE];
} TODO;

void addTodo(const char *filename);
void viewTodo(const char *filename);

int main()
{
    const char *filename = "todo.txt";
    int choice;

    while (1)
    {
        printf("\n--- TODO List Application ---\n");
        printf("1. Add TODO\n");
        printf("2. View TODO\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // Consume the newline left by scanf

        switch (choice)
        {
        case 1:
            addTodo(filename);
            break;
        case 2:
            viewTodo(filename);
            break;
        case 3:
            printf("Exiting the application. Goodbye!\n");
            return 0;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    }
}

void addTodo(const char *filename)
{
    FILE *fp = fopen(filename, "a");
    if (!fp)
    {
        perror("Error opening file for writing");
        return;
    }

    TODO todo;
    printf("Enter TODO number: ");
    scanf("%d", &todo.num);
    getchar(); // Consume newline

    printf("Enter TODO name: ");
    fgets(todo.name, sizeof(todo.name), stdin);
    todo.name[strcspn(todo.name, "\n")] = '\0'; // Remove trailing newline

    printf("Enter TODO content (type 'Q' on a new line to stop):\n");
    todo.content[0] = '\0'; // Clear the content buffer
    char line[MAX_CHAR];
    while (1)
    {
        fgets(line, sizeof(line), stdin);
        if (strncmp(line, "Q", 1) == 0)
            break;
        strcat(todo.content, line);
    }
    time_t curtime;
    todo.date[0] = time(&curtime);
    
    // printf("Enter TODO date (YYYY-MM-DD): ");
    // fgets(todo.date, sizeof(todo.date), stdin);
    // todo.date[strcspn(todo.date, "\n")] = '\0'; // Remove trailing newline

    // Write the TODO to the file
    fprintf(fp, "%d|%s|%s|%s\n", todo.num, todo.name, todo.content, todo.date);
    fclose(fp);

    printf("TODO added successfully!\n");
}

void viewTodo(const char *filename)
{
    FILE *fp = fopen(filename, "r");
    if (!fp)
    {
        perror("Error opening file for reading");
        return;
    }

    TODO todo;
    char line[MAX_CHAR];
    printf("Enter TODO name to search: ");
    char searchName[NAME];
    fgets(searchName, sizeof(searchName), stdin);
    searchName[strcspn(searchName, "\n")] = '\0'; // Remove trailing newline

    printf("\n--- Matching TODOs ---\n");
    int found = 0;
    while (fgets(line, sizeof(line), fp))
    {
        // Parse the line into the TODO structure
        sscanf(line, "%d|%[^|]|%[^|]|%[^\n]", &todo.num, todo.name, todo.content, todo.date);
        if (strcmp(todo.name, searchName) == 0)
        {
            found = 1;
            printf("TODO #%d\n", todo.num);
            printf("Name: %s\n", todo.name);
            printf("Content: %s\n", todo.content);
            printf("Date: %s\n", todo.date);
            printf("---------------------\n");
        }
    }

    if (!found)
        printf("No TODOs found with the name '%s'.\n", searchName);

    fclose(fp);
}
