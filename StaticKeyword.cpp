/*
Autor: WalberMota
Data da Criação: 18/05/2023
Objetivos: uso da palavra chave "static" 
Linguagem C++
 */

#include <iostream>

int ContadorChamadas()
{
	/*/Variavel estática: Significa que após a saída da função o valor desta variável 
	não será perdido. "Static" indica que este valor seja mantido mesmo após a função
	ser encerrada*/

	static int NumChamadasDaFuncao = 0;
	NumChamadasDaFuncao++;
    std::cout<<NumChamadasDaFuncao<<"\t";
	return NumChamadasDaFuncao;
}

int main()
{
	for (int i = 0; i < 5; i++)
	{
		std::cout << ContadorChamadas() << std::endl;
        
	}

	return 0;
}