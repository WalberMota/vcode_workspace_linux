/*
Programa:
Escrito por: Walber Mota
Linguagem: C++
Data da Criação:07/04/2023
Version 01.00
locale=en_US.UTF-8,Utf16=on,HugeFiles=on,64 bits,4 CPUs Intel(R) Core(TM)
i5-5200U CPU @ 2.20GHz (306D4)
Propósito: Estudo de POO com notação ponto(udemy)
*/
#include <iostream>

// Criando a classe Casa
class Casa
{
    // public:
    int NumQuartos{1};
    float Tamanho{50.0f};
    bool bTemSuite{true};

public:
    void MostrarTamanho();
    int ObtenhaNumeroDeQuartos();
    bool TemSuite();
    void SetNumQuartos(int Num);
};

int main()
{
    int numquartos;
    Casa CasaDePraia;
    CasaDePraia.MostrarTamanho();
    std::cout << "\nDigite quantos quartos deseja (min=1,max=6)";
    std::cin >> numquartos;
        CasaDePraia.SetNumQuartos(numquartos);
    std::cout << "\n Num Quartos: " << CasaDePraia.ObtenhaNumeroDeQuartos();
    std::cout << "\n Tem Suite: ";
    CasaDePraia.TemSuite() ? (std::cout << "Sim") : (std::cout << "Nao") << "\n";
    std::cout << "\n";

    //system("PAUSE");
    return 0;
}

void Casa::MostrarTamanho()
{
    std::cout << "\nTamanho: " << Tamanho;
}

int Casa::ObtenhaNumeroDeQuartos()
{
    return NumQuartos;
}

bool Casa::TemSuite()
{
    //
    return bTemSuite;
}

void Casa::SetNumQuartos(int Num)
{
    if ((Num <= 6) && (Num >= 1))
    {
        NumQuartos = Num;
    }
    else
    {
        std::cout << "\nNumero de Quartos Invalidos, definida para numero padrão\n";
    }
}
