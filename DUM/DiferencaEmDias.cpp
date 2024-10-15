#include <iostream>
#include <ctime>

int main()
{
    struct tm data1 = {0}; // data inicial
    struct tm data2 = {0}; // data final

    // preenche as datas
    data1.tm_year = 2023 - 1900; // ano - 1900
    data1.tm_mon = 11;            // mês (0-11)
    data1.tm_mday = 12;           // dia
    data2.tm_year = 2024 - 1900;
    data2.tm_mon = 2;
    data2.tm_mday = 5;

    // converte as datas para segundos
    time_t segundos1 = mktime(&data1);
    time_t segundos2 = mktime(&data2);

    // calcula a diferença em segundos
    double diferenca = difftime(segundos2, segundos1);

    // converte a diferença em dias e imprime
    int dias = diferenca / 86400;
    std::cout << "A diferença entre as datas é de " << (dias/7) << " semanas.\n";

    return 0;
}