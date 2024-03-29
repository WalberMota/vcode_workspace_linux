#pragma once
#include <iostream>
#include <string>

class Movie
{
private:
    std::string classificacaoFilme;

public:
    std::string nomeFilme;
    std::string diretorFilme;

    Movie(std::string setNome, std::string setDiretor, std::string setNota);
    void setClassificacao(std::string setNota);
    std::string getClassificacao();

    ~Movie();
   
};