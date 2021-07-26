/* Using a nested For and For, your task will be printing the days corresponding to each 
month (Consider that not all months have 31 days */
#include <stdio.h>
int calendar(int days);
int main()
{
    int d_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    char *name_month[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    printf("-----Calendar----- \n");
    for (int i = 0; i < 12; i++)
    {
        printf("%s \n", name_month[i]);
        calendar(d_month[i]);
        printf("\n");
    }

    return 0;
}
int calendar(int days)
{
    int a = 1, b = 7;
    for (int i = 0; i < 5; i++)
    {
        for (int j = a; j <= b; j++)
        {
            if (j > days)
            {
                break;
            }
            if (j < 10)
            {
                printf("%d   ", j);
            }
            else
            {
                printf("%d  ", j);
            }
        }
        printf("\n");
        a += 7;
        b += 7;
    }
    printf("\n");
}