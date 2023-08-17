/*
Autor: Walber Mota
Data da Criação: 13/05/2023
Objetivos: calculadora baśica com uso de funções
Linguagem: C/C++
*/

#include <iostream>

// funções básicas
float somar(float num1, float num2)
{
    return num1 + num2;
}
float subtrair(float num1, float num2)
{
    return num1 - num2;
}
float multiplicar(float num1, float num2)
{
    return num1 * num2;
}
float dividir(float num1, float num2)
{
    return num1 / num2;
}

// enter point do programa
int main(int argc, char const *argv[])
{
    float n1, n2;
    std::cout << "*****Calculadora automática ente dois numeros****\n";
    std::cout << "digite o primeiro numero ";
    std::cin >> n1;
    std::cout << "digite o segundo numero  ";
    std::cin >> n2;

    std::cout << "Operações básica entre " << n1 << " e " << n2 << "\n\n";
    std::cout << n1 << " + " << n2 << " = " << somar(n1, n2) << "\n";
    std::cout << n1 << " - " << n2 << " = " << subtrair(n1, n2) << "\n";
    std::cout << n1 << " X " << n2 << " = " << multiplicar(n1, n2) << "\n";
    std::cout << n1 << " / " << n2 << " = " << dividir(n1, n2) << "\n";

    return 0;
}
