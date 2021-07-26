/* Design a program that gets all the numbers divisible by 3 and 5 */
#include <stdio.h>
void ndb(int n);
int main()
{
    int n1 = 3, n2 = 5;
    ndb(n1);
    printf("\n");
    ndb(n2);
    return 0;
}

void ndb(int n)
{
    printf("Numbers divisibles by %d between 1 to 100 \n", n);
    for (int i = 1; i <= 100; i++)
    {
        if (i % n == 0)
            printf("%d ", i);
    }
    printf("\n");
}
