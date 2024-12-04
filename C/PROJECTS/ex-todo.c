#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_CHAR 500
#define NAME 40
#define DATE 30
#define COMPLETED 4

typedef struct{
    int id;
    char name[NAME];
    char date[DATE];
    char cmplete[COMPLETED];
}TODO;


void createTodo(const char *filename);
void deleteTodo();
void modifyTodo(const char *filename);


int main(){
    const char *filenmae = "todolist.txt";
    
    printf("=====  TODO APP ======\n");
    printf("c. Create Todo\n");
    printf("d. Delete Todo\n");
    printf("m. Modify Todo\n");
    printf("e. Exit...\n");
    char choice;
    printf("Enter your choice : ");
    scanf("%c",&choice);
    switch(choice){
        case 'c':
            createTodo(filenmae);
            break;
        case 'd':
            deleteTodo();
            break;
        case 'm':
            modifyTodo(filenmae);
            break;
        case 'e':
            printf("GoodBye..!\n");
            break;
    }
}


void createTodo(const char *filename){
    FILE *fp = fopen(filename,"a+");
    if(!fp){
        perror("Error Occured ...!");
        return;
    }
    TODO todo;
    int id = 1;
    char todoname[NAME],content[MAX_CHAR],date[DATE];
    printf("Enter the name of TODO : ");
    
    char line[MAX_CHAR];
    while (1)
    {
        fgets(line, sizeof(line), stdin);
        if (strncmp(line, "Q", 1) == 0)
            break;
        strcat(todo.name, line);
    }
    
    
    time_t currentTime;
    time(&currentTime);
    struct tm *localTime = localtime(&currentTime);
    // char datetime[20];
    sprintf(todo.date,"%02d-%02d-%04d\n",localTime->tm_mday,localTime->tm_mon+1,localTime->tm_year+1900);

    
    todo.id = id;
    printf("Completed or not [yes/no]:");
    scanf("%s",todo.cmplete);
    
    fprintf(fp,"ID :%d TODO NAME :%s CREATED AT :%s  COMPLETED :%s\t",todo.id,todo.name,todo.date,todo.cmplete);
    // fwrite(&todo,sizeof(TODO),1,fp);
    fclose(fp);
    printf("TODO added successfully ...!");

}

void deleteTodo(){

}
void modifyTodo(const char *filename){
     return;
}
