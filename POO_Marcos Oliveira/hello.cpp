#include <iostream>

class Hello{
  public:
    void helloworld(){
      std::cout << "Olá, Mundo!" << '\n';
    }
};

int main( int argc , char **argv ){
  Hello hello;
  hello.helloworld();
  return 0;
}
/* outra forma usando ponteiro
Como o objeto será criado na HEAP a destruição será por conta do programador.

int main( int argc , char **argv ){
  Hello* hello;
  hello->helloworld();
  return 0;
  delete hello;
}
*/
