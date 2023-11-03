#include<iostream>
#include<fstream>
#include<string>

std::string meu;

int main(int argc, char const *argv[])
{   //tomar como base o programa.
    //ofstream - sai do programa. (out). Abre o arquivo para receber.
    //ifstream - entra no programa. (in). Abre o arquivo para ler
    //fstram   - pode fazer a abertura do arquivo para ler e escrever.

    std::ofstream arquivo; // armazena no arquivo apagando o conteudo anterior.
    // para adicionar usar:    arquivo.open("ls",std::ofstream::ios_base::app);
    arquivo.open("ls");
    arquivo << "casa";
    
    arquivo.close();

    
    return 0;
}
