/*
Programa:datahoraatual.cpp
Escrito por: Walber Mota
Linguagem: C++
Data da Criação: 20/06/2023
Version 01.00 
locale=en_US.UTF-8,Utf16=on,HugeFiles=on,64 bits,4 CPUs Intel(R) Core(TM)
i5-5200U CPU @ 2.20GHz (306D4)
Propósito:  Exibe a data e a hora do sistema.
*/

#include<iostream>
#include<ctime>

void imprimefnc()
{
	std::cout << "DATA DE HOJE ..."<<"\n";

}

int main()
{

	imprimefnc();

//  faz a mesma coisa que os comandos abaixo
//	time_t a_time;
//	a_time = time(NULL);
//	
//	std::cout <<ctime(&a_time);
//	std::cout <<time(NULL);

	time_t a_time;

	time(&a_time);
	std::cout << asctime(localtime(&a_time));
	return 0;

}
