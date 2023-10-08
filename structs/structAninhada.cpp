#include<iostream>
#include<cstring>

struct Data
{
    int Dia;
    int Mes;
    int Ano;
};

struct Endereco
{
    std::string Rua;
    std::string Cidade;
    std::string Estado;
    std::string Pais;
};

struct Pessoa // declaramos struct dentro de outra struct (struct aninhadas)
{
    std::string Nome;
    Data DtNascimento; // declara uma variável do tipo struct Data
    Endereco Endereco; // declara uma variável do tipo struct Endereco

};



int main(int argc, char const *argv[])
{
    Pessoa Pessoa01;
    Pessoa01.Nome = "Fulano da Silva";
    Pessoa01.DtNascimento.Dia= 8;
    Pessoa01.DtNascimento.Mes=10;
    Pessoa01.DtNascimento.Ano=2000;
    Pessoa01.Endereco.Rua="Street A";
    Pessoa01.Endereco.Cidade="San Francisco";
    Pessoa01.Endereco.Estado="California";
    Pessoa01.Endereco.Pais="EUA";



    return 0;
}


