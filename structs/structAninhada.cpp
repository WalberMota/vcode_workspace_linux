/*
Programa:hora.cpp
Escrito por: Walber S. Mota.
Linguagem: C++
Data da Criação: 08 Outubro 2023
Version 01.00 
locale=en_US.UTF-8,Utf16=on,HugeFiles=on,64 bits,4 CPUs Intel(R) Core(TM)
i5-5200U CPU @ 2.20GHz (306D4)
Propósito:  Estudo com struct aninhadas.
*/
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

    // exibir os dados na tela
    std::cout<<"Name  : "<<Pessoa01.Nome<<"\n";
    std::cout<<"Birth : "<<Pessoa01.DtNascimento.Dia<<"/"<<Pessoa01.DtNascimento.Mes
                        <<"/"<< Pessoa01.DtNascimento.Ano<<"\n";
    std::cout<<"Adress: "<<Pessoa01.Endereco.Rua<<"\n";
    std::cout<<"\t"<<Pessoa01.Endereco.Cidade<<"\n";
    std::cout<<"\t"<<Pessoa01.Endereco.Estado<<"\n";
    std::cout<<"\t"<<Pessoa01.Endereco.Pais<<"\n";


    return 0;
}


