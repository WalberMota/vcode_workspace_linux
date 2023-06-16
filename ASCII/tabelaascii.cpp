/*
Programa:
Escrito por: Walber Mota
Linguagem: C++
Data da Criação: 
Version 01.00 
locale=en_US.UTF-8,Utf16=on,HugeFiles=on,64 bits,4 CPUs Intel(R) Core(TM)
i5-5200U CPU @ 2.20GHz (306D4)
Propósito:  Lista do alemente ASCII mais comuns
*/

#include <iostream>

int main(int argc, char const *argv[])
{
    std::cout << "  ASCII    Valor decimal\n";

    for (int n = 33; n <= 126; n++)
    {
        std::cout << "|   " << char(n) << " ======== " << n << "|\n";
    }

    return 0;
}
