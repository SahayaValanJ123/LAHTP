#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NAME 50

typedef struct{
    int id;
    char name[NAME];
    int rollno;
    int subjs;
    float total;
    float percentage;
    char grade;
} GRADE;


void studentDetails(const char *filename);
void markDetails(const char *filename);
void checkGrade(const char *filename);
char Grade(float percentage);

int main(){
    int choice ;
    const char *filename = "grade.txt";
    while(1){
  
    printf("\n===============GRADE SYSTEM===============\n");
    printf("1. Student Details \n");
    printf("2. Mark Details \n");
    printf("3. Check Grade \n");
    printf("4. Exit \n");

    printf("Enter your choice : ");
    scanf("%d",&choice);
    switch(choice){
        case 1 :
            studentDetails(filename);
            break;
        case 2:
            markDetails(filename);
            break;
        case 3:
            checkGrade(filename);
            break;
        case 4:
            printf("Exiting ...\n");
            return 0;
        default:
            printf("Invalid choice ..try again..\n");
            break;
    }

    }
}

void studentDetails(const char *filename){
    FILE *fp = fopen(filename,"a+");
    GRADE grade;
    float total=0,percentage;char grade_c;
    float mark; 
    printf("Enter student name  : ");
    scanf("%s",grade.name);
    printf("Enter student id  : ");
    scanf("%d",&grade.id);
    printf("Enter student roll number  : ");
    scanf("%d",&grade.rollno);
    printf("Enter number of subjects  : ");
    scanf("%d",&grade.subjs);
    int num = grade.subjs;
    for(int i =0;i<num;i++){
        printf("Enter subject [%d] mark type 00 to exit : ",i+1);
        scanf("%f",&mark);
        if(mark == 00){
            break;
        }
        total += mark;
    }
    grade.total = total;
    grade.percentage = total/num;

    
    grade.grade=Grade(grade.percentage);


    fprintf(fp,"#ID : %d\t#NAME : %s\t#ROLL.NO : %d\tSUBJECTS : %d\t#TOTAL : %0.2f\t#PERCENTAGE : %0.2f\tGRADE : %c\n",grade.id,grade.name,grade.rollno,grade.subjs,grade.total,grade.percentage,grade.grade);
    fclose(fp);
    printf("Details Updated\n");

}

char Grade(float percentage){
    if(percentage >= 90) return 'A';
    if(percentage >= 80) return 'B';
    if(percentage >= 70) return 'C';
    if(percentage >= 60) return 'D';
    if(percentage >= 50) return 'E';
    return 'F';
}


void markDetails(const char *filename){
    return;
    
}



void checkGrade(const char *filename){
    GRADE grade;
    FILE *fp = fopen(filename,"r");
    if(!fp){
        perror("Error occured..");
        return;
    }
 
    char searchname[NAME];
    int found=0;
    
    printf("Enter your name : ");
    scanf("%s",searchname);
    printf("+-------+--------------------+-------+ GRADE SYASTEM +-------+-------------+--------+\n");
    printf("|  ID   |     NAME           |  ROLLNO  | SUBJECTS  | TOTAL  | PERCENTAGE  | GRADE  | \n");
    printf("+-------+--------------------+----------+-----------+--------+-------------+--------+\n");

 
   
    while(fscanf(fp,"#ID : %d\t#NAME : %s\t#ROLL.NO : %d\tSUBJECTS : %d\t#TOTAL : %f\t#PERCENTAGE : %f\tGRADE : %c\n",&grade.id,grade.name,&grade.rollno,&grade.subjs,&grade.total,&grade.percentage,&grade.grade) ==7){
     
        if(strcmp(searchname,grade.name) ==0 ){
           printf("|  %-4d | %-18s | %-8d | %-9d | %-6.2f | %-11.2f | %-6c |\n",grade.id,grade.name,grade.rollno,grade.subjs,grade.total,grade.percentage,grade.grade);
           printf("+-------+--------------------+----------+-----------+--------+-------------+--------+\n");
            found=1;
        }
    }
    fclose(fp);
}
//"|  %-4d |      %-15s         |  %-4d    |   %-4d    |  %-4f  |   %-4f      |  %-1c  |\n"