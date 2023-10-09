/*
Programa:hora.cpp
Escrito por: Marcos Pacheco (Udemy) - Em resposta à minha pergunta.
Linguagem: C++
Data da Criação: 09 Outubro 2023
Version 01.00 
locale=en_US.UTF-8,Utf16=on,HugeFiles=on,64 bits,4 CPUs Intel(R) Core(TM)
i5-5200U CPU @ 2.20GHz (306D4)
Propósito:  Exibe a hora do sistema continuamente na tela.
*/

#include <iostream>
#include <ctime>
#include <iomanip>
#include <thread> // Inclua a biblioteca <thread> para usar std::this_thread
#include <chrono> // Inclua a biblioteca <chrono> para usar std::chrono
 
int main(int argc, char const *argv[])
{
    while (true)
    {
        system("cls||clear");        
        time_t HoraAtual = time(0);
        tm *MinhaHora = localtime(&HoraAtual);
 
        int hora = MinhaHora->tm_hour;
        int minutos = MinhaHora->tm_min;
        int segundos = MinhaHora->tm_sec;
 
        std::cout << "Hora Atual: ";
 
        std::cout << std::setw(2) << std::setfill('0') << hora << ":";
        std::cout << std::setw(2) << std::setfill('0') << minutos << ":";
        std::cout << std::setw(2) << std::setfill('0') << segundos << std::endl;
 
       // Aguarde um segundo antes de atualizar novamente
        std::this_thread::sleep_for(std::chrono::seconds(1));
 //       system("cls||clear");
      }
 
    return 0;
}