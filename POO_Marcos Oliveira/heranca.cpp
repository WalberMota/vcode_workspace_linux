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
  hab.nome(); //a herança possibilita chamar a função-membro da classe pessoa.
  std::cout << "idade: ";
  hab.idade();
  std::cout << "Habilidade dele é: ";
  hab.idioma(); //chama a função-membro próprio da classe habilidade.
  return 0;
}
