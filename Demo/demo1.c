#include "demo.h"
#include <stdio.h>


struct student
{
    char name[20];
    int rollNumber;
    char branch[10];
}s;

void enterDetails()
{
    FILE *fp;
    fp = fopen("C:\\Users\\91702\\Desktop\\Student.txt","a");

    printf("Enter the name and roll number and branch of student: ");
    scanf("%s %d %s",s.name,&s.rollNumber,s.branch);
    fprintf(fp,"%s %d %s\n",s.name,s.rollNumber,s.branch);
    fclose(fp);

}

void displayDetails()
{
    FILE *fp;
    fp = fopen("C:\\Users\\91702\\Desktop\\Student.txt","r");
    while( fscanf(fp, "%s %d %s",s.name,&s.rollNumber,s.branch) != EOF )
    {

        printf("\nName = %s\n",s.name);
        printf("Roll Number = %d\n",s.rollNumber);
        printf("Branch = %s\n",s.branch);
        fclose(fp);
    }

}

void savemaxLimit(int a)
{
    FILE *ff;
    ff = fopen("C:\\Users\\91702\\Desktop\\File_new.txt","w");
    fprintf(ff, "%d", a);
    fclose(ff);
}

int displayMaxLimit()
{
    int a;
    FILE *ff = fopen("C:\\Users\\91702\\Desktop\\File_new.txt", "r");
    fscanf(ff, "%d", &a);
    fclose(ff);
    return a;
}
