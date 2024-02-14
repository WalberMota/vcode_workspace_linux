#include "aluno.h" //tem que estar acima para informar o compilador

#ifndef PROFESSOR_H_
#define PROFESSOR_H_

 /* ficando aqui o compilado conhece a classe aluno antes da classe professor e assim conhecer os metodos amigos - forward declaration class */
namespace graduacao
{
    class Aluno;
}; // namespace graduação


class professor
{
private:
    /* data */
public:
    professor(/* args */);
    ~professor();

    void alteraNotaAlunoGraduacao(graduacao::Aluno &a,float n1,float n2);
};


#endif /* PROFESSOR_H_ */