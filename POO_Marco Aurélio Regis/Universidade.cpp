#include <iostream>
#include <string>

class Aluno{

private:
    int codigo;
    std::string nome;

public: //aqui ocorre o encapsulamento dos atributos da classe
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
    //geralmente 'void' porque somente atribui um valor para um atributo da classe.
    void setCodigo(int codigo)
    {
        if (codigo<=0)
        {
            codigo *=(-1);
        }
        this->codigo=codigo;//o operador this referencia o parâmetro implicito de um atributo da classe.
    }

    void setNome(std::string nome)
    {
        this->nome=nome;
    }
};


int main(int argc, char const *argv[])
{
    Aluno *a1=new Aluno(); // aqui o objeto é armazenado na HEAP, quando precisamos do \
                                objeto por longo período na aplicação. Quando não for mais útil\
                                teremos que usar 'delete' para liberar da memória.
    //somente altera o atributo codigo usando o método setCodigo (encapsulamento).
    a1->setCodigo(-500); //aqui neste caso da HEAP estamos trabalhando com ponteiros.    

    std::cout << "Código aluno a1 = " << a1->getCodigo()<<'\n';

    Aluno a2;   //aqui o objeto criado é armazenado na STACK (pilha). Aundo a vida dele está delimitada\
                    dentro de um escopo então não precisamos dele muito tempo (deleção automatica).
    a2.setCodigo(100);

    std::cout << "Código aluno a2 = " << a2.getCodigo() <<'\n';

    return 0;
}
