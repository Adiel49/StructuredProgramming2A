#include <stdio.h>
#include <stdlib.h> // atoi, atof//
#include <string.h> // strcpy //

int my_int = 0;           //%i o %d
float my_float = 3.14;    // %f
char my_char = 'c';       // %c
char my_str[10] = "Hola"; // %s

float second_float = 0.0;
// pointer //
int *my_ptr_int = &my_int; // %p
//float* my_ptr_float = &second_float;

int main(int argc, char **argv)
{
    //Pegando el argv1 a la var string
    strcpy(my_str, argv[1]);
    // Convertir string a entero
    int base = atoi(my_str);
    //printf("num %i", num*2);
    strcpy(my_str, argv[2]);
    int altura = atoi(my_str);

    printf("my_int: %i my_float: %f, my_char: %c, my_str: %s, my_ptr_int: %p \n", my_int, my_float, my_char, my_str, my_ptr_int);
    printf("argc: %i \nelement 1: %d \nelement 2: %s \nchar: %c \n ", argc, base * altura, argv[2], 'L');

    return 0;
}