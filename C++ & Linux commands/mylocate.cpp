#include<iostream>
#include <string>


int main() 
{
	std::string nomeprog, var1,tipo;
	char var[30];
	std::cout<<"localizador de Arquivos;\n";
	std::cout<< "Digite a nome do programa ou parte do nome  do programa: ";
	getline(std::cin,nomeprog);
	std::cout<< "Se souber digite a extensão do arquivo sem ponto(p.ex: pdf) : ";
	getline(std::cin,tipo);	
	std::cout << "\n\n";
	var1 = "locate -i "+ nomeprog + " |grep  "+ tipo;
	const char *c = var1.c_str();

	system(c);
    
	std::cout << "\nListagem terminada : "<<c<<'\n';
	std::cout << "Fim do processamento!\n" << '\n';

	return 0;
}
