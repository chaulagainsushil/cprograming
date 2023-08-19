#include <stdio.h>
int main()
{
    int result, i, j;
    for (int i = 1; i <= 10; i++)

    {

        printf("this is a multiplication %d\n", i);

        for (j = 1; j <= 10; j++)

        {
            if (j == 7)
            {
                printf("%d*%d=??????\n", i, j);
            }
            else
            {

                result = i * j;

                printf("%d*%d=%d\n ", i, j, result);
            }
        }
    }
    return 0;
}
