#include <iostream>
#include <string>

class Aluno{

private:
    int codigo;
    std::string nome;

    //float notas[2]{0.0,0.0};

public:
    //construtor com dois parâmetros
    Aluno(int codigo, std::string nome)
    {
        this -> setCodigo(codigo);
        this -> setNome(nome);

        std::cout << "objeto criado\n";
    }
    ~Aluno(){std::cout << "Objeto destruído..."<< '\n';}

    //========================
    int getCodigo()
    {
        return codigo;
    }
    std::string getNome()
    {
        return nome;
    }
    //========================
    //Setters - as vezes chamados "mutator methods" em algumas literaturas.
    // aqui criaremos dois setters - um para o atributo 'codigo' e outro para o atributo 'nome'
    //geralmente 'void' porque somente atribui um valor para um atributo da classe.
    void setCodigo(int codigo)
    {
        //o encapsulamento isolou o atributo 'codigo' e permitiu criar uma regra de negócio
        if (codigo<0)
        {
            codigo *=(-1);//transforam um valor negativo em positivo
        }
        if (codigo==0)
        {
            std::cout << "código não pode ser zero! Tente novamente...";
        }
        else
        {
        this->codigo=codigo;//o operador this referencia o parâmetro implicito de um atributo da classe.
        }
    }

    void setNome(std::string nome)
    {
        this->nome=nome;
    }
};


int main(int argc, char const *argv[])
{
    Aluno *a1=new Aluno(5050,"Jose"); // HEAP(longo período)
    //a1->setCodigo(0);

    std::cout << "Nome do aluno a1 = " << a1->getNome()   << '\n';
    std::cout << "Código aluno  a1 = " << a1->getCodigo() << '\n';


    Aluno a2(1010,"Marcos");   //STACK (pilha)(deleção automatica).
    a2.setCodigo(100);

    std::cout << "Nome   aluno a2 = " << a2.getNome() <<'\n';
    std::cout << "Código aluno a2 = " << a2.getCodigo() <<'\n';

    return 0;
}
