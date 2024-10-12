#include <stdio.h>

int job()
{
    struct employee
    {
        int eid;
        char ename[20];
        int eexp;
    };
    struct employee e;
    printf("Enter employ details :");
    scanf("%s%d%d", e.ename, &e.eid, &e.eexp);
    printf("your details: name --> %s \teid --> %d \texp -->%d years\n", e.ename, e.eid, e.eexp);
}




int school()
{
    struct student
    {
        char sname[20];
        int sid;
        int std;
    };
    struct student s[10];
    int i, n;
    printf("\nEnter the no.of students : ");
    scanf("%d", &n);
    printf("Enter the details of the student |\n");
    for (i = 0; i < n; i++)
    {
        printf("\nEnter student %d records : ", i + 1);
        scanf("%s%d%d", s[i].sname, &s[i].sid, &s[i].std);
    }
    for (i = 0; i < n; i++)
    {
        printf("Student details: name --> %s \tid --> %d \tstd -->%d years\n", s[i].sname, s[i].sid, s[i].std);
    }
}





int college()
{
    struct college
    {
        char clg_name[20];
        int clg_code;
        char dept[20];
    };

    struct college c[10];
    int i, n;
    printf("Enter clg details for admission | \n");
    printf("Enter no.og details : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter clg %d details :", i + 1);
        scanf("%s%d%s", c[i].clg_name, &c[i].clg_code, c[i].dept);
    }
    for (i = 0; i < n; i++)
    {
        printf("\nClg details | \nclg name : %s\nclg code : %d\ndept : %s\n", c[i].clg_name, c[i].clg_code, c[i].dept);
    }
}



int main()
{
    // job();
    // school();
    college();
}