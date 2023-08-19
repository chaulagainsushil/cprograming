#include <stdio.h>
int main()
{
    int result, i, j;
    for (int i = 1; i <= 10; i++)

    {
        if (i == 5)
        {
            continue;
        }
        printf("this is a multiplication %d\n", i);
        for (j = 1; j <= 10; j++)
        {

            result = i * j;

            printf("%d*%d=%d\n ", i, j, result);
        }
    }
    return 0;
}
