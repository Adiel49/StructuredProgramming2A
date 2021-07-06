#include <stdio.h>

//?Declarar y definirla
void say_hello(char message[])
{
    printf("%s\n", message);
}

//!Segundo metodo para la funciones
//!1.Declarar
void say_my_name(char message[]);

int main()
{

    say_hello("Hellos world");
    say_my_name("Adiel");
    return 0;
}
//!Segundo metodo para la funciones
//!2. Definimos

void say_my_name(char message[])
{
    printf("%s\n", message);
}