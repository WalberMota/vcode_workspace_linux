#include"conta.h"
#include<iostream>
#include<string>

int main(int argc, char const *argv[])
{
    Conta ContaCliente01;
    Conta ContaCliente02;
    
    ContaCliente01.SetTitular("Fulano");
    ContaCliente01.SetBanco("Banco do Brasil");
    ContaCliente01.SetAgencia(2563);
    ContaCliente01.SetNumConta(1234);
    ContaCliente01.Depositar(14960);
    ContaCliente01.Sacar(1500);

    ContaCliente02.SetTitular("Beltrano");
    ContaCliente02.SetBanco("City Bank");
    ContaCliente02.SetAgencia(4321);
    ContaCliente02.SetNumConta(999);
    
    ContaCliente01.Transferir(ContaCliente02,2000);//o objeto Contacliente02 será enviado como argumento 
    //para a função transferir
    
    ContaCliente02.Sacar(500);
    ContaCliente02.Sacar(5000);

    return 0;
}
