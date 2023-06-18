#include<iostream>
#include<string>

int main()
{

	std::string nome;
	
	system("clear");
	std::cout << "Nome completo: ";
	getline(std::cin,nome);

	std::cout <<"\nOlá, "<<nome<<"\n";

	
	
	//definido o numero de caracteres de entrada
	char endereco[80];
	
	std::cout << "\nInforme o seu endereço: ";
	std::cin.getline(endereco,sizeof(endereco));
	
	std::cout <<"\nSeu endereço é: "<< endereco <<"\n";

	return 0;
}
