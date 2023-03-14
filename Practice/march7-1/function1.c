//all the function are parallel, one function can not be "
// "in other function
//the name of the function must be unique
//type identifier(type parameter,..., type parameter){body}
//the defination of the function can be only once, but the "
//"declaration can be many times

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    int minutes;
    char s;

    printf("How many minutes left ? ");
    scanf("%d", &minutes);

    s = minutes > 1 ? 's' : ' ';    // Conditional Expression

    printf("%d minute%c left\n", minutes, s);

    return 0;
}
