/*
Autor: WalberMota
Data da Criação: 23/05/2023
Version 01.00 
locale=en_US.UTF-8,Utf16=on,HugeFiles=on,64 bits,4 CPUs Intel(R) Core(TM)
i5-5200U CPU @ 2.20GHz (306D4)
Objetivos: Estudo sobre ponteiro - C como programam - Deitel - Cap 7.
Linguagem c/C++
 */



#include <iostream>

int main()
{
	int y=5;
	int *yPtr;

	yPtr=&y;

	std::cout <<"Fazendo yPtr=&y, o ponteiro yPtr recebe o endereço de y\n"; 
	std::cout<<"yPtr= "<<yPtr;

	std::cout<<"\n\nImprimindo &y(endereço na memória) e y(o valor em y)";
	std::cout <<"\n&y=   "<<&y<<" (endereço de y)";
	std::cout <<"\ny=    "<<y<<" (valor que foi armazenado no endereço de y)";

	std::cout <<"\n\nImprimir *yPtr mostra o valor que está no endereço APONTADO por yPtr), aqui o * (um operador unário) é chamado de operador de indireção ou de desreferenciação";
	std::cout<<"\n*yPtr=  "<<*yPtr;

	return 0;
}
