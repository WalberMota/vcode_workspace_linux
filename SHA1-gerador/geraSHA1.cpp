/*
Programa:geraSHA1.cpp
Escrito por: Walber S Mota
Linguagem: C++
Data da Criação: 17:53h-05 Outubro 2023
Version 01.00 
locale=en_US.UTF-8,Utf16=on,HugeFiles=on,64 bits,4 CPUs Intel(R) Core(TM)
i5-5200U CPU @ 2.20GHz (306D4)
Propósito:  Calcula o valor SHA1 de um texto.

*/


#include <iostream>
#include "sha1.h"
#include <string>


using namespace std;

string texto;


int main(int argc, char *argv[])
{
	cout<<"Digite o texto para gerar SHA1: ";
	getline(cin,texto);

    cout << "sha1(texto):" << sha1(texto) << endl;
    return 0;
}
