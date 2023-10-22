#include<iostream>
#include<string>

class Aluno{

    int codigo;
    std::string nome;
    
};


int main(int argc, char const *argv[])
{
    Aluno *a1=new Aluno(); // o objeto é armazenado na HEAP, quando precisamos do \
                                objeto por longo período na aplicação.
    Aluno a2;   //o objeto criado é armazenado na STACK (pilha). Aundo a vida dele está delimitada\
                    dentro de um escopo então não precisamos dele muito tempo
    return 0;
}
