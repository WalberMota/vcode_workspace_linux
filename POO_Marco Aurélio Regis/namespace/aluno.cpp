/* aqui o arquivo aluno.cpp contém como as funções são desempenhadas
  ou seja, a implementação dos métodos da classe aluno
 */

#include <iostream>
#include "aluno.h"

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