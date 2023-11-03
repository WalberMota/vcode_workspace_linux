#include<iostream>
#include<fstream>

int main(int argc, char const *argv[])
{   //tomar como base o programa.
    //ofstream - sai do programa. (out). Abre o arquivo para receber.
    //ifstream - entra no programa. (in). Abre o arquivo para ler
    //fstram   - pode fazer a abertura do arquivo para ler e escrever.

    std::ofstream arquivoOut; // armazena no arquivo apagando o conteudo anterior.
    // para adicionar usar:    arquivo.open("ls",std::ofstream::ios_base::app);
    arquivoOut.open("ls");
    arquivoOut << "casa";
    
    arquivoOut.close();

    
    return 0;
}
