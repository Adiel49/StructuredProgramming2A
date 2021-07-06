#include <iostream>

std::string my_string = "Hola mundo";
int my_number = 3;
float myfloat = 3.1416;

//Declarando
void sayHello(std::string tag1);

int main()
{
    sayHello(my_string);

    return EXIT_SUCCESS;
}

//Definir
void sayHello(std::string tag1)
{
    std::cout << tag1 << std::endl;
}
