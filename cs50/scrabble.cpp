#include <iostream>
#include <string>

std::string palavra_player1;

int main(int argc, char const *argv[])
{
    system("clear");

    std::cout << "Jogador 1\nDigite uma palavra: ";
    std::cin >> palavra_player1;
 
    int tamanho_palavra = palavra_player1.length();

    for (int i=0;i<tamanho_palavra;i++)//função que mostrar o array
    {
        std::cout << "caracter["<<i<<"] = "<<palavra_player1[i]<<'\n';

    }
        std::cout<<'\n'<<"palavra_player1="<<palavra_player1<<'\n';    
    return 0;
}
