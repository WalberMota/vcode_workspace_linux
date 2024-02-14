#include <iostream>
#include <cstring>

using namespace std;

typedef struct pessoa //define t_pessoa como um alias para a struct pessoa.
{
	char nome[26]; //25 + o caracter de fim de string(including NUL byte)
	int idade;
	long int CPF;

} t_pessoa;

int main(int argc, char *argv[])
{
	//t_pessoa pessoas[100];
	t_pessoa p;

	//p = &pessoas[0];

	/* A função strcpy recebe duas strings e copia a segunda (inclusive o byte nulo final) para o espaço ocupado pela primeira. O conteúdo original da primeira string é perdido. */
	strcpy(p.nome,"antonio cristovao colombo");
	p.idade=30;
	p.CPF=15246255258;

	std::cout << "nome: " << p.nome << '\n';
	std::cout << "idade: " << p.idade	 << '\n';
	std::cout << "CPF: " << p.CPF << '\n';

}
