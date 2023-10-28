/*
 Estudo de POO_prof. Marcos Oliveira
 Encapsulamento utilizando herança múltipla e proteção de membros:
 A classe Dados herda funções-membros da classe pai [Habilidades]
 e da classe avô [Pessoa].
 */

#include <iostream>

//Cria a classe base [Pessoa]
class Pessoa{
 
	private: //só pode ser chamada por método dentro desta classe
	 int idade{27};

	protected://pode ser chamada por esta classe ou por classes que herdaram esta
	 double altura{1.71};

	public://pode ser chamada de qualquer parte do programa.
    void nome()
    {
      std::cout << "Codesildo Cemazmaiz" << '\n';
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
	double display_altura() //esta função-membro como protected pode ser chamada aqui por heração \
	 						mas não de fora de uma classe (p.exe. da main).
	{
		return altura;
	}
};

class Dados : public Habilidades
{};

//***********enter-point do programa **************
int main( int argc , char **argv ){
	Dados dados;

	std::cout << "O nome(public herdado avô) dele é: ";
	dados.nome(); //função-membro 'nome' chamada por herança da classe pessoa.
  
	std::cout << "Habilidade(public herdado pai) dele é: ";
	dados.idioma(); //função-membro 'idioma' chamada por herança da classe habilidade.

	//chama o atributo privado(private) 'idade'
	std::cout << "A idade(private herdado avô) dele é: " << dados.display_idade() <<'\n';
	//chama o atributo protegido (protected) 'altura'
	std::cout << "A altura(protected herdado avô) dele é: " << dados.display_altura() <<'\n';

}
