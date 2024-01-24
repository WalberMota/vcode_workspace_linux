#include <iostream>
#include <string>

class Movie
{
private:
    std::string nomeFilme;
    std::string diretorFilme;
    std::string notaFilme;

public:
    Movie(std::string setNome, std::string setDiretor, std::string setNota)
    {
        nomeFilme = setNome;
        diretorFilme = setDiretor;
        notaFilme = setNota;
        std::cout << "objeto criado\n";
    }

    ~Movie(){};
};

int main(int argc, char const *argv[])
{
    Movie filme1("E.T.: O Extraterrestre","Steven Spielberg","9.6");
    Movie filme2("A Idade do Ouro","Luis Buñuel", "7.2");
 
     
    return 0;
}
