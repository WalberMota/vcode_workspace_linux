#include <iostream>
#include <ctime>
#include <string>

int i;
int main()
{
    time_t hora;
    tm *infotempo;
    char exibir[10];
    time(&hora);
    infotempo = localtime(&hora);

    struct tm data1 = {0}; // data inicial
    struct tm data2 = {0}; // data final

    // Recebe a DUM
    int dumdia, dummes, dumano;
    std::string dum, stringtempo;

    system("clear");
    std::cout << "Digite a data da ultima menstruação somente numeros:ex. 02052024\n";
    // std::cin.ignore();
    std::getline(std::cin, dum);
    // std::cout <<  dum.length()<<" caracteres "<< "\n\n";
    system("clear");
    for (i = 0; i < 2; i++)
    {
        stringtempo = stringtempo + dum[i];
        dumdia = std::stoi(stringtempo);
    }
    stringtempo = "";
    for (i = 2; i < 4; i++)
    {
        stringtempo = stringtempo + dum[i];
        dummes = std::stoi(stringtempo);
    }
    stringtempo = "";
    for (i = 4; i < dum.length(); i++)
    {
        stringtempo = stringtempo + dum[i];
        dumano = std::stoi(stringtempo);
    }

    // mostra a data atual
    time_t a_time;
    time(&a_time);
    std::cout << asctime(localtime(&a_time)) << '\n';

    // mostra a DUM
    std::cout << "Data da Última Menstruação = " << dumdia << "/" << dummes << "/" << dumano << '\n';

    // std::cout << "dia da dum= "<< dumdia << '\n';

    // preenche as datas
    data1.tm_year = dumano - 1900; // ano - 1900
    data1.tm_mon = dummes;         // mês (0-11)
    data1.tm_mday = dumdia;        // dia

    // adquire a data atual
    int ano = 1900 + infotempo->tm_year;
    data2.tm_year = ano - 1900;

    int mes = 1 + infotempo->tm_mon;
    data2.tm_mon = mes;

    int dia = infotempo->tm_mday;
    data2.tm_mday = dia;

    // converte as datas para segundos
    time_t segundos1 = mktime(&data1);
    time_t segundos2 = mktime(&data2);

    time_t DPP = segundos1 + (285 * 86400);
    // calcula a diferença em segundos
    double diferenca = difftime(segundos2, segundos1);

    // converte a diferença em dias e imprime
    int dias = diferenca / 86400;

    // separa a fração decimal das semanas
    double restosemana = ((diferenca / 86400) / 7) - (dias / 7);
    double restoemdias = restosemana * 7;

    // mostra o resultado
    std::cout << "Dias de gestação: " << dias << " dias.\n";
    std::cout << "Semanas de gestação " << (dias / 7) << " semanas e " << restoemdias << " dias." << std::endl;

    int dppano, dppmes, dppdia;

    dppdia = dumdia + 7;
    if (dppdia > 30)
    {
        dppdia = dppdia - 30;
        dppmes=dummes+10;
    }
    else
    {
        dppmes = dummes + 9;
    }

    if (dppmes > 12)
    {
        dppmes = dppmes - 12;
        dppano = dumano + 1;
    }
    else
    {
        dppano = dumano;
    }

    std::cout << "DDP = " << dppdia << "/" << dppmes << "/" << dppano << '\n';
    return 0;
}