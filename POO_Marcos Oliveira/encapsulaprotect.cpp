/*
 Estudo de POO_prof. Marcos Oliveira
 Encapsulamento utilizando herança múltipla:
 A classe Dados herda funções-membros do classe pai [Habilidades]
 e da classe avô [Pessoa].
 */

#include <iostream>

//Cria a classe base [Pessoa]
class Pessoa{
 
	private:
	 int idade{27};

	protected:
	 double altura{1.71};

	public:
    void nome()
    {
      std::cout << "Codesildo Cemazmaiz" << '\n';
    }

	double display_altura()
	{
		return altura;
	}
	int display_idade()
	{
		return idade;
	}
};

//Cria a classe base [Habilidade] com herança da classe [Pessoa]
class Habilidades : public Pessoa
{
	public:
    void idioma()
	{
      std::cout << "Programar em C++" << '\n';
    }
};

class Dados : public Habilidades
{};

//***********enter-point do programa **************
int main( int argc , char **argv ){
	Dados dados;

	std::cout << "O nome dele é: ";
	dados.nome(); //função-membro 'nome' chamada por herança da classe pessoa.
  
	std::cout << "Habilidade dele é: ";
	dados.idioma(); //função-membro 'idioma' chamada por herança da classe habilidade.

std::cout << "A idade dele é: " << dados.display_idade() <<'\n';
	std::cout << "A altura dele é: " << dados.display_altura() <<'\n';

}
