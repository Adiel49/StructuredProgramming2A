/* Find the following succession
[2,3,4,5,3,4,5,6,4,5,6,7,5,6,7,8]
*/
#include <stdio.h>
int main()
{
    int a = 2;
    for (int i = 0; i < 4; i++)
    {
        for (int j = a; j <= (a + 3); j++)
        {
            printf("%d ", j);
        }
        a += 1;
    }

    printf("\n");
    return 0;
}