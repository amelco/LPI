#include <iostream>
#include "retangulo.h"

int main(int argc, char *argv[])
{
    Retangulo r1;
    
    r1.altura = 10;
    r1.largura = 5;
    
    std::cout << r1.area() << std::endl;
    std::cout << r1.perimetro() << std::endl;

    return 0;
}
