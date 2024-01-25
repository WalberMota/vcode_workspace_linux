/*
Programa:exempleGettersSetters.cpp
Linguagem: C++
Data da Criação: 23 Janeiro 2024
Version 01.00 
locale=en_US.UTF-8,Utf16=on,HugeFiles=on,64 bits,4 CPUs Intel(R) Core(TM)
i5-5200U CPU @ 2.20GHz (306D4)
Propósito:  Uso de Setters como o conceitos da orientação a objeto, o encapsulamento, na qual vc pode definir a sua variável como privado, e criar o getter e setter para poder acessar ela a partir de outra classe. Permite também a criação de regras de nogócios para controlar os dados inseridos pelo usuário.
*/


class Movie
{
private:
    std::string classificacaoFilme;

public:
    std::string nomeFilme;
    std::string diretorFilme;

 
};

int main(int argc, char const *argv[])
{
    Movie filme1("E.T.: O Extraterrestre","Steven Spielberg","PG");
    Movie filme2("A Idade do Ouro","Luis Buñuel", "PG-13");

    std::cout << filme1.nomeFilme << " dirigido por "<< filme1.diretorFilme <<" tem classificação " << filme1.getClassificacao();
    std::cout << "\n";
    std::cout << filme2.nomeFilme << " dirigido por "<< filme2.diretorFilme <<" tem classificação " << filme2.getClassificacao();    
 
     
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