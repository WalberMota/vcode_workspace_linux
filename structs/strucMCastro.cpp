#include <iostream>
//using namespace std;

struct Pessoa
{
private:
	int idade_root;

public:
	Pessoa(int valor_idade);

	void setIdade(int valor_idade)
	{
		this->idade_root = valor_idade;
	}

	int getIdade()
	{
		return idade_root;
	}
};

Pessoa::Pessoa(int idade)
{
	this->idade_root = idade;
}

int main(int argc, char *argv[])
{
	int valor_idade=20;
	Pessoa p(valor_idade);
	
	std::cout << p.getIdade() << '\n';
	return 0;
}
