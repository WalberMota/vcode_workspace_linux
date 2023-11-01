/*
Programa:
Escrito por: Walber Mota
Linguagem: C++
Data da Criação: 11/07/2023
Version 01.10 - mod.31/10/2023
locale=en_US.UTF-8,Utf16=on,HugeFiles=on,64 bits,4 CPUs Intel(R) Core(TM)
i5-5200U CPU @ 2.20GHz (306D4)
===========================================================================
- O programa localiza arquivos utilizando o comando locate do CLI do Linux
- Procura todos os arquivos que possuam a palavra digitada ou parte dela
- o usuário caso saiba o tipo de arquivo que procura pode inserir a extensão

Programa em construção : Falta controle de excessões.
============================================================================
*/

#include<iostream>
#include <string>

void localiza(std::string arg);
std::string nomeprog, var1,tipo;
//const char *c;

int main() 
{
	//std::string nomeprog, var1,tipo;
	char resp;
	system("clear");
	std::cout << "********    Localizador de Arquivos   ***********\n";
	std::cout << "\nDigite a nome completo ou parcial do arquivo: ";
	getline(std::cin,nomeprog);
    //std::cin.ignore();
	std::cout << "\nVocê sabe qual a extensão(o tipo) do aquivo?(S/N): ";
	std::cin >>resp;
	if (resp=='s'||resp=='S')
	{
		std::cout<< "\nDigite a extensão do arquivo(p.ex: pdf) : ";
		std::cin.ignore();
		getline(std::cin,tipo);	
		std::cout << "\n\n";
		var1 = "locate -i "+ nomeprog + " |grep  "+ tipo;
        localiza(var1);
	}
	else
	{
		std::cout << "\n\n";
		var1 = "locate -i "+ nomeprog;
        localiza(var1);
	}

	std::cout << "\n***************************"<<'\n';
	std::cout << "* Processamento concluido *"<<'\n';
	std::cout << "***************************"<<'\n';

	return 0;
}

void localiza(std::string arg)
{
    const char *c = arg.c_str();
	system(c);

}
