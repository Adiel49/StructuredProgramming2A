/* Design a program that receives two numbers using argv argument and print the following 
arithmetical operations. add, subtraction, multiplication, dicision */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int add, sub, mul;
    float div, one = atoi(argv[1]), two = atoi(argv[2]);
    add = one + two;
    sub = one - two;
    mul = one * two;
    div = one / two;

    printf("Add: %d \n", add);
    printf("Suntraction: %d \n", sub);
    printf("Multiplication: %d \n", mul);
    printf("Division: %.2f \n", div);

    return 0;
}