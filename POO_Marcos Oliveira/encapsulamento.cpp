/*
 Estudo de POO_prof. Marcos Oliveira
 Encapsulamento utilizando herança múltipla:
 A classe Dados herda funções-membros do classe pai [Habilidades]
 e da classe avô [Pessoa].
 */

#include <iostream>

class Pessoa{
  public:
    void nome()
    {
      std::cout << "Marcos Oliveira" << '\n';
    }
    void idade()
    {
    std::cout << "42 anos" << '\n';
    }
};
 // coloca-se 'public:' e o nome da classe de onde os membros serão herdados
 class Habilidades : public Pessoa
 {
  public:
    void idioma(){
      std::cout << "Programar em C++" << '\n';
    }
};

class Dados : public Habilidades
{};



int main( int argc , char **argv ){
	Dados dados;

  std::cout << "O nome dele é: ";

  dados.nome(); //função-membro 'nome' chamada por herança da classe pessoa.
  std::cout << "idade: ";
  dados.idade();//função-membro 'idade' chamada por herança da classe pessoa.
  
  std::cout << "Habilidade dele é: ";
  dados.idioma(); //função-membro que pertence à classe habilidade.
  return 0;
}
