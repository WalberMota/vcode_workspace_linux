#include <iostream>
#include <string>


class Movie
{
private:
    string nomeFilme;
    string diretorFilme;
    string notaFilme;

public:
    Movie(string nome, string diretor, string nota);
    ~Movie();
};

Movie(string nome, string diretor, string nota)
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
