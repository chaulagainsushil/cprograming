#include <stdio.h>
int main()
{
    int i, num, result;
    printf("enter a number :\n");
    scanf("%d", &num);
    for (i = 1; i <= 50; i++)
    {
        result = num * i;
        printf("%d*  %d =%d\n", num, i, result);
    }
    return 0;
}