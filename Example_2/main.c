#include <stdio.h>

int main()
{
    char name[] = "Kingsman";
    char *ptr;
    ptr = name;
    while(*ptr != '\0')
    {
        printf("%c",*ptr);
        ptr++;
    }
    return 0;
}
