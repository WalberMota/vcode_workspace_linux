#include <iostream>
#include <ctime>
#include <string>

int main()
{
    struct tm data1 = {0}; // data inicial
    struct tm data2 = {0}; // data final

    //Recebe a DUM
    int dumdia,dummes,dumano;
    std::string dum;

    system("clear");

    std::cout << "Digite a data da ultima menstruação somente numeros:\n";
    std::getline(std::cin, dum);

    std::cout <<  dum.length() << '\n';



    // preenche as datas
    data1.tm_year = 2023 - 1900; // ano - 1900
    data1.tm_mon = 11;            // mês (0-11)
    data1.tm_mday = 12;           // dia
    data2.tm_year = 2024 - 1900;
    data2.tm_mon = 1;
    data2.tm_mday = 5;

    // converte as datas para segundos
    time_t segundos1 = mktime(&data1);
    time_t segundos2 = mktime(&data2);

    // calcula a diferença em segundos
    double diferenca = difftime(segundos2, segundos1);

    // converte a diferença em dias e imprime

    
    int dias = diferenca / 86400;
    
    double restosemana=((diferenca/86400)/7) - (dias/7);
    double restoemdias=restosemana*7;

    std::cout << "Dias de gestação: " << dias << " dias.\n";
    std::cout << "Semanas de gestação " << (dias/7) << " semanas e "<<restoemdias <<" dias."<<std::endl;
    
    //std::cout << "fração de semana " << restosemana << " semanas.\n";
    //std::cout << "fração de dias " << restoemdias << " dias.\n";
    
    return 0;
}