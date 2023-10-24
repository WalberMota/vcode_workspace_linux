/*
Construtores - são métodos que facilitam ao programa a inicialização dos dados-membros da classe  
Um construtor dever possuir o mesmo nome da classe.
Uma classe pode ter mais de um construtor.
Um construtor pode ter zero, um ou mais parâmetros.
Um construtor não tem valor de retorno.
Um construtor é sempre chamado quando um objeto pe criado(devido à primeira definição).
*/

#include <iostream>
#include <string>

class Aluno{

private:
    int codigo;
    std::string nome;

public:
    //Construtor
    Aluno(int codigo, std::string nome)
    {
        this->setCodigo(codigo);
        this->setNome(nome);
    }

    //aqui ocorre o encapsulamento dos atributos da classe
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
        if (codigo<0)//o encapsulamento isolou o atributo 'codigo' \
                        e permitiu criar uma regra de negócio - código não pode ser negativo
        {
            codigo *=(-1);
        }
        if (codigo==0)
        {
            std::cout << "código não pode ser zero! Tente novamente...";
        }
        else
        {
            this->codigo=codigo;//o operador this referencia o parâmetro\
                                  implicito de um atributo da classe.
        }
    }

    void setNome(std::string nome)
    {
        this->nome=nome;
    }
};


int main(int argc, char const *argv[])
{
    
    Aluno *a1=new Aluno(11451,"Beltrano"); // devido o construtor quando o objeto\
                                         é criado é neecessário passar parâmetros

    std::cout << "\nCódigo aluno a1 = " << a1->getCodigo()<<'\n';
    std::cout << "Nome   aluno a1 = " << a1->getNome()<<'\n';

    Aluno a2(23510,"Maria");// devido o construtor quando o objeto\
                              é criado é neecessário passar parâmetros
 
    std::cout << "\nCódigo aluno a2 = " << a2.getCodigo() <<'\n';
    std::cout << "Nome   aluno a2 = " << a2.getNome() <<'\n';
    delete(a1);
    return 0;
}
