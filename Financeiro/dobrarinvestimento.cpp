
#include <iostream>

int main()
{
    int contador{0};
    double taxa{0.00}, montante{0.00}, vinicial{0};

    std::cout << "Digite o valor inicial do investimento: ";
    std::cin >> vinicial;
    montante = vinicial;
    std::cout << "\nDigite o percentual de redimento anual: ";
    std::cin >> taxa;
    while (montante < 2 * vinicial)
    {
        montante = montante * (1 + (taxa / 100));
        contador++;
    }

    std::cout << "\n\nR$ " << vinicial << " dobraria para R$ " << montante << " em " << contador << " anos no caso de um rendimento de " << taxa << "\% ao ano.";
}