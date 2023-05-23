#include <stdio.h>
//Factorial using recursion
int main()
{
    int a=3,fact;
    fact = fun(a);
    printf("The factorail of %d is %d ",a,fact);
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
