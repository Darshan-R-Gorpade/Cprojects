#include <stdio.h>
#include <demo.h>

int main()
{
    FILE *fp;
    fp = fopen("C:\\Users\\91702\\Desktop\\Student.txt","a+");
    int maxLimit=1;
    int choice;
    while(1)
    {
        printf("\n1.Enter the details of the student: ");
        printf("\n2.Display the details of the student: ");
        printf("\n3.Display the details of the student: ");
        printf("\n4.exit");

        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
        {   if(displayMaxLimit() <= 100)
            {
                savemaxLimit(++maxLimit);
                //printf("max limit is = %d",displayMaxLimit());
                enterDetails(&fp);
                printf("\nCongrats %dth student's record updated successfully..\n",displayMaxLimit()-1);
            }else
            {
                printf("\nSorry.. the limit of 100 students has reached\n");
            }
        }
            break;
        case 2: displayDetails(&fp);
            break;

        case 3:
        case 4: fclose(fp);
            exit(1);
        default: printf("Enter the vaild Input\n");
        }
    }

    return 0;
}
