#include <iostream>
#include <string>

class Aluno
{
private:
    int codigo;
    std::string nome;

    float notas[2]{0.0, 0.0};

public:
    // ******* protótipos das funções *********
    // contrutor e destrutor
    Aluno(int codigo, std::string nome);
    ~Aluno();
    // getters
    int getCodigo();
    std::string getNome();
    // setters
    void setNome(std::string nome);
    void setCodigo(int codigo);
    void setNotas(float *notas);
    // método que calcula a média das notas.
    float calculaMedia();
};

int main(int argc, char const *argv[])
{
    Aluno *a1 = new Aluno(5050, "Jose");
    a1->setCodigo(20345);

    std::cout << "Nome do aluno a1 = " << a1->getNome() << '\n';
    std::cout << "Código aluno  a1 = " << a1->getCodigo() << '\n';

    delete a1;
    std::cout << "manualmente\n";

    Aluno a2(1010, "Marcos");
    a2.setCodigo(-100);

    std::cout << "Nome   aluno a2 = " << a2.getNome();
    std::cout << "\nCódigo aluno a2 = " << a2.getCodigo();

    return 0;
}

Aluno(int codigo, std::string nome)
{
    this->setCodigo(codigo);
    this->setNome(nome);

    std::cout << "objeto criado";
}
~Aluno()
{
    std::cout << "\nObjeto destruído ";
}
// gets
int getCodigo()
{
    return codigo;
}

std::string getNome()
{
    return nome;
}

float *getNotas()
{
    return notas;
}

// setters
void setNome(std::string nome)
{
    this->nome = nome;
}

void setCodigo(int codigo)
{
    if (codigo < 0)
    {
        codigo *= (-1);
    }
    if (codigo == 0)
    {
        std::cout << "código não pode ser zero! Tente novamente...";
    }
    else
    {
        this->codigo = codigo;
    }
}
void setNotas(float *notas)
{
    this->notas[0] = notas[0];
    this->notas[1] = notas[1];
}

float calculaMedia()
{
    float media = 0.0f;

    float *p = &notas[0];
    media = media + *p;
    p++;
    mediia = mediia + *p;
    p++;
    media = media + *p;
    return media / 2;
}