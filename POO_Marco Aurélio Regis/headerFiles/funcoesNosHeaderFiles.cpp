#include <iostream>
#include <string>

class Professor
{
    int codigo;
    std::string nome;
};

//entry point ***********************
int main(int argc, char const *argv[])
{
 
    Aluno a(1010, "João");

    std::cout << "Nome   aluno a = " << a.getNome();
    std::cout << "\nCódigo aluno a = " << a.getCodigo();

	float n[2]{10.0, 8.5};
	a.setNotas(n);
	std::cout << "\nA Média das notas é " << a.calculaMedia() << '\n';
    return 0;
}

//function implementation =====================
Aluno::Aluno(int codigo, std::string nome)
{
    this->setCodigo(codigo);
    this->setNome(nome);

    std::cout << "objeto criado\n";
}
Aluno::~Aluno()
{
    std::cout << "Objeto destruído ";
}
// getters
int Aluno::getCodigo()
{
    return codigo;
}

std::string Aluno::getNome()
{
    return nome;
}

float *Aluno::getNotas()
{
    return notas;
}

// setters
void Aluno::setNome(std::string nome)
{
    this->nome = nome;
}

void Aluno::setCodigo(int codigo)
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
void Aluno::setNotas(float *notas)
{
    this->notas[0] = notas[0];
    this->notas[1] = notas[1];
}

float Aluno::calculaMedia()
{
    float media = 0.0f;

    float *p = &notas[0];
    media = media + *p;
    p++;
    media = media + *p;
    return media / 2;
}