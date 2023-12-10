#ifndef PROFESSOR_H_
#define PROFESSOR_H_

#include "aluno.h"

class professor
{
private:
    /* data */
public:
    professor(/* args */);
    ~professor();

    void alteraNotaAluno(graduacao::Aluno a,float n1,float n2);
};


#endif /* PROFESSOR_H_ */