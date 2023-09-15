#pragma once
#include <iostream>
#include <string>

/*no arquivo .h é onde existem as declarações de atributos e métodos (funções) da classe
aqui não existe as definições, implementações das funções, pois isto será feito no aquivo .cpp
 -e a separação do O QUE (.h) do COMO FAZER (.cpp)
 */
class Conta
{
private:
    // aqui estão informações que são os atributos e recomendados ficarem privados.
    std::string Banco;
    int Agencia;
    int NumConta;
    std::string Titular;
    double Saldo;

public: // aqui ficam os métodos (ou funções)
    bool Sacar(double Valor);
    void Depositar(double Valor);
    void Transferir(Conta &Destino, double Valor);
    double ConsultarSaldo();

    // cria as funções para obter os dados privados
    std::string GetBanco();
    int GetAgencia();
    int GetNumConta();
    std::string GetTitular();
    void SetBanco(std::string Banco);
    void SetAgencia(int Agencia);
    void SetTitular(std::string Titular);
};
