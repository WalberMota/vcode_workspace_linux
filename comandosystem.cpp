#include<iostream>
#include <stdio.h>
#include <stdlib.h>
//#include <locale.h>

int main() 
{
	//setlocale (LC_ALL,"portuguese");
	std::cout<<"escolha o programa para abrir:\n";
	std::cout<< "1 - Editor de texto.\n";
	std::cout<< "2 - Editor de texto.\n";
	std::cout<< "3 - Editor de texto.\n";
	std::cout<< "4 - Editor de texto.\n";
	std::cout<< "5 - Editor de texto.\n";
	std::cout<< "6 - Editor de texto.\n";
	std::cout << std::endl;
	printf("Iniciando seu editor de texto!\n" );
	system ("nano");
	printf( "Fim do processamento!\n" );
	return 0;
}
