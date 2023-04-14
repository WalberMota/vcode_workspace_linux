#include <iostream>

int main()
{
    float altura;
    float peso;
    float imc = 0.00;

    std::cout << "\t  Cálculo rápido do IM\n";
    std::cout << "\t  ====================\n";
    std::cout << "\tobs:digite somente números\n\n";
    std::cout << "digite sua altura em metros (ex.: 1.50):";
    std::cin >> altura;

    std::cout << "Digite seu peso em Kg: ";
    std::cin >> peso;

    imc = peso / (altura * altura);
    std::cout << "\nIMC= " << imc << "\n";
    if (imc <= 18.5)
    {
        std::cout << "\nVocê está abaixo do peso";
    }
    if (imc > 18.5 && imc <= 24.9){
        std::cout <<"\nPeso normal";
    }
    if (imc >=25.00 && imc <= 29.9){
        std::cout <<"\nAcima do peso desejável - Sobrepeso";
    }
    if (imc >= 30.00){
        std::cout <<"\nObesidade";
    }
    if (imc >=25){
        std::cout <<"Tratamento: Como a obesidade é provocada por uma ingestão de energia que supera o gasto do organismo,\na forma mais simples de tratamento é a adoção de um estilo de vida mais saudável, com menor\ningestão de calorias e aumento das atividades físicas.\nEssa mudança não só provoca redução de peso como facilita sua manutenção.";
    }
}