/*usando strftime*/
#include <iostream>
#include <ctime>
#include <string>

int main(int argc, char const *argv[])
{
    //std::string a;

    time_t hora;
    tm *infotempo;
    char exibir[10];
    time(&hora);
    infotempo = localtime(&hora);

    strftime(exibir, 10, "%H:%M:%S", infotempo);
    // puts(exibir);

    std::cout <<"HORA LOCAL: " <<exibir << std::endl; // exibir;

    int dia= infotempo->tm_mday;
    std::cout << "DIA: " << dia << '\n';
    
    //ARMAZENA O MES
    int mes= 1+ infotempo->tm_mon;
    std::cout << "MÊS: " << mes << '\n';

    //ARMAZENA O ANO
    int ano= 1900 + infotempo->tm_year;
    std::cout << "ANO: " << ano << '\n';

    return 0;
}
