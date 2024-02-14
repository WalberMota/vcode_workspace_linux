/*
Programa:
Escrito por: Walber Mota
Linguagem: C++
Data da Criação: 18/09/2023
Version 01.00
locale=en_US.UTF-8,Utf16=on,HugeFiles=on,64 bits,4 CPUs Intel(R) Core(TM)
i5-5200U CPU @ 2.20GHz (306D4)
Propósito:  Cálculo do fatorial com o valor do número colocado como argumento na chamada do programa!
*/   

#include <iostream>
#include <cstdlib>

unsigned long int numero = 0;
unsigned long int fatorial(unsigned long int numero);

int main(int, char const *argv[])
{
    if (argv)
    {
        std::cout << "\ninforme o número no formato \"executável <numero>.\" \n\n\n";
    }
    
    int numero = atoi(argv[1]);
    if (numero > 65)
    {
        system("clear");
        std::cout << "\n" << numero<< "! = " << fatorial(numero);
        std::cout <<"\n\nO resultado obtido excede a capacidade desta Máquina!\n";
        //return 1;
    }
    else
    {
        system("clear");        
        std::cout << "\n" << numero<< "! = " << fatorial(numero);
        return 0;
    }

}

unsigned long int fatorial(unsigned long int numero)
{
    return (numero <= 1) ? 1 : numero * fatorial(numero - 1);
}
