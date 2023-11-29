#include <iostream>
#include <string.h>

using namespace std;

typedef struct pessoa //define t_pessoa como um alias para a struct pessoa.
{
	char nome[100];
	int idade;
	int CPF;

} t_pessoa;

int main(int argc, char *argv[])
{
	//t_pessoa pessoas[100];
	t_pessoa p;

	//p = &pessoas[0];

	strcpy(p.nome,"antonio");
	/* pessoas[0].idade = 10;
	pessoas[1].idade = 11;
	pessoas[2].idade = 12;

	cout << p->idade << endl;
	cout << (p + 1)->idade << endl;
	cout << (p + 2)->idade << endl;
	return 0; */
}
