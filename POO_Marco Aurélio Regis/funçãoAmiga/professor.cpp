#include"professor.h"

professor::professor(/* args */)
{
}

professor::~professor()
{
}

void professor::alteraNotaAluno(Aluno a,float n1,float n2)
{
    a.notas[0]=n1;
    a.notas[1]=n2;

}