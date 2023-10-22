#include <iostream>
#include <string>

class Aluno{

private:
    int codigo;
    std::string nome;

public:
    //Getters - as vezes chamados também accessor methods
    

    //Setters - as vezes chamados mutator methods
};


int main(int argc, char const *argv[])
{
    Aluno *a1=new Aluno(); // o objeto é armazenado na HEAP, quando precisamos do \
                                objeto por longo período na aplicação.
    a1->codigo=100; //aqui neste caso da HEAP estamos trabalhando com ponteiros.    

    Aluno a2;   //o objeto criado é armazenado na STACK (pilha). Aundo a vida dele está delimitada\
                    dentro de um escopo então não precisamos dele muito tempo
    a2.codigo=100;

std::cout << a1->codigo <<'\n';

    return 0;
}
