#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef _MSC_VER
#define SCANF_S scanf_s // Use scanf_s for MSVC
#else
#define SCANF_S scanf
#endif

#define MAX_NAME_LENGTH 50
#define MAX_PHONE_LENGTH 15
#define MAX_BUFFER_SIZE 100

typedef struct {
    char name[MAX_NAME_LENGTH];
    char phone[MAX_PHONE_LENGTH];
} Contact;

// Function prototypes
void addContact(const char *filename);
void viewContacts(const char *filename);
void searchContact(const char *filename);

int main() {
    const char *filename = "contacts.txt";
    int choice;

    do {
        printf("\n=== Contact Management System ===\n");
        printf("1. Add Contact\n");
        printf("2. View Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        SCANF_S("%d", &choice);

        switch (choice) {
            case 1:
                addContact(filename);
                break;
            case 2:
                viewContacts(filename);
                break;
            case 3:
                searchContact(filename);
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (choice != 4);

    return 0;
}






void addContact(const char *filename) {
    FILE *file = fopen(filename, "a"); // Open in append mode
    if (!file) {
        perror("Error opening file");
        return;
    }

    Contact contact;
    printf("Enter contact name: ");
    SCANF_S("%s", contact.name, sizeof(contact.name));
    printf("Enter phone number: ");
    SCANF_S("%s", contact.phone, sizeof(contact.phone));

    // Write contact to file
    fprintf(file, "%s %s\n", contact.name, contact.phone);

    fclose(file);
    printf("Contact added successfully.\n");
}





void viewContacts(const char *filename) {
    FILE *file = fopen(filename, "r"); // Open in read mode
    if (!file) {
        perror("Error opening file");
        return;
    }

    char buffer[MAX_BUFFER_SIZE];
    printf("\n=== Contact List ===\n");

    // Read each line and print
    while (fgets(buffer, sizeof(buffer), file)) {
        printf("%s", buffer);
    }

    fclose(file);
}

void searchContact(const char *filename) {
    FILE *file = fopen(filename, "r"); // Open in read mode
    if (!file) {
        perror("Error opening file");
        return;
    }

    char buffer[MAX_BUFFER_SIZE];
    char searchName[MAX_NAME_LENGTH];
    int found = 0;

    printf("Enter name to search: ");
    SCANF_S("%s", searchName, sizeof(searchName));

    printf("\n=== Search Results ===\n");
    while (fgets(buffer, sizeof(buffer), file)) {
        Contact contact;
        // Parse the line into the Contact struct using sscanf
        sscanf(buffer, "%s %s", contact.name, contact.phone);

        // Check if the name matches
        if (strcmp(contact.name, searchName) == 0) {
            printf("Name: %s, Phone: %s\n", contact.name, contact.phone);
            found = 1;
        }
    }

    if (!found) {
        printf("No contact found with name: %s\n", searchName);
    }

    fclose(file);
}
