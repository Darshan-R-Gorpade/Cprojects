#ifndef DEMO_H
#define DEMO_H

#endif // DEMO_H
void enterDetails(FILE **fp);
void displayDetails(FILE **fp);
void savemaxLimit(int a);
int displayMaxLimit();

struct student
{
    char name[20];
    int rollNumber;
    char branch[10];
};
struct student s;

void enterDetails(FILE **fp)
{
//    FILE *fp;
//    fp = fopen("C:\\Users\\91702\\Desktop\\Student.txt","a");
//    printf("Enter the name and roll number and branch of student: ");
//    fflush(stdin);
//    gets(s.name);
//    fflush(stdin);
//    scanf("%d",&s.rollNumber);
//    fflush(stdin);
//    gets(s.branch);
//    fflush(stdin);
//    fprintf(*fp,"%s %d %s\n",s.name,s.rollNumber,s.branch);

    printf("Enter the name and roll number and branch of student: ");
        scanf("%s %d %s",s.name,&s.rollNumber,s.branch);
        fprintf(*fp,"%s %d %s\n",s.name,s.rollNumber,s.branch);

}

void displayDetails(FILE **fp)
{
    rewind(*fp);


    while( fscanf(*fp, "%s %d %s",s.name,&s.rollNumber,s.branch) != EOF )
        {
            printf("\nName = %s\n",s.name);
            printf("Roll Number = %d\n",s.rollNumber);
            printf("Branch = %s\n",s.branch);
        }

//    rewind(*fp);
//       char var[50];

//       while( fgets(var, 50 ,*fp) != NULL )
//       {
//           puts(var);
//       }

}

void savemaxLimit(int a)
{
    FILE *fp;
    fp = fopen("C:\\Users\\91702\\Desktop\\File_new.txt","w");
    fprintf(fp, "%d", a);
    fclose(fp);
}

int displayMaxLimit()
{
    int a;
    FILE *fp = fopen("C:\\Users\\91702\\Desktop\\File_new.txt", "r");
    fscanf(fp, "%d", &a);
    fclose(fp);
    return a;
}
