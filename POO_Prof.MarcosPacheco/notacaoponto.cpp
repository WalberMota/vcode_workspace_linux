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

void start_option();//definição da função para instruções iniciais

// Criando a classe Casa
class Casa
{
    // quando um atributo é criado na classa ele é por padrão private(privada).
    int NumQuartos{1};
    float Tamanho{50.0f};
    bool bTemSuite{false};

public:
    void MostrarTamanho();
    int ObtenhaNumeroDeQuartos();
    bool TemSuite();
    void SetNumQuartos(int Num);
    void SetSuite();
};

char bsuite;
int main()
{
    int numquartos;
    Casa CasaDePraia;//instancia um obsjeto da classe Casa
    start_option();

    std::cout << "\nDigite quantos quartos deseja (min=1,max=6)";
    std::cin >> numquartos;
    CasaDePraia.SetNumQuartos(numquartos);

    std::cout << "\nDeseja com suite ? (s/n)";
    std::cin >> bsuite;
    CasaDePraia.SetSuite();

    //Exibe resultado final
    system ("clear");
    std::cout <<"\nO Aptoº escolhido possui:\n";
    CasaDePraia.MostrarTamanho();
    std::cout << "\nNúmero de Quartos: " << CasaDePraia.ObtenhaNumeroDeQuartos();
    std::cout << "\nSuite: ";
    CasaDePraia.TemSuite() ? (std::cout << "Sim") : (std::cout << "Nao") << "\n";
    std::cout<< "\n Reserva efetuada com sucesso - Obrigado !";

    return 0;

}

void Casa::MostrarTamanho()
{
    std::cout << "\nTamanho: " << Tamanho << " m²";
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
        std::cout << "\nNumero de Quartos Inválidos, definida para numero padrão\n";
    }
}

void Casa::SetSuite()
{
    if (bsuite == 's' || bsuite == 'S')
    {
        bTemSuite = true;
    }
    else
        bTemSuite = false;
}

void start_option()
{
    system ("clear");
    std::cout << "**********************************\n";
    std::cout << "1) Escolha o número de quartos\n";
    std::cout << "2) Escolha se COM ou SEM suite\n";
    std::cout << "\n";
    std::cout << "O Tamanho padrão do Aptº é de 50 m²\n";
    std::cout << "**********************************\n";
    std::cout << "\n";
}
