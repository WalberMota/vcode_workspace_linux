#include <iostream>
#include <iomanip> //defnidr a precisão das casas decimais

int main(void)
{
    // define dois calores numericos do tipo float
    float num1{10.5f};
    float num2{3.2f};

    // operações aritméticas
    float soma = num1 + num2;
    float subtracao = num1 - num2;
    float multiplicacao = num1 * num2;
    int16_t divInteira = static_cast<int16_t>(num1/num2);
    float divReal= num1/num2;

    //definir precisao com duas casas terminais
    std::cout << std::fixed << std::setprecision(2);

    
}