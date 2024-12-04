#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define NAME 30
#define AUTHOR 30

typedef struct
{
    int id;
    char name[NAME];
    char author[AUTHOR];
} LIBRARY;

void addBook(const char *filename);
void searchBook(const char *filename);
void displayBooks(const char *filename);
void borrowBook(const char *filename);

int main()
{
    const char *filename = "books.txt";
   
    int choice;
    while (1)
    {
        printf("\n=======LIBRARY MANAGEMENT==========\n");
        printf("1. Add a book\n");
        printf("2. Search a book\n");
        printf("3. Display all book\n");
        printf("4. Borrow a book\n");
        printf("5. Return a book\n");
        printf("6. Delete a book\n");
        printf("7. Exit\n");

        printf("Enter a choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            addBook(filename);
            break;
        case 2:
            searchBook(filename);
            break;
        case 3:
            displayBooks(filename);
            break;
        case 4:
            borrowBook(filename);
            break;
        case 5:
            addBook(filename);
            printf("Book Returned succesfully...\n");
            break;
        case 6:
            borrowBook(filename);
            printf("Book Deleted succesfully...\n");
            break;
        case 7:
            printf("Exiting ...\n");            
            return 0;
        default:
            printf("Invalid choice ..");
            break;
        }
    }
    return 0;
}

void addBook(const char *filename)
{
    srand(time(0));
    // int randomNum =rand();

    int lower=0;int upper=99;
    int randomNum = (rand() % (upper-lower +1)) +lower;
    

    int n;
    char cq;
    LIBRARY lib;
    FILE *fp = fopen(filename, "a+");

    printf("How many books will add : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter the book name :");
        scanf("%s", lib.name);
        printf("Enter  the author name :");
        scanf("%s", lib.author);
        fprintf(fp, "#ID:%d  #Name : %s \t#Author :%s\n", randomNum, lib.name, lib.author);
        randomNum++;
    }

    fclose(fp);
    printf("Books Added Successfully...\n");
}


void searchBook(const char *filename){
    char searchname[NAME],line[100];
    FILE *fp = fopen(filename,"r+");
    printf("Enter the book name to search : ");
    scanf("%s",searchname);
    while (fscanf(fp,"%s",line)!=EOF){
        if(strcmp(line,searchname)==0){
            printf("Book founded...!\n");

        }
    }
}

void displayBooks(const char *filename){

    FILE *fp = fopen(filename, "r");
    if (!fp)
    {
        perror("Error opening file");
        return;
    }

    int id;
    char name[NAME], author[AUTHOR];

    // Print table header for better visualization
    printf("===============      List of Books       =============\n");
    printf("| ID   | Name                 | Author               |\n");
    printf("======================================================\n");

    // Read each line and display it
    while (fscanf(fp, "#ID:%d  #Name : %s \t#Author :%s\n", &id, name, author) == 3)
    {
        printf("| %-4d | %-20s | %-20s |\n", id, name, author);
    }

    fclose(fp);
}


void borrowBook(const char *filename){
    FILE *fp = fopen(filename,"r");
    if(!fp){
        perror("Error Occured...");
        return;
    }
    FILE *temp = fopen("temp.txt","w");
    if(!temp){
        perror("Error Occured in temp...");
        fclose(fp);
        return;
    }
    int line_to_remove;
    printf("Enter the line of book that you will borrow : ");
    scanf("%d",&line_to_remove);

    // char buffer[1024];char name[NAME],boorow[NAME];
    // int id1,id;

    //  while (fscanf(fp, "#ID:%d  #Name : %s \t#Author :%s\n", &id,name) == 2){
    //     if(strcmp(boorow,name)==0){
    //             id1=id;
    //     }       
    // }
    char buffer[1024];int c_line=1;

    while(fgets(buffer,sizeof(buffer),fp)){
        if(c_line != line_to_remove){
            fputs(buffer,temp);
        }
        c_line++;
    }
    fclose(fp);
    fclose(temp);
if(remove(filename) == 0 && rename("temp.txt",filename) == 0){
    printf("Book in line - %d borrowed successfully...\n",line_to_remove);
}else{
    perror("error replacing the file..");
}

}
