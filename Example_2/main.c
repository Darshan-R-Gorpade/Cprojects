#include <stdio.h>
/*Any integer is input through the keyboard. Write a program to find
out whether it is an odd number or even number*/
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%f",&num);
    if(num % 2 == 0)
    {
        printf("Even\n");
    }else
    {
        printf("Odd\n");
    }
    return 0;
}
