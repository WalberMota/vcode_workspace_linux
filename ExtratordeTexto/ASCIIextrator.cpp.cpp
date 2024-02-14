/*
Programa:ASCIIextrator.cpp
Escrito por: Walber Mota
Linguagem: C++
Data da Criação: 07 Junho 2023
Version 01.00 
locale=en_US.UTF-8,Utf16=on,HugeFiles=on,64 bits,4 CPUs Intel(R) Core(TM)
i5-5200U CPU @ 2.20GHz (306D4)
Propósito:  Extrair texto de arquivos.
*/

#include <iostream>
#include <fstream>
#include <filesystem>


int main ()
{
    char nome[256];
    std::cout << "\n";
    std::cout << "=================================\n";
    std::cout << "|  EXTRAIR TEXTO DE UM ARQUIVO  |\n";
    std::cout << "=================================\n";
    std::cout << "\n";

    std::cout << "Digite o nome do arquivo: ";
    std::cin.get (nome,256); //recebe do usuário o nome do arquivo


    std::ifstream is(nome);     // abre o arquivo

        char c;
        while (is.get(c))           // loop para pegar os caracteres simples um a um

            if (c=='A'||c=='B'||c=='C'||c=='D'||c=='E'||c=='F'||c=='G'||c=='H'||c=='I'||c=='J'||c=='K'||c=='L'||c=='M'||c=='N'||c=='O'||c=='P'||c=='Q'||c=='R'||c=='S'||c=='T'||c=='U'||c=='V'||c=='W'||c=='X'||c=='Y'||c=='Z'||c=='a'||c=='b'||c=='c'||c=='d'||c=='e'||c=='f'||c=='g'||c=='h'||c=='i'||c=='j'||c=='k'||c=='l'||c=='m'||c=='n'||c=='o'||c=='p'||c=='q'||c=='r'||c=='s'||c=='t'||c=='u'||c=='v'||c=='w'||c=='x'||c=='y'||c=='z'||c=='1'||c=='2'||c=='3'||c=='4'||c=='5'||c=='6'||c=='7'||c=='8'||c=='9'||c=='0')
            {
                std::cout << c;
            }

        is.close();                // fecha o arquivo

    std::filesystem::exists(nome) ? std::cout << "\n\n Extração concluída!\n" : std::cout << "\n\nArquivo não encontrado!\n";//testa se saiu tudo bem
    return 0;

}
