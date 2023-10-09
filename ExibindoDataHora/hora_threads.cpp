#include <iostream>
#include <ctime>
#include <iomanip>
#include <thread> // Inclua a biblioteca <thread> para usar std::this_thread
#include <chrono> // Inclua a biblioteca <chrono> para usar std::chrono
 
int main(int argc, char const *argv[])
{
    while (true)
    {
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
        system("cls||clear");
      }
 
    return 0;
}