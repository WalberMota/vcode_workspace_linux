/*
Programa:getline.cpp
Escrito por: Walber Mota
Linguagem: C++
Data da Criação: 18 Junho 2023
Version 01.00 
locale=en_US.UTF-8,Utf16=on,HugeFiles=on,64 bits,4 CPUs Intel(R) Core(TM)
i5-5200U CPU @ 2.20GHz (306D4)
Propósito:  Diferentes formas de obter entradas complexas e com limites definido pelo teclado.
*/
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
