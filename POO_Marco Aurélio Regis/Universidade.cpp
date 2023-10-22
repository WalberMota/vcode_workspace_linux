#include<iostream>
#include<string>

class Aluno{

public:
    int codigo;
    std::string nome;
    
};


int main(int argc, char const *argv[])
{
    Aluno *a1=new Aluno(); // o objeto é armazenado na HEAP, quando precisamos do \
                                objeto por longo período na aplicação.
    a1->codigo=100;

    Aluno a2;   //o objeto criado é armazenado na STACK (pilha). Aundo a vida dele está delimitada\
                    dentro de um escopo então não precisamos dele muito tempo
    a2.codigo=100;

    
    return 0;
}
