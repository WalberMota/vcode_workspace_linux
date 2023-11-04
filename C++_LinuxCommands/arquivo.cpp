#include <iostream>
#include <fstream>
#include <string>
#include <vector>

std::string linha,casa,str;
std::vector <char> vet[100];

int main(int argc, char const *argv[])
{   //tomar como base o programa para entender o sentido OUT e IN
    //ofstream - sai do programa. (out). Abre o arquivo para receber.
    //ifstream - entra no programa. (in). Abre o arquivo para ler
    //fstram   - pode fazer a abertura do arquivo para ler e escrever.
/* 
    std::ofstream arquivoOut; // armazena no arquivo apagando o conteudo anterior.
    // para adicionar usar:    arquivo.open("ls",std::ofstream::ios_base::app);
    arquivoOut.open("ls");
    arquivoOut << "1 - Bicicleta\n";
    arquivoOut << "2 - Carro\n";
    arquivoOut << "3 - Família\n";
    arquivoOut.close();
 */
    //cria o arquivo 'ls' com a listagem de plocatee.db
    system("ls /var/lib/plocate/plocate.db -lh > ls");
    std::ifstream arquivoIn;
    std::string linha;
    arquivoIn.open("ls");
    if(arquivoIn.is_open())
    {
        while (getline(arquivoIn,linha))
        {
            std::cout << linha <<'\n';
            casa=linha;
        }
    }
    else
    {
        std::cout << "Não foi possivel abrir o arquivo !"<<'\n';
    }
    //salva o mês e o dia da criaçao da arquivo plocate.db na variável vetor 'vet'
    for(int i=0;i<6;i++)
    {
        vet->push_back(casa[i+30]);
    }    
    
    std::string str(vet->begin(),vet->end());//transforma o vetor em string 
    std::cout <<"final : "<<str; // imprime a string com mês e dia 
    return 0;
}
