#include <iostream>
#include <string>


class Movie
{
private:
    string nomeFilme;
    string diretorFilme;
    string notaFilme;

public:
    Movie(string nomeFilme, string diretorFilme, string notaFilme);
    ~Movie();
};

Movie(string nome, string diretor, string nota)
{
    nomeFilme = nome;
    diretorFilme = diretor;
    notaFilme=nota;

}

~Filmes()
{
}



int main(int argc, char const *argv[])
{

    return 0;
}
