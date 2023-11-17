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
    //Construtor - este é do tipo com argumento ou chamado de construtor parametrizado
    Aluno(int codigo, std::string nome)
    {
        this->setCodigo(codigo);
        this->setNome(nome);
    }
	
    //Construtor de cópida - é sempre criado utilizando uma referência
	Aluno(const Aluno &a) {
		this->codigo = a.codigo;
		this->nome = a.nome;
	}

    //aqui ocorre o encapsulamento dos atributos da classe=====================

    //1 - Getters - as vezes chamados também "accessor methods" em algumas literaturas.
    // aqui criaremos dois getters - um para o atributo 'codigo' e outro para o atributo 'nome'
    int getCodigo()
    {
        return codigo;
    }
    std::string getNome()
    {
        return nome;
    }
    //S2 - etters - as vezes chamados "mutator methods" em algumas literaturas.
    // aqui criaremos dois setters - um para o atributo 'codigo' e outro para o atributo 'nome'
    //geralmente 'void' porque somente atribui um valor para um atributo da classe.
    void setCodigo(int codigo)
    {
        if (codigo<0)//o encapsulamento isolou o atributo 'codigo' \
                        e permitiu criar uma REGRA DE NEGÓCIOS - código não pode ser negativo
        {
            codigo *=(-1);//
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
    
    Aluno *a1=new Aluno(11451,"Beltrano"); // devido o construtor ser parametrizado quando\
                                              o objeto, é criado é neecessário passar os parâmetros

    std::cout << "\nCódigo aluno a1 = " << a1->getCodigo()<<'\n';
    std::cout << "Nome   aluno a1 = " << a1->getNome()<<'\n';

    Aluno a2(23510,"Maria");// devido o construtor ser parametrizado quando\
                               o objeto, é criado é neecessário passar os parâmetros
 
    std::cout << "\nCódigo aluno a2 = " << a2.getCodigo() <<'\n';
    std::cout << "Nome   aluno a2 = " << a2.getNome() <<'\n';

    //Utilizando construtor de cópia para criar uma cópia do objeto a2.
	Aluno x = a2;

    std::cout << "\nUsando um construtor de cópia foi criado o objeto 'aluno x'";
	std::cout << "\nCódigo do aluno x = " << x.getCodigo() << '\n';
	std::cout << "Nome do aluno x = " << x.getNome() << '\n';
    
    
    delete(a1); // Para não deixar lixo de memória - como tudo ocorre dentro da função main que é\
                   nesta caso muito cursa, pois quando ela termina todos os objetos são destruídos\
                   automatiiamenteNão é necessário e a2 por estar na pilha é automaticamente. 
    return 0;
}
