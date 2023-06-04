/*
Autor: Walber Mota
Criação: 04/05/2023
Version 01.00 
locale=en_US.UTF-8,Utf16=on,HugeFiles=on,64 bits,4 CPUs Intel(R) Core(TM) i5-5200U CPU @ 2.20GHz (306D4)
Objetivos: pequeno jogo de adivinhar um numero entre 0 e 60

*/

#include <iostream>
#include <time.h>
#include <cstdlib>

int main()
{
    int N = 60;
    int secreto = 0;
    int lance = 0;
    int contador=0;
    std::srand(time(0));
    secreto = std::rand() % N;

    do
    {
        std::cout << "Digite um papite entre 0 e 60: ";
        std::cin >> lance;
        if (lance<secreto)
            std::cout<<"MAIOR \n";
        if (lance>secreto)
            std::cout<<"MENOR \n";
        contador++;
    }
    while (secreto != lance);
    std::cout<<"\n\nAcertou depois de "<<contador<<" tentativas \n";
    std::cout<<"O número secreto era "<<secreto<<"\n\n";

        return 0;
}
