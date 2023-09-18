/*
Programa:
Escrito por: Walber Mota
Linguagem: C++
Data da Criação: 18/09/2023
Version 01.00
locale=en_US.UTF-8,Utf16=on,HugeFiles=on,64 bits,4 CPUs Intel(R) Core(TM)
i5-5200U CPU @ 2.20GHz (306D4)
Propósito:  Cálculo do fatorial de um dado numero inteiro.
*/

#include <iostream>

unsigned long int numero=0;
unsigned long int fatorial(unsigned long int numero);

int main(int, char const *argv[])
{
    system("clear");
    std::cout << "Calcula o fatorial dos primeiro 65 números naturais inteiros:\n\n";
    std::cout << "Digite o numero (máximo 65): ";
    std::cin >> numero;
   
    if (numero == 0 || numero == 1)
    {
        std::cout << "\n" << numero<< "! = 1";
        return 0;
    }
    if (numero > 65)
    {
        std::cout << "\n" << numero<< "! = " << fatorial(numero);        
        std::cout <<"\n\nO resultado obtido excede a capacidade desta Máquina!\n";
    }
    else
    {
        std::cout << "\n" << numero<< "! = " << fatorial(numero);
        return 0;
    }
    
}

unsigned long int fatorial(unsigned long int numero)
{
    return (numero <= 1) ? 1 : numero * fatorial(numero - 1);
}
