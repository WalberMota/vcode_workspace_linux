/*
- O programa localiza arquivos utilizando o comando locate do CLI do Linux
- Procura todos os arquivos que possuam a palavra digitada ou part dela
- o usuário caso saiba o tipo de arquivo que procura pode inserir a extensão

Programa em construção : Falta controle de excessões.
*/

#include<iostream>
#include <string>

char *c;

int main() 
{
	std::string nomeprog, var1,tipo;
	char resp;

	std::cout<<"localizador de Arquivos;\n";
	std::cout<< "\nDigite a nome do programa ou parte do nome  do programa: ";
	getline(std::cin,nomeprog);
    //std::cin.ignore();
	std::cout<< "\nVocê sabe qual o tipo do arquivo de procura (a extensão)?(S/N) ";
	std::cin >>resp;
	if (resp=='s'||resp=='S')
	{
		std::cout<< "\nDigite a extensão do arquivo(p.ex: pdf) : ";
		std::cin.ignore();
		getline(std::cin,tipo);	
		std::cout << "\n\n";
		var1 = "locate -i "+ nomeprog + " |grep  "+ tipo;
		const char *c = var1.c_str();
		system(c);
	}
	else
	{
		//std::cout<< "\nDigite a extensão do arquivo sem ponto(p.ex: pdf) : ";
		//getline(std::cin,tipo);	
		std::cout << "\n\n";
		var1 = "locate -i "+ nomeprog;
		const char *c = var1.c_str();
		system(c);
	}
	std::cout << "\nListagem terminada : "<<c<<'\n';
	std::cout << "Fim do processamento!\n" << '\n';

	return 0;
}
