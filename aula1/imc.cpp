#include <iostream>

int main(int argc, char* argv[])
{
	float peso = 0, altura = 0, IMC = 0;
    
    if (argc == 3)
    {
        peso   = std::atof(argv[1]);
        altura = std::atof(argv[2]);
    }
    else 
    {
	    std::cout << "Digite peso e altura\n";
	    std::cin >> peso >> altura;
    }
	
    IMC = peso / (altura * altura);
	
    std::cout << "IMC: " << IMC << ". ";

	if      (IMC < 18.5)    std::cout << "Abaixo do peso\n";
	else if (IMC < 24.9)    std::cout << "Peso normal\n";
	else if (IMC < 29.9)    std::cout << "Sobrepeso\n";
	else if (IMC < 39.9)    std::cout << "Obesidade\n";
	else                    std::cout << "Obesidade grave\n";

    return 0;
}
