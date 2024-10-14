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
    std::cout << exibir << std::endl; // exibir;
    std::cout << "\nDIA: " << infotempo->tm_mday << '\n';
    int dia= infotempo->tm_mday;
    std::cout << dia+10 << '\n';
    std::cout << "MES: " << 1 + infotempo->tm_mon;
    std::cout << "ANO" << 1900 + infotempo->tm_year << '\n';

    return 0;
}
