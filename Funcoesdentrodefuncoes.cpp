/*
Autor: Marcos Pacheco ::::: Aluno: Walber Mota
Data da Criação: 13/05/2023
Objetivos: Aorender funções que chamam funções
Linguagem: C/C++
*/

#include <iostream>

//protótipos das funções
void ExibirMenu();
int RetornarEscolha();
void ProcessarEscolha(int TipoEscolha);


int main()//entrada do programa bem enxuta kkkkkkkkkkkk
{
	//Exibe o menu opções chamando a função Exibir Menu
	ExibirMenu();
	return 0;
}

/*Área de implementação das Funções.
ATENÇÃO:as variáveis nas funções são destruidas quando a função
deixar de ser usada e economiza memória.
*/

//é void pois somente implementa o menu na tela
void ExibirMenu()
{

	do // as instruções abaixo serão executadas pelo menos uma vez!
	{
		std::cout << "\n\n****Tickets Cinema****" << std::endl;
		std::cout << "\n1 - Para Meia Entrada\n";
		std::cout << "\n2 - Para Inteira\n";
		std::cout << "\n3 - Sair";
		//Aqui a função chama a função RetornarEscolha
				
	} while (RetornarEscolha() != 3);//menu fica me loop até que o usuário escolha 3
}

int RetornarEscolha()//função que captura a escolha do usuário
{
	int escolha = 0;
	std::cout << "\nEscolha sua opção: ";
	std::cin >> escolha;
	//chama a função ProcessarEscolha
	ProcessarEscolha(escolha);
	return escolha;
}

void ProcessarEscolha(int TipoEscolha)
{
	switch (TipoEscolha)
	{
	case 1: std::cout << "\n=> Ticket Meia Entrada Comprado\n";
		break;
	case 2: std::cout << "\n=> Ticket Inteira Comprado\n";
		break;
	case 3: std::cout << "\n....Saindo do Menu de Tickets...\n";
		break;
	default: std::cout << "\nOpção Inválida!!!\n";
	}
	
}