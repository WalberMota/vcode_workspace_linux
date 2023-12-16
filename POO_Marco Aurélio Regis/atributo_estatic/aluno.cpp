/* aqui o arquivo aluno.cpp contém como as funções são desempenhadas
  ou seja, a implementação dos métodos da classe aluno
 */

#include <iostream>
#include "aluno.h"
#include "professor.h"


int graduacao::Aluno::proxCodigo =1000;

//function implementation =====================
graduacao::Aluno::Aluno(std::string nome)
{
    this->codigo=proxCodigo;
    proxCodigo++;

    this->setNome(nome);

    std::cout << "objeto criado\n";
}
graduacao::Aluno::~Aluno()
{
    std::cout << "Objeto destruído ";
}
// getters
int graduacao::Aluno::getCodigo()
{
    return codigo;
}

std::string graduacao::Aluno::getNome()
{
    return nome;
}

float *graduacao::Aluno::getNotas()
{
    return notas;
}

// setters
void graduacao::Aluno::setNome(std::string nome)
{
    this->nome = nome;
}

/* void graduacao::Aluno::setCodigo(int codigo)
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
} */
void graduacao::Aluno::setNotas(float *notas)
{
    this->notas[0] = notas[0];
    this->notas[1] = notas[1];
}

float graduacao::Aluno::calculaMedia()
{
    float media = 0.0f;

    float *p = &notas[0];
    media = media + *p;
    p++;
    media = media + *p;
    return media / 2;
}

    void graduacao::Aluno::imprimeSaudacao()
    {

        std::cout << "\n  Ola usuário, estes são os alunos cadastrados no sistema:\n";
    }