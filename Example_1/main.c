#include <stdio.h>
//Factorial using recursion
int main()
{
    int a=3,fact;
    fact = fun(a);
    printf("Hello world of new Update_2 %d\n",a,fact);
    printf("hello\n");
    printf("The factorail of %d is %d \n",a);
    printf("Hello world in created branch\n");
    printf("Hello world in feature/newUpdate\n");
 return 0;
}

int fun(a)
{
    int fact=1;

    if(a==1)
    {
        return 1;
    }else{
       fact = a * fun(a-1);
       return fact;
    }
}
