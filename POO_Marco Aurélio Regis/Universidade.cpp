#include <iostream>
#include <string>

class Aluno{

private:
    int codigo;
    std::string nome;

public:
    //Getters - as vezes chamados também "accessor methods" em algumas literaturas.
    // aqui criaremos dois getters - um para o atributo 'codigo' e outro para o atributo 'nome'
    int getCodigo()
    {
        return codigo;
    }
    std::string getNome()
    {
        return nome;
    }

    //Setters - as vezes chamados "mutator methods" em algumas literaturas.
    // aqui criaremos dois setters - um para o atributo 'codigo' e outro para o atributo 'nome'
    void setCodigo(int codigo)
    {
        this->codigo=codigo;
    }

    void setNome(std::string nome)
    {
        this->nome=nome;
    }
};


int main(int argc, char const *argv[])
{
    Aluno *a1=new Aluno(); // o objeto é armazenado na HEAP, quando precisamos do \
                                objeto por longo período na aplicação.
    a1->setCodigo(100); //aqui neste caso da HEAP estamos trabalhando com ponteiros.    

    Aluno a2;   //o objeto criado é armazenado na STACK (pilha). Aundo a vida dele está delimitada\
                    dentro de um escopo então não precisamos dele muito tempo
    a2.setCodigo(100);

    std::cout << a1->getCodigo() <<'\n';

    return 0;
}
