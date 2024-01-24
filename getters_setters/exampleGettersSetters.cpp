#include <iostream>
#include <string>


class Movie
{
private:
    std::string nomeFilme;
    std::string diretorFilme;
    std::string notaFilme;

public:
    Movie(std::string nome, std::string diretor, std::string nota);
    ~Movie();
};

Movie(std::string nome, std::string diretor, std::string nota)
{
    nomeFilme = nome;
    diretorFilme = diretor;
    notaFilme=nota;

};

/* ~Filmes()
{
}; */



int main(int argc, char const *argv[])
{

    return 0;
}
