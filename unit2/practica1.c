#include <stdio.h>

int main()
{
    int i, p, sum1 = 0, sum2 = 0;

    for (i = 1; i <= 5; i++)
    {

        printf("insert the value: ");
        scanf("%d", &p);

        if (i % 2 != 0)
        {
            sum1 += p;
        }
        else
        {
            sum2 += p;
        }
    }
    printf("%d , %d", sum1, sum2);
    return 0;
}