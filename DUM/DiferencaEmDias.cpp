#include <iostream>
#include <ctime>
#include <string>


    int i;
int main()
{
    struct tm data1 = {0}; // data inicial
    struct tm data2 = {0}; // data final

    //Recebe a DUM
    int dumdia,dummes,dumano;
    std::string dum, stringtempo;

    system("clear");
    std::cout << "Digite a data da ultima menstruação somente numeros:\n";
    //std::cin.ignore();
    std::getline(std::cin, dum);
    std::cout <<  dum.length()<<" caracteres "<< "\n\n";

    for (i=0;i<2;i++){
        if (i=1){ 
            stringtempo=stringtempo+dum[i];
            dumdia=std::stoi(stringtempo);
            stringtempo="";
        }
        if (i=3) {
            stringtempo=stringtempo+dum[i];
            dummes=std::stoi(stringtempo);
            stringtempo="";
        }
        if (i=7) {
            stringtempo=stringtempo+dum[i];
            dumano=std::stoi(stringtempo);
            stringtempo="";
        }        
    }
    std::cout << dumdia <<"/"<<dummes<<"/<<dumano"<<'\n';

    
    //std::cout << "dia da dum= "<< dumdia << '\n';
    

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