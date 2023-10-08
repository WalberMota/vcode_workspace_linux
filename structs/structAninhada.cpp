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

struct Pessoa
{
    std::string Nome;
    Data DtNascimento; // declara uma variável do tipo struct Data
    Endereco Endereco; // declara uma variável do tipo struct Endereco

};



int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}


