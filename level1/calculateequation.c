#include <stdio.h>
#include <math.h>
int main()
{
    double x, y, result;
    printf("enter a value of x:\n");
    scanf("%lf", &x);
    printf("Enter a value of y:\n");
    scanf("%lf", &y);
    result = 5 * x * sqrt(y * y + 5);
    printf("result: %lf", result);
}
