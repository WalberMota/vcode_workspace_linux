#include <iostream>
#include <cstring>

using namespace std;

typedef struct pessoa //define t_pessoa como um alias para a struct pessoa.
{
	char nome[1];
	int idade;
	int CPF;

} t_pessoa;

int main(int argc, char *argv[])
{
	//t_pessoa pessoas[100];
	t_pessoa p;

	//p = &pessoas[0];

	strcpy(p.nome,"antonio");
	p.idade=30;

	std::cout << "nome: " << p.nome << '\n';
	std::cout << "idade: " << p.idade	 << '\n';

}
