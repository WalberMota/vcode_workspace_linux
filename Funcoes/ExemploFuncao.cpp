/*
Autor: Walber Mota
Data da Criação: 13/05/2023
Objetivos: uso de função para verifica se um número é par ou impar
Linguagem: c/c++
*/

#include <iostream>

bool seForPar(int tipo)
{
    if (tipo % 2 == 0)
        return true;
    return false;
}

int main()
{
    int num;
    std::cout << "Digite um numero inteiro : ";
    std::cin >> num;
    if (seForPar(num))
        std::cout << "\nO número " << num << " é par\n";
    else
        std::cout << "\nO número " << num << " é impar\n";

    std::cout<<"\neow...";
    return 0;
}
