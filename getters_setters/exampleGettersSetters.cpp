#include <iostream>
#include <string>

class Movie
{
private:
    std::string nomeFilme;
    std::string diretorFilme;
    std::string notaFilme;

public:
    Movie(std::string nome, std::string diretor, std::string nota)
    {
        nomeFilme = nome;
        diretorFilme = diretor;
        notaFilme = nota;
    }

    ~Movie();
};

int main(int argc, char const *argv[])
{
    Movie filme1("E.T.: O Extraterrestre","Steven Spielberg","9.6");
    Movie filme2(""A Idade do Ouro","Luis Buñuel", "8.2");
    
    return 0;
}
