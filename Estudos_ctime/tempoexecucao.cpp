/*
Programa:
Escrito por: Walber Mota
Linguagem: C++
Data da Criação: 19/06/2023
Version 01.00 
locale=en_US.UTF-8,Utf16=on,HugeFiles=on,64 bits,4 CPUs Intel(R) Core(TM)
i5-5200U CPU @ 2.20GHz (306D4)
Propósito:  Estudo da biblioteca <ctime> para claculo do tempo de execução de uma instrução.
*/

#include <iostream>
#include <stdio.h>
#include <ctime>

int main()
{
	int conta;
	float resultado1;
	clock_t time_req;

	//Execução com printf *************************
	time_req = clock();
	for (conta = 0; conta < 5001; conta++)
		printf("Aprendendo C/C++\n");
	time_req = clock() - time_req;
	std::cout << "Usando printf levou " << (float)time_req/CLOCKS_PER_SEC << " segundos" << std::endl;
	resultado1=(float)time_req/CLOCKS_PER_SEC;
	
	//pausa para ver o tempo consumido *****************
    printf("Pressione qualquer tecla...\n");
	getchar(); 

	//Execução com cout ***********************
	time_req = clock();
	for (conta = 0; conta < 5001; conta++)
		std::cout<<"Aprendendo C/C++\n";
	time_req = clock() - time_req;
	std::cout << "Usando cout   : " << (float)time_req/CLOCKS_PER_SEC << " segundos" << std::endl;
	std::cout << "Usando printf : "<<resultado1  << " segundos\n";

	return 0;
}

