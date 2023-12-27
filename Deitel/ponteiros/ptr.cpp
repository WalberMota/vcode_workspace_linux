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
