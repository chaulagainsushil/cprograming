#include <stdio.h>
int main()
{
    double percentage;
    printf("Enter the percentage: ");
    scanf("%lf", &percentage);

    if (percentage >= 0 && percentage < 30)
    {
        printf("Fail\n");
    }
    else if (percentage >= 30 && percentage < 40)
    {
        printf("Third Division\n");
    }
    else if (percentage >= 40 && percentage < 60)
    {
        printf("Second Division\n");
    }
    else if (percentage >= 60 && percentage <= 100)
    {
        printf("First Division\n");
    }
    else
    {
        printf("invalid percentage");
    }

    return 0;
}