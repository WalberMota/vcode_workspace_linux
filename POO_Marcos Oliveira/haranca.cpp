#include <iostream>

class Pessoa{
  public:
    void nome(){
      std::cout << "Marcos Oliveira" << '\n';
    }
};

class Habilidades : public Pessoa{
  public:
    void idioma(){
      std::cout << "Português Brasileiro" << '\n';
    }
};

int main( int argc , char **argv ){
  Habilidades hab;// é criada um obj chamado hab da classe habilidade
  std::cout << "O nome dele é: ";
  hab.nome(); //como a classe herdou nome da classe pessoa por herança eu posso fazer isso.
  std::cout << "A habilidade dele é: ";
  hab.idioma(); //idioma é proprio da classe habilidade.
  return 0;
}
