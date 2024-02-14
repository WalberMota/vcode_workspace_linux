/*
Programa: Dobrarinvestimento.cpp
Escrito por: Walber Mota
Linguagem: C++
Data da Criação: 18/09/2023
Version 01.00
locale=en_US.UTF-8,Utf16=on,HugeFiles=on,64 bits,4 CPUs Intel(R) Core(TM)
i5-5200U CPU @ 2.20GHz (306D4)
Propósito:  Calcula em quantos anos um investimento dobra seu montante a partir de uma determinada taxa anual
*/  
///Falta criar opção para aplicaçõees mensais.


#include <iostream>

int main()
{
    int contador{0};
    double taxa{0.00}, montante{0.00}, vinicial{0.00};

    std::cout << "Digite o valor inicial do investimento: ";
    std::cin >> vinicial;
    montante = vinicial;
    std::cout << "\nDigite o percentual de redimento anual: ";
    std::cin >> taxa;
    
    while (montante < 2 * vinicial)
    {
        montante =(montante * (1 + (taxa / 100)));
        contador++;
    }

    std::cout << "\n\nR$ " << vinicial << " dobraria para R$ " << montante << " em " << contador << " anos no caso de um rendimento de " << taxa << "\% ao ano.";
}