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

int main( int argc , char **argv ){
  Habilidades hab;// é criada um obj chamado hab da classe habilidade
  std::cout << "O nome dele é: ";

  hab.nome(); //função-membro 'nome' chamada por herança da classe pessoa.
  std::cout << "idade: ";
  hab.idade();//função-membro 'idade' chamada por herança da classe pessoa.
  
  std::cout << "Habilidade dele é: ";
  hab.idioma(); //função-membro que pertence à classe habilidade.
  return 0;
}
