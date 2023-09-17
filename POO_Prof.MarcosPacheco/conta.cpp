/* precisamos incluir o arquivo .h para que o aquivo .cpp possa "Enxergar" as declarações da classe Conta
 */
#include "conta.h"
#include <iostream>
#include <string>

// Aqui começam as funções.
/* o operador escopo (::) diz que a função Sacar pertence à classe Conta e o codigo vai implementar a função Sacar */

bool Conta::Sacar(double Valor)
{
    if (Saldo < Valor)
    {
        std::cout << "\nSaldo Insuficiente...\n";
        std::cout << "Saldo atual : R$ " << ConsultarSaldo() << "\n";
        return false;
    }
    else
    {
        Saldo -= Valor;
        std::cout << "Saldo atual : R$ " << ConsultarSaldo() << "\n";
        return true;
    }
}

void Conta::Depositar(double Valor)
{
    Saldo += Valor;
    std::cout << "\nDeposito efetuado com sucesso...\n";
}

void Conta::Transferir(Conta Destino, double Valor)
{
    if (Saldo < Valor)
    {
        std::cout << "\nSaldo insuficiente...\n";
    }
    else
    {
        Destino.Depositar(Valor);
        Saldo -= Valor;
        std::cout << "\n**** Dados *****\n";
        std::cout << "Titular: " << Destino.GetTitular() << "\n";
        std::cout <<"Banco: "<<Destino.GetBanco()<<"\n";
        std::cout <<"Agencia: "<<Destino.GetAgencia()<<"n";
        std::cout <<"Conta: "<<Destino.GetNumConta()<<"n";

        std::cout << "\nTransferência realizada com sucesso...\n";

        std::cout << "Saldo atual : R$ " << ConsultarSaldo() << "\n";
    }
}
//estas funções vão mostrar os atributos da classe
double Conta::ConsultarSaldo()
{
    return Saldo;
}

std::string Conta::GetBanco()
{
    return Banco;
}

int Conta::GetAgencia()
{
    return Agencia;
}

int Conta::GetNumConta()
{
    return NumConta;
}

std::string Conta::GetTitular()
{
    return Titular;
}
//estas funções vão alterar o valor dos atributos
void Conta::SetBanco(std::string SetBanco)
{
    this->Banco=Banco;
}

void Conta::SetAgencia(int Agencia)
{
    this->Agencia=Agencia;
}

void Conta::SetNumConta(int NumConta)
{
    this->NumConta=NumConta;
}

void Conta::SetTitular(std::string Titular)
{
    this->Titular=Titular;
}

