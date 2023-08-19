#include <stdio.h>
int main()
{
    float a, b, result;
    char operator;
    printf("enter two number:");
    scanf("%f %f", &a, &b);
    printf("enter a operator(+,-,*,/)");
    scanf("%c", &operator);
    if (operator== '+')
    {
        result = a + b;
    }
    else if (operator== '-')
    {
        result = a - b;
    }
    else if (operator== '/')
    {
        result = a / b;
    }
    else if (operator== '*')
    {
        result = a * b;
    }
    printf() return 0;
}