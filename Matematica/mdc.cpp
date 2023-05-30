/*
Autor: WalberMota
Data da Criação: 15/03/2023
Objetivos: Calcula o MDC entre dois numeros dados
Linguagem C++

1. Dividir o número maior pelo menor: 
2. Não dando resto zero, dividir o divisor pelo resto da divisão anterior:
3. Prosseguir com as divisões até obter resto zero.
*/


#include <iostream>

int main()
{
    int n1, n2, resto;

    std::cout << "Digite o primeiro numero..: ";
    std::cin >> n1;
    std::cout << "Digite o segundo numero...: ";
    std::cin >> n2;

    resto = n1 % n2;

    while (resto != 0)
    {
        n1 = n2;
        n2 = resto;
        resto = n1 % n2;
    }

    std::cout << "\nMDC: " << n2 << "\n";
}
