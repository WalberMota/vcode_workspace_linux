#include <iostream>
#include <string>

class Movie
{
private:
    std::string CalssificacaoFilme;

public:
    std::string nomeFilme;
    std::string diretorFilme;

    Movie(std::string setNome, std::string setDiretor, std::string setNota)
    {
        nomeFilme = setNome;
        diretorFilme = setDiretor;
        setClassificacao(setNota);
        //std::cout << "objeto criado\n";
    }

    ~Movie(){};

    void setClassificacao(std::string setNota)
    {
        if (setNota == "G" || setNota == "PG" || setNota == "PG-13" ||setNota == "R" || setNota == "NC")
        {
            CalssificacaoFilme = setNota;
        }
        
    }

};

int main(int argc, char const *argv[])
{
    Movie filme1("E.T.: O Extraterrestre","Steven Spielberg","PG");
    Movie filme2("A Idade do Ouro","Luis Buñuel", "PG-13");
 
     
    return 0;
}


/* 
G – General Audiences (Público em Geral)
Todas as idades são permitidas. Nada que possa ofender os pais para ser visto por crianças.

PG – Parental Guidance Suggested (Sugestão de Orientação Parental)
Alguns materiais podem não ser adequados para crianças. Os pais são incentivados a dar "orientação parental". Pode conter algum material que os pais talvez não gostem para seus filhos pequenos.

PG-13 – Parents Strongly Cautioned (Os Pais são Fortemente Advertidos)
Alguns materiais podem ser inadequados para crianças menores de 13 anos. Recomenda-se que os pais sejam cautelosos. Alguns materiais podem ser inadequados para pré-adolescentes.

R – Restricted (Restrito)
Menores de 17 anos precisam ser acompanhados pelos pais ou por um responsável adulto. Contém algum material adulto. Recomenda-se que os pais se informem mais sobre o filme antes de levar seus filhos pequenos.

NC-17 – Adults Only (Somente para Adultos)
Ninguém com 17 anos ou menos foi admitido. Claramente adulto. Crianças não são admitidas.

 */