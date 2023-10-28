#include <iostream>


class Hello{//cria a classe
  public:
    void helloworld(){//a função-membro pública que irá imprimir o "olá, Mundo"
      std::cout << "Olá, Mundo!" << '\n';
    }
};

int main( int argc , char **argv ){
  Hello hello;	//cria o objeto da classe hello
  hello.helloworld();	//cham a função pública da classe para imprimiir a mensagem.
  return 0;
}


/* outra forma de realizar a mesma coisa usando ponteiro

Como o objeto será criado na HEAP a destruição será por conta do programador
usando o comando delete <classe>

int main( int argc , char **argv ){
  Hello* hello;
  hello->helloworld();
  return 0;
  delete hello;
}
*/
