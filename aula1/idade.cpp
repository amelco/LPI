#include <iostream>

int main(int argc, char* argv[])
{
	int idade = 0;
	
	std::cout << "Idade: ";
	std::cin >> idade;
	
	if (idade >= 18)
	{
		std::cout << "Maior de idade.\n";
	}
	else
	{
		std::cout << "Menor de idade.\n";
	}
}
