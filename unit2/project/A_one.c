/* Design a program that receives a list of numbers using argv argument and print 
the average value in the console.
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    float m = (argc - 1), n = 0;
    for (int i = 1; i <= m; i++)
    {
        n += atoi(argv[i]);
    }
    n /= m;
    printf("average value: %.2f \n", n);

    return 0;
}