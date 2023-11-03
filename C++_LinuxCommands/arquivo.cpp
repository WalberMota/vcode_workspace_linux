#include<iostream>
#include<fstream>

int main(int argc, char const *argv[])
{   //tomar como base o programa.
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
    std::ifstream arquivoIn;
    std::string linha;
    arquivoIn.open("ls");
    if(arquivoIn.is_open())
    {
        while (getline(arquivoIn,linha))
        {
            std::cout << linha <<'\n';
        }
        



    }
    else
    {

        std::cout << "Não foi possivel abrir o arquivo !"<<'\n';
    }

    
    return 0;
}
