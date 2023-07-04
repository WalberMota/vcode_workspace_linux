/*
Autor: WalberMota
Data da Criação: 04/07/2023
Version 01.00 
locale=en_US.UTF-8,Utf16=on,HugeFiles=on,64 bits,4 CPUs Intel(R) Core(TM) i5-5200U CPU @ 2.20GHz (306D4)
Objetivos: uso de while e do while para validar entradas do usuário.
Linguagem C++
 */

#include <iostream>
#include <string>
//#include <iomanip>


int main()
{
	//setlocale(LC_ALL, "portuguese");
	double MaiorNumero{ 0 }, Numero01{ 0 }, Numero02{ 0 }, Maior{ 0 };
	int Resposta;
	bool Verificacao{ true };

	//Enquanto "Verificacao" for Verdadeiro(true) continuar o loop while
	while (Verificacao)
	{
		system("clear"); // Limpa Tela
		std::cout << "\nDigite Primeiro Número: ";
		std::cin >> Numero01;
		std::cout << "\nDigite Segundo Número: ";
		std::cin >> Numero02;
		//Operador Ternário se Numero01 for Maior que Numero02 Maior recebe valor Numero01 senão Maior recebe Numero02
		Maior = (Numero01 > Numero02) ? Numero01 : Numero02;
		std::cout << "\nO Maior Número é: " << Maior;

		std::cout << "\nDeseja fazer outra verificação? (Digite 0 para Não e 1 para Sim) ";
		std::cin >> Resposta;

		//Se a resposta for 1 ou 0 entra neste if pois é válida
		if ((Resposta == 1) || (Resposta == 0))
		{
			Verificacao = (Resposta == 1) ? true : false;
		}
		//senão ou seja e a resposta for diferente de 0 e 1 começa a verificação de entrada válida
		else
		{
			do  //loop
			{
				system("clear");
				std::cout << "\nResposta Inválida! (Digite 0 para Não e 1 para Sim) ";
				std::cin >> Resposta;

			//ficará em loop enquanto a resposta for diferente de 0 e de 1
			} while ((Resposta != 1) && (Resposta != 0));

			//Ao sair de Do While significa que a resposta voltou a ser válida e foi 0 ou 1
			//Logo é preciso saber que o usuário quer continuar ou não e assim novamente atribuimos
			//O valor true se o usuário digitar 1 e false se usuário digitar 0
			Verificacao = (Resposta == 1) ? true : false;
		}

	}
	//Se Outra for false, indica que usuário digitou 0 indicando que não quer continuar
	//logo loop while será encerrado e programa encerrado
	std::cout << "\nPrograma Encerrado...\n";
	return(0);
}
