/*
Programa:hora.cpp
Escrito por: Marcos Pacheco (Udemy) - Em resposta à minha pergunta.
Linguagem: C++
Data da Criação: 09 Outubro 2023
Version 01.00 
locale=en_US.UTF-8,Utf16=on,HugeFiles=on,64 bits,4 CPUs Intel(R) Core(TM)
i5-5200U CPU @ 2.20GHz (306D4)
Propósito:  Imprime os digitos de hora sempre com 2 digitos completa com 0 quando necessário.
*/


#include <iostream>
#include <ctime>
#include <iomanip> // Para manipulação de saída formatada
 
int main(int argc, char const *argv[])
{
    time_t HoraAtual = time(0);
    tm *MinhaHora = localtime(&HoraAtual);
 
    int hora = MinhaHora->tm_hour;
    int minutos = MinhaHora->tm_min;
    int segundos = MinhaHora->tm_sec;
 
    std::cout << "Hora Atual: ";
 
    // Use std::setw para definir a largura do campo e std::setfill para preenchimento com zero
    std::cout << std::setw(2) << std::setfill('0') << hora << ":";
    std::cout << std::setw(2) << std::setfill('0') << minutos << ":";
    std::cout << std::setw(2) << std::setfill('0') << segundos << std::endl;
 
    return 0;
}