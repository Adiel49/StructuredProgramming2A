#include <stdio.h>
#include <stdlib.h> // atoi, atof
#include <stdbool.h>

#define TAN 10
int lista[TAN] = {105, 20, 21, 40, 33, 60, 70, 50, 93, 100};
int idx = 0;
int main(int argc, char **argv)
{
    int index2 = 0;
    for (int index = 0; index <= TAN; index++, index2++)
    {
        printf("index: %d, values: %d \n\a", index, lista[index]);
        //printf("index: %d, index2: %d\n\a", index, index2);
    }

    while (lista[idx] != 50)
    {
        idx++;
    }
    printf("idx found: %d\n", idx);
    while (true)
    {
        if (lista[idx] == 50)
        {
            break;
        }
        idx++;
    }
    printf("idx found: %d\n", idx);

    int idx_for;
    for (int idx_for = 0; lista[idx_for] != 50; idx_for++)
    {
    }
    printf("idx_for found: %d\n", idx);

    return 0;
}